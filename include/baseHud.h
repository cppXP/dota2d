#ifndef DOTA2D_BASE_HUD_HEADER
#define DOTA2D_BASE_HUD_HEADER

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "baseCamera.h"
#include "baseLog.h"
#include "baseSprite.h"


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
    void render(sf::RenderWindow&, const dota2d::BaseCamera&);
    void init();
  };
}
#endif
