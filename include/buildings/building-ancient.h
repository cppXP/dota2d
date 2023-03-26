#ifndef DOTA2D_BUILDING_ANCIENT_HEADER
#define DOTA2D_BUILDING_ANCIENT_HEADER
#include "buildingAttackable.h"

namespace dota2d
{
  class Ancient : public BuildingAttackable
  {
    public:
      Ancient(int _hp ,int _max_hp ,float _hp_regen ,float _physical_rasistant ,float _magical_rasistant,
                            TeamSide _side,std::string _texture,sf::Vector2f _pos
              ) : BuildingAttackable(_hp, _max_hp, _hp_regen, _physical_rasistant,
                            _magical_rasistant, sf::Vector2f(_pos.x-25 ,_pos.y-25) ,_side, _texture, _pos)
                            {

                            }
  };
}
#endif
