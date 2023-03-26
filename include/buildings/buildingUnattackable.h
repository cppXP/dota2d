#ifndef DOTA2D_BUILDING_UNATTACKABLE_HEADER
#define DOTA2D_BUILDING_UNATTACKABLE_HEADER
#include "../baseBuilding.h"

namespace dota2d
{
  class BuildingUnattackable : public BaseBuilding
  {
    public:
      BuildingUnattackable(bool _capture, TeamSide _side,std::string _texture,sf::Vector2f _pos)
        : BaseBuilding(_side, _texture, _pos)
        {
          m_captureable = _capture;
        }

    protected:
      bool m_captureable;
  };
}
#endif
