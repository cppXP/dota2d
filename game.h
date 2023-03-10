#ifndef DOTA2D_GAME_HEADER
#define DOTA2D_GAME_HEADER
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

#include "./include/baseBuilding.h"
namespace dota2d
{
  class Game
  {
  public:
    //window
    int m_window_height;
    int m_window_width;
    int m_window_style;
    std::string m_window_title;

    //camera
    sf::Vector2i m_camera_position;
    int m_camera_mouse_range;
    int m_camera_speed;
    sf::Vector2i m_map_minimum;
    sf::Vector2i m_map_maximum;
    Game()
    {
      m_window_width = sf::VideoMode::getDesktopMode().width;
      m_window_height= sf::VideoMode::getDesktopMode().height;
      m_window_style = sf::Style::Fullscreen;
      m_window_title = "dota2d game";
      m_camera_position = sf::Vector2i(0.0 ,0.0);
      m_camera_mouse_range = 5;
      m_camera_speed = 5;
      m_map_maximum = sf::Vector2i(2950, 1650);
      m_map_minimum = sf::Vector2i(0,0);
    }


  };

}

#endif
