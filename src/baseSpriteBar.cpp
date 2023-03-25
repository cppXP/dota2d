#include "../include/baseSpriteBar.h"


dota2d::BaseSpriteBar::baseSpriteBar(sf::Color _value_fillcolor ,
                                     sf::Color _max_fillcolor, sf::Color _max_border_color,
                                     sf::Vecto2f _pos)
{
  m_spriteBar_value_percent = 100;
  m_

  //Value
  m_spriteBar_sprite_value.setSize(sf::Vector2f(120.f, 50.f));
  m_spriteBar_value_fillcolor = _value_fillcolor;


  //Max
  m_spriteBar_sprite_max.setSize(sf::Vector2f(120.f, 50.f));
  m_spriteBar_max_fillcolor = _max_fillcolor;
  m_spriteBar_max_border_color = _max_border_color;
}
