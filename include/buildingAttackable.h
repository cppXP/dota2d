#ifndef DOTA2D_BUILDING_ATTACKABLE_HEADER
#define DOTA2D_BUILDING_ATTACKABLE_HEADER
#include "baseBuilding.h"
#include "baseHealth.h"

namespace dota2d
{
  class BuildingAttackable : public BaseBuilding, public BaseHealth
  {
      public:
        class Ancient : public BuildingAttackable
        {

        };

        class Pillar : public BuildingAttackable
        {

        };

        class Barracks : public BuildingAttackable
        {

        };

  };
}
#endif
