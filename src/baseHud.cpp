#include "../include/baseHud.h"

namespace dota2d
{

  BaseHud::BaseHud()
  {

  }


  void BaseHud::init() //got error from sf::Text while drawin, and sprite cant not load textures.
  {
    // unsigned int temp_fontsize= 35;
    // sf::Font default_font;
    // if(!default_font.loadFromFile(ASSEST_GAME_FONT_DEFAULT))
    //   std::cout << "error while loading default font\n";
      //
      // sf::Text* texxt = new sf::Text("Heros name here", default_font, temp_fontsize);
      // sf::Text* texxt2 = new sf::Text("mana name here", default_font, temp_fontsize);
      // sf::Text* texxt3 = new sf::Text("hitpint name here", default_font, temp_fontsize);
      //
    	// m_vector_texts.push_back(texxt);
      // m_vector_texts.push_back(texxt2);
      // m_vector_texts.push_back(texxt3);


    //create sprites
    // BaseSprite center_bottom (..)., left_bottom(...), right_bottoms;
    // BaseSprite center_bottom(ASSEST_GAME_HUD_CENTER_BOTTOM, sf::Vector2f(1000,100));
    // m_vector_sprites.push_back(center_bottom);
  }

}
