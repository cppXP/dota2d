#include "../include/unit.h"


void dota2d::Unit::setName(std::string _value)
{
  m_name = _value;
}

void dota2d::Unit::setSpawn_position(sf::Vector2f _pos)
{
  m_spawn_position = _pos;
}

void dota2d::Unit::setSpawn_position(float _x,float _y)
{
  m_spawn_position.x = _x;
  m_spawn_position.y = _y;
}

std::string dota2d::Unit::getName() const
{
  return m_name;
}

sf::Vector2f dota2d::Unit::getSpawn_position() const
{
  return m_spawn_position;
}

//action
void dota2d::Unit::printUnit_stats() const
{
  std::cout << "\n Unit::printUnit_stats : "
       << "\n name = " << getName()
       << "\n spawn-position = x: " << getSpawn_position().x << " y: " << getSpawn_position().y
       << std::endl;
}
