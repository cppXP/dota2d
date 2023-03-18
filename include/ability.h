#ifndef DOTA2D_ABILITY_HEADER
#define DOTA2D_ABILITY_HEADER
#include <iostream>
#include "basicStats.h"
#include <string>

namespace dota2d
{
  enum class TargetType
  {
    NoTarget,
    UnitTarget,
    PointTarget,
    VectorTarget
  };

  enum class AbilityType
  {
    Active,
    Channel,
    Passive,
    Toggle,
    AutoCast,
    Innate
  };

  class Ability : public BasicStats
  {
    public:
      Ability()
      :
        setTitle("untitled"),
        setDescription("undescriptioned"),
        setAbilityMode(AbilityType::Passive),
        setTargetType(TargetType::NoTarget),
        setCooldown(0),
        setRadius(0),
        setCastTime(0),
        BasicStats();


      Ability(std::string _title, std::string _description,
              AbilityType _abType,TargetType _targetMode,
              int _cooldown,int _radius,int _castTime)
              : BasicStats();

      Ability(std::string _title, std::string _description,
              AbilityType _abType,TargetType _targetMode,
              int _cooldown,int _radius,int _castTime, // for self

              //BasicStats
              int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
              int _teleport_cd,int _move_speed,int _teleport_ct,
              int _gold_ps,int _gold,
              int _intel,int _streng,int _agili
             ) : BasicStats( _stun_d,  _silence_d,  _unattack_d,  _untarget_d,
                           _teleport_cd, _move_speed, _teleport_ct,
                           _gold_ps, _gold,
                           _intel, _streng, _agili);

      Ability(std::string _title, std::string _description,
              AbilityType _abType,TargetType _targetMode,
              int _cooldown,int _radius,int _castTime, //for self

              //BasicStats Constactor
              int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
              int _teleport_cd,int _move_speed,int _teleport_ct,
              int _gold_ps,int _gold,
              int _intel,int _streng,int _agili,
              int _attackrange,int _attackspeed,int _physicD,int _magicD,
              std::string _textureTxt, sf::Vector2f _position,
              int _dayv, int _dayob, int _nightv, int _nightob, invisibleType _invistype, int _invisduration,
              int _hp,int _maxhp, float _hpregen, int _mana, int _maxmana, float _manaregen, float _magicR, float _physicR

            )
              : BasicStats(
                          _stun_d,  _silence_d,  _unattack_d,  _untarget_d,
                          _teleport_cd, _move_speed, _teleport_ct,
                          _gold_ps, _gold,
                          _intel,_streng,_agili,
                          _attackrange,_attackspeed,_physicD,_magicD, //for baseAttack
                          _textureTxt, sf::Vector2f _position, //for baseSprite
                          _dayv, _dayob, _nightv, _nightob, invisibleType _invistype, _invisduration,  //for baseVision
                          _hp,_maxhp, float _hpregen, _mana, _maxmana, float _manaregen, float _magicR, float _physicR
                          );



      void setTitle(std::string);
      void setDescription(std::string);
      void setAbilityMode(AbilityType);
      void setTargetType(TargetType);
      void setCooldown(int);
      void setRadius(int);
      void setCastTime(int);

      std::string getTitle();
      std::string getDescription();
      AbilityType getAbilityMode();
      TargetType getTargetMode();
      int getCooldown();
      int getRadius()
      int getCastTime();


      //action

    protected:
      std::string m_abilityTitle;
      std::string m_abilityDescription;
      AbilityType m_abilityMode;
      TargetType m_targetMode;
      int m_cooldown;
      int m_radius;
      int m_castTime;




  };
}


#endif
