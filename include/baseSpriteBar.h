#ifndef DOTA2D_BASE_SPRITE_BAR_HEADER
#define DOTA2D_BASE_SPRITE_BAR_HEADER
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

namespace dota2d
{
  class BaseSpriteBar
  {
  public:
    BaseSpriteBar(sf::Color,sf::Color,sf::Color,sf::Vector2f);

    void set_baseSpriteBar_text(std::string);
    void set_baseSpriteBar_percent(int);
    void set_baseSpriteBar_position(sf::Vector2f);

    sf::RectangleShape get_baseSpriteBar_max_sprite();
    sf::RectangleShape get_baseSpriteBar_value_sprite();

  protected:
    std::string m_spriteBar_centered_text;
    int m_spriteBar_value_percent;

    //Value
    sf::RectangleShape m_spriteBar_sprite_value;
    sf::Color m_spriteBar_value_fillcolor;


    //Max
    sf::RectangleShape m_spriteBar_sprite_max;
    sf::Color m_spriteBar_max_fillcolor;
    sf::Color m_spriteBar_max_border_color;

  };
}

#endif
