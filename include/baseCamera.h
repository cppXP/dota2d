#ifndef DOTA2D_BASE_CAMERA_HEADER
#define DOTA2D_BASE_CAMERA_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include "baseLog.h"

namespace dota2d
{
  enum class camera_move_direction
  {
    Left,
    Right,
    Up,
    Down
  };
  class BaseCamera
  {
  private:
    BaseLog m_log;
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


   sf::Vector2i getCamera_position() const;
   sf::FloatRect getCamera_viewport() const;
   int getCamera_mouseBorder() const;
   float getCamera_zoom() const;
   int getCamera_speed() const;
   float getCamera_rotate() const;
   sf::View getView() const;
   sf::Vector2f getCamera_center() const;


   //actions
   void printCamera_stats() const;
   void doReset(sf::FloatRect);
   void doViewport(sf::FloatRect);
   void doZoom(float);
   void doRotate(float);
   void doCenter(sf::Vector2f);
   void doMove(float,float);
   void doMove(sf::Vector2i,sf::Vector2i,camera_move_direction);


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
