#ifndef DOTA2D_GAME_HEADER
#define DOTA2D_GAME_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "baseCamera.h"
#include "baseWindow.h"

namespace dota2d
{
  class Game : public BaseWindow, public BaseCamera //, public BaseSprite
  {

  private:
    sf::Texture m_background_texture;
		sf::Sprite m_background_sprite;
		sf::Vector2f m_background_position;
    std::string m_background_texture_path;

  protected:
    sf::Vector2i m_map_minimum_position;
    sf::Vector2i m_map_maximum_position;

    public:
      Game(sf::Vector2i _minmap,sf::Vector2i _maxmap,
           int w_height ,int w_width ,std::string w_title , //window.pos.. //window
           sf::Vector2i c_pos ,float c_zoom,float c_rotate,int c_speed,int c_mouseBorder, sf::FloatRect c_viewport, // Camera
           std::string bg_texture, sf::Vector2f bg_position //baseSprite
         ) : BaseWindow(w_height,w_width,w_title)
           // , BaseSprite(g_texture, g_spritePos)
           , BaseCamera(c_pos, c_zoom, c_rotate, c_speed, c_mouseBorder, c_viewport)
           {
              setMap_min_pos(_minmap);
              setMap_max_pos(_maxmap);
              m_background_texture_path = bg_texture;
              m_background_position = bg_position;
           };


      void setMap_min_pos(sf::Vector2i);
      void setMap_max_pos(sf::Vector2i);
      sf::Vector2i getMap_min_pos();
      sf::Vector2i getMap_max_pos();

      //actions
      void printGame_stats();
      void draw();
      void init();
      void run();
      void moveCamera();
  };
}
#endif
