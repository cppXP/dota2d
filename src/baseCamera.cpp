#include "../include/baseCamera.h"


dota2d::BaseCamera::BaseCamera()
{
  setCamera_position(sf::Vector2i(0,0));
  setCamera_zoom(0.0);
  setCamera_rotate(0.0);
  setCamera_speed(5);
  setCamera_mouseBorder(5);
  setCamera_viewport(sf::FloatRect(0,0, 1.0f, 1.0f));
  m_log.set_pre_message(" cameraLog : ");
  m_log.debug("camera constractor called.\n");
}


dota2d::BaseCamera::BaseCamera(
           sf::Vector2i c_pos,
           float c_zoom,float c_rotate,
           int c_speed,int c_mouseBorder,
           sf::FloatRect c_viewport)
{
  setCamera_position(c_pos);
  setCamera_zoom(c_zoom);
  setCamera_rotate(c_rotate);
  setCamera_speed(c_speed);
  setCamera_mouseBorder(c_mouseBorder);
  setCamera_viewport(c_viewport);
  m_log.set_pre_message(" cameraLog : ");
  m_log.debug("camera constractor called.\n");
}


sf::View dota2d::BaseCamera::getView()
{
  return m_camera;
}

void dota2d::BaseCamera::doReset(sf::FloatRect _value)
{
  m_camera.reset(_value);
}

void dota2d::BaseCamera::doZoom(float _zoomValue)
{
  m_camera.zoom(_zoomValue);
}

void dota2d::BaseCamera::doRotate(float _rotateValue)
{
  m_camera.rotate(_rotateValue);
}

void dota2d::BaseCamera::doMove(float _x, float _y)
{
    m_camera.move(_x,_y);
    // _x += getCamera_position().x;
    // _y += getCamera_position().y;
    setCamera_position(sf::Vector2i(_x,_y));
}

void dota2d::BaseCamera::doMove(sf::Vector2i _min_pos ,sf::Vector2i _max_pos, camera_move_direction _direction)
{
  switch(_direction)
  {
    case camera_move_direction::Left:
    {
      if(!(m_camera_position.x <= _min_pos.x))
        m_camera_position.x -= m_camera_speed;
      // else
        // std::cout << "left map ended.\n";
    }break;

    case camera_move_direction::Right:
    {
      if(!(m_camera_position.x >= _max_pos.x))
        m_camera_position.x += m_camera_speed;
      // else
        // std::cout << "right map ended.\n";
    }break;

    case camera_move_direction::Up:
    {
      if(!(m_camera_position.y <= _min_pos.y))
        m_camera_position.y -= m_camera_speed;
      // else
        // std::cout << "up map ended.\n";
    }break;

    case camera_move_direction::Down:
    {
      if(!(m_camera_position.y >= _max_pos.y))
        m_camera_position.y += m_camera_speed;
      // else
        // std::cout << "down map ended.\n";
    }break;

    default:
    {
      return;
      std::cout << " can not understand doMove(camera_move_direction)\n";
    }break;
  }
  doMove((float)m_camera_position.x,(float)m_camera_position.y);
  // std::cout << "camera doMove with direction called. \n";
}


void dota2d::BaseCamera::doViewport(sf::FloatRect _viewport)
{
  m_camera.setViewport(_viewport);
}

void dota2d::BaseCamera::doCenter(sf::Vector2f _pos)
{
  m_camera.setCenter(_pos);
}


void dota2d::BaseCamera::setCamera_speed(int _speed)
{
  m_camera_speed = _speed;
}
void dota2d::BaseCamera::setCamera_zoom(float _zoom)
{
  m_camera_zoom = _zoom;
}
void dota2d::BaseCamera::setCamera_rotate(float _rotate)
{
  m_camera_rotate = _rotate;
}
void dota2d::BaseCamera::setCamera_position(sf::Vector2i _pos)
{
  m_camera_position = _pos;
}
void dota2d::BaseCamera::setCamera_viewport(sf::FloatRect _vp)
{
  m_camera_viewport = _vp;
}
void dota2d::BaseCamera::setCamera_mouseBorder(int _mborder)
{
  m_camera_mouseBorder = _mborder;
}






sf::Vector2i dota2d::BaseCamera::getCamera_position()
{
  return m_camera_position;
}

sf::FloatRect dota2d::BaseCamera::getCamera_viewport()
{
  return m_camera_viewport;
}

int dota2d::BaseCamera::getCamera_mouseBorder()
{
  return m_camera_mouseBorder;
}

float dota2d::BaseCamera::getCamera_zoom()
{
  return m_camera_zoom;
}

int dota2d::BaseCamera::getCamera_speed()
{
  return m_camera_speed;
}

float dota2d::BaseCamera::getCamera_rotate()
{
  return m_camera_rotate;
}


void dota2d::BaseCamera::printCamera_stats()
{
  std::cout << "baseCamera::PrintCamera_stats(): "
  // << "\n camera_pos = " << getCamera_position()
  // << "\n camera_zoom = " << getCamera_zoom()
  // << "\n camera_rotate = " << getCamera_rotate()
  // << "\n camera_speed = " << getCamera_speed()
  // << "\n camera_mouseBorder = " << getCamera_mouseBorder()
  // << "\n camera_viewport = " << getCamera_viewport()
  << std::endl;
}
