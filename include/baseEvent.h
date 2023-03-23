#ifndef DOTA2D_BASE_EVENT_HEADER
#define DOTA2D_BASE_EVENT_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>

namespace dota2d
{
  class BaseEvent
  {
  public:
    void inputs(sf::RenderWindow*);
  protected:
    void live_inputs();

    // Window
    void ew_gained_focus(sf::Event);
    void ew_safe_close(sf::Event);
    void ew_lost_focus(sf::Event);
    void ew_resized(sf::Event);
    void ew_mouse_leaves(sf::Event);
    void ew_mouse_entered(sf::Event);


    // Mouse
    void em_pressed(sf::Event);
    void em_released(sf::Event);
    void em_moved(sf::Event);
    void em_wheel_moved(sf::Event);


    // Keyboard
    void ek_pressed(sf::Event);
    void ek_released(sf::Event);
    void ek_text_entered(sf::Event);

  };
}

#endif
