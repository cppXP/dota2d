#include "../include/baseSpriteBar.h"


dota2d::BaseSpriteBar::BaseSpriteBar(sf::Color _value_fillcolor ,
                                     sf::Color _max_fillcolor, sf::Color _max_border_color,
                                     sf::Vector2f _pos)
{
  m_spriteBar_value_percent = 100;
  m_spriteBar_centered_text = "";


  //Max
  m_spriteBar_max_border_color = _max_border_color;
  m_spriteBar_max_fillcolor = _max_fillcolor;
  m_spriteBar_sprite_max.setSize(sf::Vector2f(100.f, 25.f));
  m_spriteBar_sprite_max.setPosition(_pos);
  m_spriteBar_sprite_max.setFillColor(_max_fillcolor);
  m_spriteBar_sprite_max.setOutlineColor(_max_border_color);


  //Value
  m_spriteBar_value_fillcolor = _value_fillcolor;
  m_spriteBar_sprite_value.setSize(sf::Vector2f(100.f, 25.f));
  m_spriteBar_sprite_value.setPosition(_pos);
  m_spriteBar_sprite_value.setFillColor(_value_fillcolor);
}


void dota2d::BaseSpriteBar::set_baseSpriteBar_text(std::string _text)
{
  m_spriteBar_centered_text = _text;
}

void dota2d::BaseSpriteBar::set_baseSpriteBar_percent(int _percentage)
{
  if(_percentage>100)
    m_spriteBar_value_percent = _percentage/100;
  else
    m_spriteBar_value_percent = _percentage;
}

void dota2d::BaseSpriteBar::set_baseSpriteBar_position(sf::Vector2f _pos)
{
  m_spriteBar_sprite_max.setPosition(_pos);
  m_spriteBar_sprite_value.setPosition(_pos);
}


sf::RectangleShape dota2d::BaseSpriteBar::get_baseSpriteBar_max_sprite()
{
  return m_spriteBar_sprite_max;
}

sf::RectangleShape dota2d::BaseSpriteBar::get_baseSpriteBar_value_sprite()
{
  return m_spriteBar_sprite_value;
}
