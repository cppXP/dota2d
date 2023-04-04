#ifndef HERO_AXE_HEADER
#define HERO_AXE_HEADER
#include "../hero.h"

namespace dota2d
{
  class Axe : public Hero
  {
  public:
    /*
    int _dead_duration ,int _level, //self
      // Unit
      sf::Vector2f _spawn_pos, std::string _unit_name, FaceDirectionType _face, //unit
      //BasicStats:
      int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
                 int _teleport_cd,int _move_speed,int _teleport_ct,
                 int _gold_ps,int _gold,
                 int _intel,int _streng,int _agili,
                 int _attackrange,int _attackspeed,int _physicD,int _magicD, //for baseAttack
                 std::string _textureTxt, sf::Vector2f _position, //for baseSprite
                 int _dayv, int _dayob, int _nightv, int _nightob, invisibleType _invistype, int _invisduration,  //for baseVision
                 int _hp,int _maxhp, float _hpregen, int _mana, int _maxmana, float _manaregen, float _magicR, float _physicR //for baseHealth
    */
    Axe()
      : Hero
      (
          0,3,
          HERO_SPAWN_POSITION_DIRE, "Axe" , FaceDirectionType::North,
          0,0,0,0,
          5, 25, 2,
          1, 750,
          0, 10, 0,
          25, 10, 100, 0,
          ASSEST_HERO_AXE, HERO_SPAWN_POSITION_DIRE,
          10, 10, 10, 10, HERO_DEFAULT_INVISIBLETYPE, 0,
          800, 800, 1.7, 400, 400, 1.8, 0 , 25
      )
          {

          }
  };
}

#endif
