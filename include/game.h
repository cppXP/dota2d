#ifndef DOTA2D_GAME_HEADER
#define DOTA2D_GAME_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "baseCamera.h"
#include "baseWindow.h"

namespace dota2d
{
  class Game : public BaseWindow, public BaseCamera
  {
    public:
      Game(sf::Vector2i,sf::Vector2i,
           int w_height ,int w_width ,std::string w_title ,sf::Style w_style, //window
           sf::Vector2i c_pos ,float c_zoom,float c_rotate,int c_speed,int c_mouseBorder, sf::FloatRect c_viewport// Camera
         ) : BaseWindow(w_height,w_width,w_title,w_style)
           : BaseCamera(c_pos, c_zoom, c_rotate, c_speed, c_mouseBorder, c_viewport);

      Game(sf::Vector2i,sf::Vector2i,
          int w_height ,int w_width ,std::string w_title ,sf::Style w_style, sf::Vector2i w_pos, //window
          sf::Vector2i c_pos ,float c_zoom,float c_rotate,int c_speed,int c_mouseBorder, sf::FloatRect c_viewport// Camera
        ) : BaseWindow(w_height,w_width,w_title,w_style,w_pos)
          : BaseCamera(c_pos, c_zoom, c_rotate, c_speed, c_mouseBorder, c_viewport);

      void setMap_min_pos(sf::Vector2i);
      void setMap_max_pos(sf::Vector2i);

      sf::Vector2i getMap_min_pos();
      sf::Vector2i getMap_max_pos();

      //actions
      void printGame_stats();

    protected:
      sf::Vector2i m_map_minimum_position;
      sf::Vector2i m_map_maximum_position;

  };
}
#endif
