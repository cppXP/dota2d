#ifndef DOTA2D_BASE_HUD_HEADER
#define DOTA2D_BASE_HUD_HEADER

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "baseCamera.h"
#include "baseLog.h"
#include "baseSprite.h"
#include "hero.h"

#define HUD_FONT_SIZE 15
#define HUD_COLOR sf::Color::Red
// ASSEST_GAME_FONT_DEFAULT





namespace dota2d
{
  class BaseHud
  {
  private:
    BaseLog m_log;
  protected:
    std::vector<sf::Text*> m_vector_texts;
    std::vector<dota2d::BaseSprite> m_vector_sprites;

  public:
    BaseHud();

    void init();

    template <typename Y>
    void renderHeroHud(const Y& hero, sf::RenderWindow& window,
       unsigned int& temp_fontsize,
       sf::Font& default_font,
       const float& cam_posx, const float& cam_posy)
    {
      sf::Text hero_money(std::to_string(hero.getGold()), default_font);
      hero_money.setPosition
      (
        sf::Vector2f
        (
          cam_posx+600 ,
          cam_posy+415
        )
      );
      window.draw(hero_money);



      sf::Text hero_killstats(hero.getKill_stats(), default_font);
      hero_killstats.setPosition
      (
        sf::Vector2f
        (
          cam_posx-200 ,
          cam_posy-200
        )
      );
      window.draw(hero_killstats);




      std::string str_hero_lvl = "level = " + std::to_string(hero.getLevel());
      sf::Text hero_level(str_hero_lvl, default_font);
      hero_level.setPosition
      (
        sf::Vector2f
        (
          cam_posx-580 ,
          cam_posy+370
        )
      );
      window.draw(hero_level);


      std::string str_hero_stats = hero.getAttack_stats();
      sf::Text hero_stats(str_hero_stats, default_font);
      hero_stats.setPosition
      (
        sf::Vector2f
        (
          cam_posx-550 ,
          cam_posy+350
        )
      );
      window.draw(hero_stats);

    }




    template <typename T>
    void render(sf::RenderWindow& window,
       const BaseCamera& camera,
       const T& selected)
    {
      //texts
      unsigned int temp_fontsize= 35;
      sf::Font default_font;
      if(!default_font.loadFromFile(ASSEST_GAME_FONT_DEFAULT))
        std::cout << "error while loading default font\n";

      const float cam_posx = camera.getCamera_center().x;
      const float cam_posy = camera.getCamera_center().y;

      //sprites
      // BaseSprite test_hud
      // (
      //   ASSEST_GAME_HUD_CENTER_BOTTOM,
      //   sf::Vector2f
      //   (
      //     cam_posx ,
      //     cam_posy+415
      //   )
      // );
      // // fixing the fixed-sprites-scale-size while camera zoom in/out.
      // const float _camera_zoom_value = camera.getCamera_zoom();
      // if(_camera_zoom_value <= 1)
      //   test_hud.setScale(0.5,0.5);
      // else
      //   test_hud.setScale(_camera_zoom_value, _camera_zoom_value);
      //
      // window.draw(test_hud.getSprite());

      if (typeid(T) == typeid(dota2d::Hero))
      {
        std::cout << "hud render recived HERO type\n";
        Hero temp_hero;
        temp_hero = selected;
        renderHeroHud<dota2d::Hero>(temp_hero, window,temp_fontsize, default_font,cam_posx,cam_posy);
      }
      else if(typeid(T) == typeid(dota2d::Unit))
      {
        std::cout << "hud render recived UNIT type\n";
      }
      else
      {
        std::cout <<  "hud render recived unknown/building type\n";
        return;
      }


      // TEXTSSSS


      sf::Text hero_name(selected.getName(), default_font);
      hero_name.setPosition
      (
        sf::Vector2f
        (
          cam_posx-500 ,
          cam_posy+330
        )
      );
      window.draw(hero_name);




            BaseSpriteBar m_sprite_hitpoint;
            m_sprite_hitpoint.set_baseSpriteBar_value_color(sf::Color::Green);
            m_sprite_hitpoint.set_baseSpriteBar_max_color(sf::Color::Black);
            m_sprite_hitpoint.set_baseSpriteBar_max_border_color(sf::Color::White);
            m_sprite_hitpoint.set_baseSpriteBar_position
            (
              sf::Vector2f
              (
                cam_posx-50 ,
                cam_posy+415
              )
            );
            m_sprite_hitpoint.set_baseSpriteBar_percent( selected.getHitpoint() / (selected.getMaxHitpoint()/100));
            window.draw(m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
            window.draw(m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

      std::string h_health = std::to_string(selected.getHitpoint()) + " of "+ std::to_string(selected.getMaxHitpoint());
      sf::Text hero_hitpoint(h_health, default_font);
      hero_hitpoint.setPosition
      (
        sf::Vector2f
        (
          cam_posx ,
          cam_posy+415
        )
      );
      window.draw(hero_hitpoint);



      BaseSpriteBar m_sprite_mana;
      m_sprite_mana.set_baseSpriteBar_value_color(sf::Color::Blue);
      m_sprite_mana.set_baseSpriteBar_max_color(sf::Color::Black);
      m_sprite_mana.set_baseSpriteBar_max_border_color(sf::Color::White);
      m_sprite_mana.set_baseSpriteBar_position
      (
        sf::Vector2f
        (
          cam_posx-50 ,
          cam_posy+435
        )
      );
      m_sprite_mana.set_baseSpriteBar_percent( selected.getMana() / (selected.getMaxMana()/100));
      window.draw(m_sprite_mana.get_baseSpriteBar_max_sprite());
      window.draw(m_sprite_mana.get_baseSpriteBar_value_sprite());




      std::string h_mana = std::to_string(selected.getMana()) + " of "+ std::to_string(selected.getMaxMana());
      sf::Text hero_mana(h_mana, default_font);
      hero_mana.setPosition
      (
        sf::Vector2f
        (
          cam_posx ,
          cam_posy+435
        )
      );
      window.draw(hero_mana);


    }


  };
}
#endif
