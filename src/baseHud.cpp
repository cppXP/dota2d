#include "../include/baseHud.h"

namespace dota2d
{

  BaseHud::BaseHud()
  {

  }

  void BaseHud::render(sf::RenderWindow& window, const dota2d::BaseCamera& camera)
  {
    // for (int x = 0; x < m_vector_texts.size(); x++)
    // {
    //   window.draw(m_vector_texts[x]);
    // }
    // for (int i = 0; i < m_vector_texts.size(); i++)
    // {
    //
    //   // sf::Text* text = m_vector_texts[i];
    //   window.draw(m_vector_texts[i]);
    // }
    for(sf::Text *texss : m_vector_texts)
  	{
  		window.draw((*texss));
  	}

    for (int i = 0; i < m_vector_sprites.size(); i++)
    {
      window.draw(m_vector_sprites[i].getSprite());
    }
  }

  void BaseHud::init()
  {
    unsigned int temp_fontsize= 35;
    sf::Font default_font;
    if(!default_font.loadFromFile(ASSEST_GAME_FONT_DEFAULT))
      std::cout << "error while loading default font\n";

      sf::Text* texxt = new sf::Text("Heros name here", default_font, temp_fontsize);
      sf::Text* texxt2 = new sf::Text("mana name here", default_font, temp_fontsize);
      sf::Text* texxt3 = new sf::Text("hitpint name here", default_font, temp_fontsize);

    	m_vector_texts.push_back(texxt);
      m_vector_texts.push_back(texxt2);
      m_vector_texts.push_back(texxt3);


    //create sprites
    // BaseSprite center_bottom (..)., left_bottom(...), right_bottoms;
    BaseSprite center_bottom(ASSEST_GAME_HUD_CENTER_BOTTOM, sf::Vector2f(100,100));
    m_vector_sprites.push_back(center_bottom);
  }

}
