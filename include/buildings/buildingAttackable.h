#ifndef DOTA2D_BUILDING_ATTACKABLE_HEADER
#define DOTA2D_BUILDING_ATTACKABLE_HEADER
#include "../baseBuilding.h"
#include "../baseHealth.h"


namespace dota2d
{
  class BuildingAttackable : public BaseBuilding , public BaseHealth
  {
    public:
      BuildingAttackable(int _hp ,int _max_hp ,float _hp_regen ,float _physical_rasistant, //baseHealth
            float _magical_rasistant, sf::Vector2f _healthBar_pos, //baseHealth
            TeamSide _side, std::string _texture ,sf::Vector2f _pos //baseBuilding
          ) : BaseBuilding(_side, _texture, _pos)
            , BaseHealth(_hp, _max_hp, _hp_regen, _physical_rasistant, _magical_rasistant, _healthBar_pos)
            {

            }
  };
}
#endif
