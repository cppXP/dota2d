#ifndef DOTA2D_BUILDING_FOUNTAIN_HEADER
#define DOTA2D_BUILDING_FOUNTAIN_HEADER
#include "buildingUnattackable.h"
#include "buildingAttacker.h"
#include "building-config.h"

namespace dota2d
{
  class Fountain : public BuildingUnattackable, public BuildingAttacker
  {
    public:
      Fountain(int _attack_range ,int _attack_speed, int _magical_damage, int _physical_damage, //B-Attacker
                   TeamSide _side, std::string _texture,sf::Vector2f _pos //B-unattackable

              ) : BuildingUnattackable(false, _side, _texture, _pos)
                , BuildingAttacker(_attack_range, _attack_speed, _magical_damage, _physical_damage)
            {

            }
  };
}
#endif
