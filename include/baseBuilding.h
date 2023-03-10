#ifndef DOTA2D_BASE_BUILDING_HEADER
#define DOTA2D_BASE_BUILDING_HEADER
#include <iostream>
#include "baseSprite.h"

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
        setAttackable(true);
      }
      BaseBuilding(TeamSide _teamValue, bool _attackable)
                  : BaseSprite()
      {
        setTeamSide(_teamValue);
        setAttackable(_attackable);

      }
      BaseBuilding(TeamSide _teamValue, bool _attackable,
                   std::string _texture, sf::Vector2f _pos)
                   : BaseSprite(_texture,_pos)
      {
        setTeamSide(_teamValue);
        setAttackable(_attackable);
      }

    protected:
      TeamSide m_team;
      bool m_attackable;

      void setTeamSide(TeamSide);
      void setAttackable(bool);

      bool getAttackable() const;
      TeamSide getTeamSide() const;



    //others
    public:
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

      class BuildingAttackable : public BaseHealth
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

      class BuildingAttacker : public BaseAttack
      {
          public:
            class Tower : public BuildingAttacker, public BuildingAttackable
            {

            };

            class Fountain : public BuildingAttacker, public BuildingUnattackable
            {

            };
      };


  };
}

#endif
