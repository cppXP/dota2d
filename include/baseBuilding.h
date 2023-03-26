#ifndef DOTA2D_BASE_BUILDING_HEADER
#define DOTA2D_BASE_BUILDING_HEADER
#include <iostream>
#include "baseSprite.h" //string included

namespace dota2d
{
  enum class TeamSide
  {
    None, //is for game objects. e.g SecretShop/Roshan
    Dire,
    Radiant
  };

  class BaseBuilding : public BaseSprite
  {

    public:
      BaseBuilding() : BaseSprite()
      {
        setTeamSide(TeamSide::None);
      }
      BaseBuilding(TeamSide _teamValue)
                  : BaseSprite()
      {
        setTeamSide(_teamValue);
      }
      BaseBuilding(TeamSide _teamValue,
                   std::string _texture, sf::Vector2f _pos)
                   : BaseSprite(_texture,_pos)
      {
        setTeamSide(_teamValue);
      }

    protected:
      TeamSide m_team;

      void setTeamSide(TeamSide);

      TeamSide getTeamSide() const;




  };
}

#endif
