#include "../include/baseMana.h"


namespace dota2d
{
  BaseMana::BaseMana()
  {
    setMana(0);
    setMaxMana(0);
    setManaRegen(0.0);
    m_sprite_mana.set_baseSpriteBar_value_color(sf::Color::Blue);
    m_sprite_mana.set_baseSpriteBar_max_color(sf::Color::Black);
    m_sprite_mana.set_baseSpriteBar_max_border_color(sf::Color::White);
    m_sprite_mana.set_baseSpriteBar_position(sf::Vector2f(0.0, 0.0));
  }

  BaseMana::BaseMana(int _mana, int _max_mana, float _mana_regen)
  {
    setMana(_mana);
    setMaxMana(_max_mana);
    setManaRegen(_mana_regen);
    m_sprite_mana.set_baseSpriteBar_value_color(sf::Color::Blue);
    m_sprite_mana.set_baseSpriteBar_max_color(sf::Color::Black);
    m_sprite_mana.set_baseSpriteBar_max_border_color(sf::Color::White);
    m_sprite_mana.set_baseSpriteBar_position(sf::Vector2f(0.0, 0.0));
  }

  BaseMana::BaseMana(int _mana, int _max_mana, float _mana_regen, sf::Vector2f _mana_bar_position)
  {
    setMana(_mana);
    setMaxMana(_max_mana);
    setManaRegen(_mana_regen);
    m_sprite_mana.set_baseSpriteBar_value_color(sf::Color::Blue);
    m_sprite_mana.set_baseSpriteBar_max_color(sf::Color::Black);
    m_sprite_mana.set_baseSpriteBar_max_border_color(sf::Color::White);

    m_sprite_mana.set_baseSpriteBar_position(_mana_bar_position);
  }


  void BaseMana::setMana(int _value)
  {
    m_mana = _value;
    // m_sprite_mana.set_baseSpriteBar_percent( m_mana / (getMaxMana()/100) );
  }
  void BaseMana::setManaRegen(float _value)
  {
    m_mana_regen = _value;
  }
  void BaseMana::setMaxMana(int _value)
  {
    m_max_mana = _value;
    // if(getMana()>m_max_mana)
      // setMana(m_max_mana);
    // m_sprite_mana.set_baseSpriteBar_percent( getMana() / (m_max_mana/100) );
  }
  int BaseMana::getMana() const
  {
    return m_mana;
  }
  float BaseMana::getManaRegen() const
  {
    return m_mana_regen;
  }
  int BaseMana::getMaxMana() const
  {
    return m_max_mana;
  }

  void BaseMana::printMana_stats() const
  {
    std::cout << "\n BaseHealth::printMana_stats():"
         << "\n mana = " << getMana()
         << "\n max-mana = " << getMaxMana()
         << "\n mana-regen = " << getManaRegen()
         << " .";
  }



} //namespace closer
