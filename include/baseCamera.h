#ifndef DOTA2D_BASE_CAMERA_HEADER
#define DOTA2D_BASE_CAMERA_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>

namespace dota2d
{
  class BaseCamera
  {
  public:
    BaseCamera();
    BaseCamera(sf::Vector2i,
               float,float,
               int,int,
               sf::FloatRect);

   void setCamera_position(sf::Vector2i);
   void setCamera_zoom(float);
   void setCamera_rotate(float);
   void setCamera_speed(int);
   void setCamera_mouseBorder(int);
   void setCamera_viewport(sf::FloatRect);


   sf::Vector2i getCamera_position();
   sf::FloatRect getCamera_viewport();
   int getCamera_mouseBorder();
   float getCamera_zoom();
   int getCamera_speed();
   float getCamera_rotate();


   //actions
   void printCamera_stats();


  protected:
    sf::Vector2i m_camera_position;
    float m_camera_zoom;
    float m_camera_rotate;
    int m_camera_speed;
    int m_camera_mouseBorder;
    sf::FloatRect m_camera_viewport;
    sf::View m_camera;


  };
}

#endif
