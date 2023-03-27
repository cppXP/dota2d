#ifndef DOTA2D_BUILDING_SECRETSHOP_HEADER
#define DOTA2D_BUILDING_SECRETSHOP_HEADER
#include "buildingUnattackable.h"

namespace dota2d
{
  class Secretshop : public BuildingUnattackable
  {
    public:
      Secretshop(std::string _texture,sf::Vector2f _pos)
        : BuildingUnattackable(false, TeamSide::None, _texture, _pos)
        {

        }
  };
}
#endif
