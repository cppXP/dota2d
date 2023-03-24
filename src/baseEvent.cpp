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







  //keyboard
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
   std::cout << " keyboard pressed down live" <<std::endl;
  else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
   std::cout << " keyboard pressed right live" <<std::endl;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
     std::cout << " keyboard pressed left live" <<std::endl;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
     std::cout << " keyboard pressed up live" <<std::endl;
      // else if(sf::Keyboard::isKeyReleased(sf::Keyboard::Up))
      // std::cout << " keyboard released up live " <<std::endl;
    else if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
     std::cout << " mouse button preesed right" <<std::endl;
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
        ew_safe_close(event);
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
  std::cout << "window gained focus.\n";
}

void dota2d::BaseEvent::ew_safe_close(sf::Event _event)
{
  std::cout << "window safe close.\n";
}

void dota2d::BaseEvent::ew_lost_focus(sf::Event _event)
{
  std::cout << "window lost focus.\n";
}

void dota2d::BaseEvent::ew_resized(sf::Event _event)
{
  std::cout << "window resized.\n";
}

void dota2d::BaseEvent::ew_mouse_leaves(sf::Event _event)
{
  std::cout << "windows mouse leaves.\n";
}

void dota2d::BaseEvent::ew_mouse_entered(sf::Event _event)
{
  std::cout << "windows mouse entered.\n";
}

// void dota2d::BaseEvent::check_keyboard_hotkeys(const sf::Event& _event)
// {
  // switch (_event.key.code)
  // {
    // case h_1_level:
  // }
// }

// Mouse
void dota2d::BaseEvent::em_pressed(sf::Event _event)
{
  std::cout << "mouse pressed\n";
  if(_event.mouseButton.button == sf::Mouse::Left)
  {
    std::cout << "mouse left pressed\n";
  }
  else if(_event.mouseButton.button == sf::Mouse::Right)
  {
    std::cout << "mouse right pressed\n";
  }
}

void dota2d::BaseEvent::em_released(sf::Event _event)
{
  std::cout << "mouse released\n";
  if(_event.mouseButton.button == sf::Mouse::Left)
  {
    std::cout << "mouse left released\n";
  }
  else if(_event.mouseButton.button == sf::Mouse::Right)
  {
    std::cout << "mouse right released\n";
  }
}


void dota2d::BaseEvent::em_moved(sf::Event _event)
{
  std::cout << "mouse moved\n";
}

void dota2d::BaseEvent::em_wheel_moved(sf::Event _event)
{
  std::cout << "mouse wheel moved\n";
}



// Keyboard
void dota2d::BaseEvent::ek_pressed(sf::Event _event)
{
  std::cout << "keyboard pressed\n";
 std::cout << "key code = " << _event.key.code <<std::endl;
}
void dota2d::BaseEvent::ek_released(sf::Event _event)
{
  std::cout << "keyboard released\n";
}
void dota2d::BaseEvent::ek_text_entered(sf::Event _event)
{
  std::cout << "keyboard entered\n";
}
