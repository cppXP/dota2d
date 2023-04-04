#ifndef DOTA2D_EVENT_CONFIG_HEADER
#define DOTA2D_EVENT_CONFIG_HEADER

#include <SFML/Graphics.hpp>


#ifndef EVENT_CONFIG_DEVELOPER_TOOLS
#define EVENT_CONFIG_DEVELOPER_TOOLS
#define EVENT_DEV_TOOL_LOG(message) std::cout << "[EVENT-DEV-TOOL] : " << message << std::endl
#endif


#define EVENT_CONFIG_DEBUG_EVENTS 0
#if EVENT_CONFIG_DEBUG_EVENTS == 1
#define EVENT_DEBUG_LOG(message) std::cout << "[EVENT-DEBUG] : " << message << std::endl
#else
#define EVENT_DEBUG_LOG(message)
#endif


namespace dota2d
{
  struct Hotkeys //h_ means hotkey
  {
    // Level
    int h_levels[6];

    // Item
    int h_items[8]; //item 6-> jungle item and item 7-> teleport


    // Action
    int h_stop;
    int h_deny;
    int h_taunt;
    int h_stack_movement;
    int h_glyph_fortification;
    int h_scoreboard;
    int h_pause_unpause;
    int h_screenshot;

    // Selection
    int h_select_hero;
    int h_select_courier;
    int h_courier_transform_item;
    int h_open_shop;
    int h_select; //also known as use / attack / chose
    int h_move;

    // Comminuation Chat
    int h_open_chat;
    int h_send_chat;
    int h_remove_chat;

    // Comminuation Voice
    int h_voice_to_party;
    int h_voice_to_team;
    int h_voice_mute;

    // Comminuation No_Chat
    int h_wheel_chat;
    int h_wheel_voice;
    int h_alert;
    int h_paint;

    // Camera Movement
    int h_camera_right;
    int h_camera_left;
    int h_camera_up;
    int h_camera_down;


    Hotkeys()
    {
      // Level
      h_levels[0] = sf::Keyboard::Q;
      h_levels[1] = sf::Keyboard::W;
      h_levels[2] = sf::Keyboard::E;
      h_levels[3] = sf::Keyboard::D;
      h_levels[4] = sf::Keyboard::F;
      h_levels[5] = sf::Keyboard::R;

      // Item
      h_items[0] = sf::Keyboard::Z;
      h_items[1] = sf::Keyboard::X;
      h_items[2] = sf::Keyboard::C;
      h_items[3] = sf::Keyboard::V;
      h_items[4] = sf::Keyboard::B;
      h_items[5] = sf::Keyboard::N;
      h_items[6] = sf::Keyboard::Space; //jungle item
      h_items[7] = sf::Keyboard::Tilde; //teleport


      // Action
      h_stop = sf::Keyboard::S;
      h_deny = sf::Keyboard::A;
      h_taunt = sf::Keyboard::K;
      h_stack_movement = sf::Keyboard::LShift;
      h_glyph_fortification = sf::Keyboard::J;
      h_scoreboard = sf::Keyboard::Tab;
      h_pause_unpause = sf::Keyboard::F9;
      h_screenshot = sf::Keyboard::F6;

      // Selection
      h_select_hero = sf::Keyboard::F1;
      h_select_courier = sf::Keyboard::F2;
      h_courier_transform_item = sf::Keyboard::F2;
      h_open_shop = sf::Keyboard::F4;
      h_select = sf::Mouse::Left; //also known as use / attack / chose
      h_move = sf::Mouse::Right;

      // Comminuation Chat
      h_open_chat = sf::Keyboard::T;
      h_send_chat = sf::Keyboard::Enter;
      h_remove_chat = sf::Keyboard::Backspace;

      // Comminuation Voice
      h_voice_to_party = sf::Keyboard::H;
      h_voice_to_team = sf::Keyboard::G;
      h_voice_mute = sf::Keyboard::M;

      // Comminuation No_Chat
      h_wheel_chat = sf::Keyboard::Y;
      h_wheel_voice = sf::Keyboard::U;
      h_alert = sf::Keyboard::LAlt;
      h_paint = sf::Keyboard::LControl;

      // Camera Movement
      h_camera_right = sf::Keyboard::Right;
      h_camera_left = sf::Keyboard::Left;
      h_camera_up = sf::Keyboard::Up;
      h_camera_down = sf::Keyboard::Down;
    }
  };


}
#endif
