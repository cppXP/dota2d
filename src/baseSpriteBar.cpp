#include "../include/baseSpriteBar.h"


dota2d::BaseSpriteBar::BaseSpriteBar()
{
  m_spriteBar_value_percent = 100;
  m_spriteBar_centered_text = "";

  //Max
  set_baseSpriteBar_max_color(sf::Color::Black);
  set_baseSpriteBar_max_border_color(sf::Color::White);
  m_spriteBar_sprite_max.setSize(sf::Vector2f(BASE_SPRITE_BAR_WIDTH, BASE_SPRITE_BAR_HEIGHT));
  m_spriteBar_sprite_max.setPosition(sf::Vector2f(0.0, 0.0));


  //Value
  set_baseSpriteBar_value_color(sf::Color::Yellow);
  m_spriteBar_sprite_value.setSize(sf::Vector2f(BASE_SPRITE_BAR_WIDTH, BASE_SPRITE_BAR_HEIGHT));
  m_spriteBar_sprite_value.setPosition(sf::Vector2f(0.0, 0.0));
}






dota2d::BaseSpriteBar::BaseSpriteBar(sf::Color _value_fillcolor ,
                                     sf::Color _max_fillcolor, sf::Color _max_border_color,
                                     sf::Vector2f _pos)
{
  m_spriteBar_value_percent = 100;
  m_spriteBar_centered_text = "";


  //Max
  set_baseSpriteBar_max_color(_max_fillcolor);
  set_baseSpriteBar_max_border_color(_max_border_color);
  m_spriteBar_sprite_max.setSize(sf::Vector2f(BASE_SPRITE_BAR_WIDTH, BASE_SPRITE_BAR_HEIGHT));
  m_spriteBar_sprite_max.setPosition(_pos);

  //Value
  set_baseSpriteBar_value_color(_value_fillcolor);
  m_spriteBar_sprite_value.setSize(sf::Vector2f(BASE_SPRITE_BAR_WIDTH, BASE_SPRITE_BAR_HEIGHT));
  m_spriteBar_sprite_value.setPosition(_pos);
}


void dota2d::BaseSpriteBar::set_baseSpriteBar_text(std::string _text)
{
  m_spriteBar_centered_text = _text;
}

void dota2d::BaseSpriteBar::set_baseSpriteBar_percent(int _percentage)
{
  if(_percentage>100)
    m_spriteBar_value_percent = 100;
  else
    m_spriteBar_value_percent = _percentage;


  m_spriteBar_sprite_value.setSize(sf::Vector2f(m_spriteBar_value_percent, BASE_SPRITE_BAR_HEIGHT));
}

void dota2d::BaseSpriteBar::set_baseSpriteBar_position(sf::Vector2f _pos)
{
  m_spriteBar_sprite_max.setPosition(_pos);
  m_spriteBar_sprite_value.setPosition(_pos);
}


void dota2d::BaseSpriteBar::set_baseSpriteBar_value_color(sf::Color _color)
{
  m_spriteBar_value_fillcolor = _color;
  m_spriteBar_sprite_value.setFillColor(_color);
}

void dota2d::BaseSpriteBar::set_baseSpriteBar_max_color(sf::Color _color)
{
  m_spriteBar_max_fillcolor = _color;
  m_spriteBar_sprite_max.setFillColor(_color);
}

void dota2d::BaseSpriteBar::set_baseSpriteBar_max_border_color(sf::Color _color)
{
  m_spriteBar_max_border_color = _color;
  m_spriteBar_sprite_max.setOutlineColor(_color);
}




sf::RectangleShape dota2d::BaseSpriteBar::get_baseSpriteBar_max_sprite()
{
  return m_spriteBar_sprite_max;
}

sf::RectangleShape dota2d::BaseSpriteBar::get_baseSpriteBar_value_sprite()
{
  return m_spriteBar_sprite_value;
}
