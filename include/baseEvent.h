#ifndef DOTA2D_BASE_EVENT_HEADER
#define DOTA2D_BASE_EVENT_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include "baseLog.h"
#include "baseCamera.h"
#include "baseWindow.h"
#include "event-config.h"

//for function em_pressed (event mouse button pressed)
#include "unit.h"
#include "baseBuilding.h"

namespace dota2d
{
  class BaseEvent
  {
  private:
    BaseLog m_log;

  public:
    Hotkeys m_hotkeys;
    BaseEvent();
    void inputs
    (
        sf::RenderWindow*, BaseCamera* , sf::Vector2i , sf::Vector2i,
        Unit*,Unit*,BaseBuilding* //current-unit , target-unit,  target-building.
    );

  protected:
    void live_inputs(sf::Event,BaseCamera&,sf::RenderWindow*,sf::Vector2i ,sf::Vector2i);

    // Window
    void ew_gained_focus(sf::Event);
    void ew_safe_close(sf::Event, sf::RenderWindow&);
    void ew_lost_focus(sf::Event);
    void ew_resized(sf::Event);
    void ew_mouse_leaves(sf::Event);
    void ew_mouse_entered(sf::Event);


    // Mouse
    void em_pressed(sf::Event,Unit*, Unit*, BaseBuilding*);
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
