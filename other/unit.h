#ifndef DOTA2D_UNIT_HEADER
#define DOTA2D_UNIT_HEADER
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

namespace dota2d
{
  class Unit
  {
    protected:
      sf::Vector2f m_spawn_position;
      std::string m_name;


    public:
      Unit();

      void setName(std::string);
      void setSpawn_position(sf::Vector2f);
      void setSpawn_position(float,float);

      std::string getName() const;
      sf::Vector2f getSpawn_position() const;


      //action
      void printUnit_stats() const;
  };
}
#endif
