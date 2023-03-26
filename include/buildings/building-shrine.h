#ifndef DOTA2D_BUILDING_SHRINE_HEADER
#define DOTA2D_BUILDING_SHRINE_HEADER
#include "buildingUnattackable.h"

namespace dota2d
{
  class Shrine : public BuildingUnattackable
  {
    public:
      Shrine(bool _capture, TeamSide _side, std::string _texture,sf::Vector2f _pos)
        : BuildingUnattackable(_capture, _side, _texture, _pos)
        {

        }
  };
}
#endif
