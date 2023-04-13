#ifndef UNIT_MELEE_CREEP_HEADER
#define UNIT_MELEE_CREEP_HEADER
#include "../unit.h"


#define HERO_SPAWN_FACE dota2d::FaceDirectionType::South
#define HERO_SPAWN_POSITION_DIRE sf::Vector2f(10.0, 10.0)
#define HERO_SPAWN_POSITION_RADIANT sf::Vector2f(100.0, 100.0)
#define HERO_DEFAULT_INVISIBLETYPE dota2d::invisibleType::None


namespace dota2d
{
  class MeleeCreep : public Unit
  {
  public:
    /*
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
    MeleeCreep()
      : Unit
      (
          HERO_SPAWN_POSITION_DIRE, "MeleeCreep1" , FaceDirectionType::North,
          0,0,0,0,
          5, 25, 2,
          1, 750,
          0, 10, 0,
          25, 10, 100, 0,
          ASSEST_HERO_DAZZLE, sf::Vector2f(2325,2332),
          10, 10, 10, 10, HERO_DEFAULT_INVISIBLETYPE, 0,
          650, 800, 1.7, 250, 400, 1.8, 0 , 25
      )
          {
                m_sprite_hitpoint.set_baseSpriteBar_percent( 650 / (800/100) );
                m_sprite_mana.set_baseSpriteBar_percent( 250 / (400/100) );
          }
  };
}

#endif
