#ifndef DOTA2D_BUILDING_OUTPOST_HEADER
#define DOTA2D_BUILDING_OUTPOST_HEADER
#include "buildingUnattackable.h"

namespace dota2d
{
  class Outpost : public BuildingUnattackable
  {
    public:
      Outpost(bool _capture, TeamSide _side, std::string _texture,sf::Vector2f _pos)
        : BuildingUnattackable(_capture, _side, _texture, _pos)
        {

        }
  };
}
#endif
