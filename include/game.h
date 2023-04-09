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
#include "side-buildings.h" //init buildings
#include "hero.h"
#include "hero-list.h"
#include "functionTimer.h"
#include "baseHud.h"
// #include <array>


namespace dota2d
{
  class Game : public BaseWindow
  {
  private:
    BaseLog m_log;
    FunctionTimer m_gameFunctionsTimer;


  protected:
    sf::Vector2i m_map_minimum_position;
    sf::Vector2i m_map_maximum_position;
    BaseSprite m_background_sprite;
    BaseEvent m_game_events;
    BaseCamera* ptr_camera = nullptr;



    //buildings
    SideBuildings m_radiant_buildings;
    SideBuildings m_dire_buildings;

    //hud
    BaseHud m_game_huds;

    // targets and selection hero/building
    Unit* m_current_unit = nullptr; //will hold player as myHero
    Unit* m_target_unit = nullptr; //will hold clicked/targeted enemy
    BaseBuilding* m_target_building = nullptr; //will hold clicked/targeted enemy building

    //heroes
    Hero* m_heros[2] = {nullptr,nullptr};
    // std::array<Hero*, 10> m_heros =



    public:
      Game(sf::Vector2i _minmap,sf::Vector2i _maxmap,
           int w_height ,int w_width ,std::string w_title , //window
           sf::Vector2i c_pos ,float c_zoom,float c_rotate,int c_speed,int c_mouseBorder, sf::FloatRect c_viewport, // Camera
           std::string bg_texture, sf::Vector2f bg_position //baseSprite
         ) : BaseWindow(w_height,w_width,w_title)
           {
              m_log.set_pre_message(" gameLog : ");
              m_log.debug("game constractor called.");

              //map things
              setMap_min_pos(_minmap);
              setMap_max_pos(_maxmap);
              m_background_sprite.setTexture(bg_texture);
              m_background_sprite.setPosition(bg_position); //this funtion also setOrigin as center of sprite.
              m_background_sprite.setOrigin(bg_position); //this funtion set origin speacily for this one. others origins are on center

              //init camera
              ptr_camera = new BaseCamera(c_pos, c_zoom, c_rotate, c_speed, c_mouseBorder, c_viewport);
           };

      ~Game()
      {
        m_log.debug(" destoractor game called.");
        delete ptr_camera;
        delete m_target_unit;
        delete m_target_building;
        delete m_current_unit;
        delete m_heros[2];
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
