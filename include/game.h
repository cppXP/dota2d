#ifndef DOTA2D_GAME_HEADER
#define DOTA2D_GAME_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "baseCamera.h"
#include "baseWindow.h"
#include "baseSprite.h"
#include "baseLog.h"
#include "baseEvent.h"
#include "side-buildings.h"

//  //buildings
// #include "./buildings/building-fountain.h"
// #include "./buildings/building-ancient.h"
// #include "./buildings/building-barracks.h"
// #include "./buildings/building-pillar.h"
// #include "./buildings/building-tower.h"
//
// //buildings-usable
// #include "./buildings/building-secretshop.h"
// #include "./buildings/building-outpost.h"
// #include "./buildings/building-shrine.h"


namespace dota2d
{
  class Game : public BaseWindow
  {
  private:
    BaseLog m_log;

  protected:
    sf::Vector2i m_map_minimum_position;
    sf::Vector2i m_map_maximum_position;
    BaseSprite m_background_sprite;
    BaseEvent m_game_events;
    BaseCamera* ptr_camera = nullptr;

    BaseSprite m_hud_bottom_center;
    BaseSprite m_hud_bottom_left;
    BaseSprite m_hud_bottom_right;

    //buildings
    // SideBuildings m_radiant_buildings;
    SideBuildings m_dire_buildings;

    public:
      Game(sf::Vector2i _minmap,sf::Vector2i _maxmap,
           int w_height ,int w_width ,std::string w_title , //window
           sf::Vector2i c_pos ,float c_zoom,float c_rotate,int c_speed,int c_mouseBorder, sf::FloatRect c_viewport, // Camera
           std::string bg_texture, sf::Vector2f bg_position //baseSprite
         ) : BaseWindow(w_height,w_width,w_title)
           {
              m_log.set_pre_message(" gameLog : ");
              m_log.debug("game constractor called.");
              setMap_min_pos(_minmap);
              setMap_max_pos(_maxmap);
              m_background_sprite.setTexture(bg_texture);
              m_background_sprite.setPosition(bg_position);

              m_hud_bottom_left.setTexture(ASSEST_GAME_HUD_LEFT_BOTTOM);
              m_hud_bottom_left.setPosition(sf::Vector2f(0,0));

              m_hud_bottom_right.setTexture(ASSEST_GAME_HUD_RIGHT_BOTTOM);
              m_hud_bottom_right.setPosition(sf::Vector2f(0,0));

              m_hud_bottom_center.setTexture(ASSEST_GAME_HUD_CENTER_BOTTOM);
              m_hud_bottom_center.setPosition(sf::Vector2f(0,0));


              ptr_camera = new BaseCamera(c_pos, c_zoom, c_rotate, c_speed, c_mouseBorder, c_viewport);
              printGame_stats();
           };

      ~Game()
      {
        m_log.debug(" destoractor game called.");
        delete ptr_camera;
      }


      void setMap_min_pos(sf::Vector2i);
      void setMap_max_pos(sf::Vector2i);
      sf::Vector2i getMap_min_pos();
      sf::Vector2i getMap_max_pos();

      //actions
      void printGame_stats();
      void draw();
      void init();
      void run();
      void updateCamera();
  };
}
#endif
