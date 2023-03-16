#ifndef DOTA2D_BUILDING_UNATTACKABLE_HEADER
#define DOTA2D_BUILDING_UNATTACKABLE_HEADER
#include "baseBuilding.h"

namespace dota2d
{
  class BuildingUnattackable : public BaseBuilding
  {
      protected:
        bool m_captureable;

      public:
        class SecretShop : public BuildingUnattackable
        {

        };
        class Shrine : public BuildingUnattackable
        {

        };
        class Outpost : public BuildingUnattackable
        {

        };
  };
}
#endif
