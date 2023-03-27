#ifndef DOTA2D_BUILDING_BARRACKS_HEADER
#define DOTA2D_BUILDING_BARRACKS_HEADER
#include "buildingAttackable.h"
#include "building-config.h"

namespace dota2d
{
  class Barracks : public BuildingAttackable
  {
    public:
      Barracks(int _hp ,int _max_hp ,float _hp_regen ,float _physical_rasistant ,float _magical_rasistant,
                            TeamSide _side,std::string _texture,sf::Vector2f _pos
            ) : BuildingAttackable(_hp, _max_hp, _hp_regen, _physical_rasistant,
                            _magical_rasistant,
                             sf::Vector2f(_pos.x BUILDING_CONFIG_HEALTH_X_MARGIN
                               ,_pos.y BUILDING_CONFIG_HEALTH_Y_MARGIN),_side, _texture, _pos)
                            {

                            }
  };
}
#endif
