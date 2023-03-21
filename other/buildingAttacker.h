#ifndef DOTA2D_BUILDING_ATTACKER_HEADER
#define DOTA2D_BUILDING_ATTACKER_HEADER
#include "baseAttack.h"
#include "baseBuilding.h"
#include "buildingUnattackable.h"

namespace dota2d
{
  class BuildingAttacker : public BaseBuilding , public BaseAttack
  {
      public:
        class Tower : public BuildingAttacker, public BuildingAttackable
        {

        };

        class Fountain : public BuildingAttacker, public BuildingUnattackable
        {

        };
  };

}
#endif
