#ifndef DOTA2D_ITEM_HEADER
#define DOTA2D_ITEM_HEADER
#include <iostream>
#include "ability.h"
#include <string>

namespace dota2d
{
  enum class BottleContains
  {
    Empty,
    Shrine,
    DoubleDamage,
    Haste,
    Illusion,
    Regenration,
    Bounty,
    Water,
    Arcane,
    Invisibility
  };

  class Item : public Ability
  {
    public:
      Item()
      :
        setPrice(100)
        setMaxCharge(3)
        setChargeStashTime(0);
        setCharges(0);
        setSellable(true);
        setShareable(false);
        setIsusing(false);
        setDenyable(true);
        setTransformable(true);
        setDropable(true);
        setBottleContains(BottleContains::Shrine)
        : Ability();


      Item(int _price,int _maxCharge,int _chargeStashTime, int _charges
              bool _sellable,bool _shareable,bool _isusing,
              bool _denyable,bool _transformable,bool _dropable,
              BottleContains _Bottlecontains=1)
              : Ability();




      Item(int _price,int _maxCharge,int _chargeStashTime, int _charges
              bool _sellable,bool _shareable,bool _isusing,
              bool _denyable,bool _transformable,bool _dropable,
              BottleContains _Bottlecontains=1, // for self

              //Ability
              std::string _title, std::string _description,
              AbilityType _abType,TargetType _targetMode,
              int _cooldown,int _radius,int _castTime,

              int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
              int _teleport_cd,int _move_speed,int _teleport_ct,
              int _gold_ps,int _gold,
              int _intel,int _streng,int _agili
            ) : Ability(
              _title, _description,
             _abType, _targetMode,
             _cooldown, _radius, _castTime,
             _stun_d,  _silence_d,  _unattack_d,  _untarget_d,

             _teleport_cd, _move_speed, _teleport_ct,
             _gold_ps, _gold,
             _intel, _streng, _agili);




      Item(int _price,int _maxCharge,int _chargeStashTime, int _charges
              bool _sellable,bool _shareable,bool _isusing,
              bool _denyable,bool _transformable,bool _dropable,
              BottleContains _Bottlecontains=1, // for self


              //Ability
              std::string _title, std::string _description,
              AbilityType _abType,TargetType _targetMode,
              int _cooldown,int _radius,int _castTime,

              int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
              int _teleport_cd,int _move_speed,int _teleport_ct,
              int _gold_ps,int _gold,
              int _intel,int _streng,int _agili,
              int _attackrange,int _attackspeed,int _physicD,int _magicD,
              std::string _textureTxt, sf::Vector2f _position,
              int _dayv, int _dayob, int _nightv, int _nightob, invisibleType _invistype, int _invisduration,
              int _hp,int _maxhp, float _hpregen, int _mana, int _maxmana, float _manaregen, float _magicR, float _physicR

            )
              : Ability(
                          _title, _description,
                         _abType, _targetMode,
                         _cooldown, _radius, _castTime,
                          _stun_d,  _silence_d,  _unattack_d,  _untarget_d,
                          _teleport_cd, _move_speed, _teleport_ct,
                          _gold_ps, _gold,
                          _intel,_streng,_agili,
                          _attackrange,_attackspeed,_physicD,_magicD, //for baseAttack
                          _textureTxt, sf::Vector2f _position, //for baseSprite
                          _dayv, _dayob, _nightv, _nightob, invisibleType _invistype, _invisduration,  //for baseVision
                          _hp,_maxhp, float _hpregen, _mana, _maxmana, float _manaregen, float _magicR, float _physicR
                          );





      void setPrice(int)
      void setMaxCharge(int)
      void setChargeStashTime(int);
      void setCharges(int);
      void setSellable(bool);
      void setShareable(bool);
      void setIsusing(bool);
      void setDenyable(bool);
      void setTransformable(bool);
      void setDropable(bool);
      void setBottleContains(BottleContains);


      int getPrice();
      int getMaxCharge();
      int getChargeStashTime();
      int getCharges();
      bool getSellable();
      bool getShareable();
      bool getIsUsing();
      bool getDenyable();
      bool getTransformable();
      bool getDropable();
      BottleContains getChargeContains();


      //actions


    protected:
      int m_price;
      int m_maxCharge;
      int m_chargeStashTime;
      int m_charges;
      bool m_sellable;
      bool m_shareable;
      bool m_isUsing;
      bool m_denyable;
      bool m_transformable;
      bool m_dropable;
      BottleContains m_chargeContains;

  };
}


#endif
