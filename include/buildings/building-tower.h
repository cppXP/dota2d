#ifndef DOTA2D_BUILDING_TOWER_HEADER
#define DOTA2D_BUILDING_TOWER_HEADER
#include "buildingAttackable.h"
#include "buildingAttacker.h"
#include "building-config.h"

namespace dota2d
{
  class Tower : public BuildingAttackable, public BuildingAttacker
  {
    public:
      Tower(int _attack_range ,int _attack_speed, int _magical_damage, int _physical_damage, //B-Attacker

                    int _hp ,int _max_hp ,float _hp_regen ,float _physical_rasistant ,float _magical_rasistant,
                    TeamSide _side,std::string _texture,sf::Vector2f _pos //B-Attackable
            ) : BuildingAttacker(_attack_range, _attack_speed, _magical_damage, _physical_damage)

              , BuildingAttackable(_hp, _max_hp, _hp_regen, _physical_rasistant,
                            _magical_rasistant,
                             sf::Vector2f(_pos.x BUILDING_CONFIG_HEALTH_X_MARGIN
                               ,_pos.y BUILDING_CONFIG_HEALTH_Y_MARGIN),_side, _texture, _pos)
                            {

                            }
  };
}
#endif
