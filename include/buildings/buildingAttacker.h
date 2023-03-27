#ifndef DOTA2D_BUILDING_ATTACKER_HEADER
#define DOTA2D_BUILDING_ATTACKER_HEADER
#include "../baseAttack.h"

namespace dota2d
{
  class BuildingAttacker : public BaseAttack
  {
    public:
      BuildingAttacker(int _a_range ,int _a_speed,int _a_magical_damage, int _a_physical_damage)
      : BaseAttack(_a_range, _a_speed, _a_magical_damage, _a_physical_damage)
      {

      }
  };
}
#endif
