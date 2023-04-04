#include "../include/baseEvent.h"


dota2d::BaseEvent::BaseEvent()
{
  m_log.set_pre_message(" eventLog : ");
  m_log.debug("baseEvent object created without texture and position.");
}

void dota2d::BaseEvent::live_inputs(sf::Event _event, BaseCamera& _camera, sf::RenderWindow* _window, sf::Vector2i _min_pos ,sf::Vector2i _max_pos)
{
  //mouse
  // Move Camera By Mouse Movement LIVE
  sf::Vector2i position = sf::Mouse::getPosition((*_window));
  if(position.x <= _camera.getCamera_mouseBorder()) //go left
    _camera.doMove(_min_pos,_max_pos,camera_move_direction::Left);

  if(position.y <= _camera.getCamera_mouseBorder()) //go top
    _camera.doMove(_min_pos,_max_pos,camera_move_direction::Up);

  if(position.y > _window->getSize().y - _camera.getCamera_mouseBorder()) //go bottom
    _camera.doMove(_min_pos,_max_pos,camera_move_direction::Down);

  if(position.x > _window->getSize().x - _camera.getCamera_mouseBorder()) //go right
  _camera.doMove(_min_pos,_max_pos,camera_move_direction::Right);



  // Move Camera By Keyboard Movement LIVE
  if(sf::Keyboard::isKeyPressed( (sf::Keyboard::Key) m_hotkeys.h_camera_down ))
     _camera.doMove(_min_pos,_max_pos,camera_move_direction::Down);
  if(sf::Keyboard::isKeyPressed( (sf::Keyboard::Key) m_hotkeys.h_camera_right ))
     _camera.doMove(_min_pos,_max_pos,camera_move_direction::Right);
  if(sf::Keyboard::isKeyPressed( (sf::Keyboard::Key) m_hotkeys.h_camera_left ))
     _camera.doMove(_min_pos,_max_pos,camera_move_direction::Left);
  if(sf::Keyboard::isKeyPressed( (sf::Keyboard::Key) m_hotkeys.h_camera_up ))
     _camera.doMove(_min_pos,_max_pos,camera_move_direction::Up);



 #if EVENT_CONFIG_DEVELOPER_TOOLS == 1

     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
     {
       ew_safe_close(_event, (*_window));
     }

     if(sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
     {
       EVENT_DEV_TOOL_LOG("zoom out.? zoom before=" << _camera.getCamera_zoom());
       _camera.setCamera_zoom(_camera.getCamera_zoom() + 0.1);
       EVENT_DEV_TOOL_LOG("zoom out.? zoom after=" << _camera.getCamera_zoom());
     }
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::F2))
     {
       EVENT_DEV_TOOL_LOG("zoom in.? zoom before=" << _camera.getCamera_zoom());
       if(_camera.getCamera_zoom()>=1.0)
        _camera.setCamera_zoom(_camera.getCamera_zoom() - 0.1);
       EVENT_DEV_TOOL_LOG("zoom in.? zoom after=" << _camera.getCamera_zoom());
     }
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::F3))
     {
       sf::Vector2i mouse_pos = sf::Mouse::getPosition((*_window));
       // -400 because of given position was wrong. was +400 more, i think this cause of cameras zoom value
       const int mouse_x_value = (mouse_pos.x +_camera.getCamera_position().x) -400;
       const int mouse_y_value = (mouse_pos.y + _camera.getCamera_position().y) -400;
       EVENT_DEV_TOOL_LOG("left clicked position = " << mouse_x_value << " y= " << mouse_y_value);
     }
  #endif

}

void dota2d::BaseEvent::inputs(sf::RenderWindow* _window, BaseCamera* _camera, sf::Vector2i _min_pos , sf::Vector2i _max_pos)
{
  sf::Event event;
  live_inputs(event, (*_camera), &(*_window), _min_pos, _max_pos);
  while(_window->pollEvent(event))
  {
    switch(event.type)
    {
      //window
      case sf::Event::Closed:
        ew_safe_close(event, (*_window));
        break;
      case sf::Event::GainedFocus:
        ew_gained_focus(event);
        break;
      case sf::Event::LostFocus:
        ew_lost_focus(event);
        break;
      case sf::Event::Resized:
        ew_resized(event);
        break;
      case sf::Event::MouseLeft:
        ew_mouse_leaves(event);
        break;
      case sf::Event::MouseEntered:
        ew_mouse_entered(event);
        break;


      //mouse
      case sf::Event::MouseButtonPressed:
        em_pressed(event);
        break;
      case sf::Event::MouseButtonReleased:
        em_released(event);
        break;
      case sf::Event::MouseMoved:
        em_moved(event);
        break;
      case sf::Event::MouseWheelMoved:
        em_wheel_moved(event);
        break;

      //keyboard
      case sf::Event::KeyPressed:
        ek_pressed(event);
        break;
      case sf::Event::KeyReleased:
        ek_released(event);
        break;
      case sf::Event::TextEntered:
        ek_text_entered(event);
        break;
    }
  }
}





// Window
void dota2d::BaseEvent::ew_gained_focus(sf::Event _event)
{
  EVENT_DEBUG_LOG("window gained focus.");
}

void dota2d::BaseEvent::ew_safe_close(sf::Event _event, sf::RenderWindow& window)
{
  EVENT_DEBUG_LOG("window safe close.");
  window.close();
}

void dota2d::BaseEvent::ew_lost_focus(sf::Event _event)
{
  EVENT_DEBUG_LOG("window lost focus.");
}

void dota2d::BaseEvent::ew_resized(sf::Event _event)
{
  EVENT_DEBUG_LOG("window resized.");
}

void dota2d::BaseEvent::ew_mouse_leaves(sf::Event _event)
{
  EVENT_DEBUG_LOG("windows mouse leaves.");
}

void dota2d::BaseEvent::ew_mouse_entered(sf::Event _event)
{
  EVENT_DEBUG_LOG("windows mouse entered.");
}

// Mouse
void dota2d::BaseEvent::em_pressed(sf::Event _event)
{
  EVENT_DEBUG_LOG("mouse pressed.");
  if(_event.mouseButton.button == sf::Mouse::Left)
  {
    EVENT_DEBUG_LOG("mouse left pressed.");
  }
  else if(_event.mouseButton.button == sf::Mouse::Right)
  {
    EVENT_DEBUG_LOG("mouse right pressed.");
  }
}

void dota2d::BaseEvent::em_released(sf::Event _event)
{
  EVENT_DEBUG_LOG("mouse released.");
  if(_event.mouseButton.button == sf::Mouse::Left)
  {
    EVENT_DEBUG_LOG("mouse left released.");
  }
  else if(_event.mouseButton.button == sf::Mouse::Right)
  {
    EVENT_DEBUG_LOG("mouse right released.");
  }
}


void dota2d::BaseEvent::em_moved(sf::Event _event)
{
  EVENT_DEBUG_LOG("mouse moved.");
}

void dota2d::BaseEvent::em_wheel_moved(sf::Event _event)
{
  EVENT_DEBUG_LOG("mouse wheel moved.");
}



// Keyboard
void dota2d::BaseEvent::ek_pressed(sf::Event _event)
{
  EVENT_DEBUG_LOG("keyboard pressed.");
 EVENT_DEBUG_LOG("key code = " _event.key.code);
}
void dota2d::BaseEvent::ek_released(sf::Event _event)
{
  EVENT_DEBUG_LOG("keyboard released.");
}
void dota2d::BaseEvent::ek_text_entered(sf::Event _event)
{
  EVENT_DEBUG_LOG("keyboard entered.");
}
