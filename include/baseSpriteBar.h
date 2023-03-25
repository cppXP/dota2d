#ifndef DOTA2D_BASE_SPRITE_BAR_HEADER
#define DOTA2D_BASE_SPRITE_BAR_HEADER
#include "baseSprite.h"

namespace dota2d
{
  class BaseSpriteBar
  {
  public:
    BaseSpriteBar(sf::Color,sf::Color,sf::Color,sf::Vecto2f);

  protected:
    std::string m_spriteBar_centered_text;
    int m_spriteBar_value_percent;

    //Value
    BaseSprite m_spriteBar_sprite_value;
    sf::Color m_spriteBar_value_fillcolor;


    //Max
    BaseSprite m_spriteBar_sprite_max;
    sf::Color m_spriteBar_max_fillcolor;
    sf::Color m_spriteBar_max_border_color;

  };
}

#endif
