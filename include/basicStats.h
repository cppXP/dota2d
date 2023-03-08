#ifndef DOTA2D_BASIC_STATS_HEADER
#define DOTA2D_BASIC_STATS_HEADER
#include "baseAttack.h"
#include "baseHealth.h"
#include "baseSprite.h"
#include "baseVision.h"

namespace dota2d
{
  class BasicStats : public BaseAttack, public BaseSprite, public BaseVision,  public BaseHealth
  {
    public:
      BasicStats() : BaseAttack() : BaseSprite() : BaseVision() : BaseHealth()
      {
        setStun_duration(0);
        setSilence_duration(0);
        setUntargetable_duration(0);
        setUnattackable_duration(0);
        setTeleport_cooldown(0);
        setMovement_speed(0);
        setTeleport_cast_time(0);
        setGold_per_second(0);
        setGold(0);
        setIntelligence(0);
        setStrength(0);
        setAgility(0);
      }

      BasicStats(int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
                 int _teleport_cd,int _move_speed,int _teleport_ct,
                 int _gold_ps,int _gold,
                 int _intel,int _streng,int _agili) : BaseAttack() : BaseSprite() : BaseVision() : BaseHealth()
                 {
                   setTeleport_cooldown(_teleport_cd);
                   setMovement_speed(_move_speed);
                   setTeleport_cast_time(_teleport_ct);
                   setGold_per_second(_gold_ps);
                   setGold(_gold);
                   setIntelligence(_intel);
                   setStrength(_streng);
                   setAgility(_agili);
                 }

      BasicStats(int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
                 int _teleport_cd,int _move_speed,int _teleport_ct,
                 int _gold_ps,int _gold,
                 int _intel,int _streng,int _agili,
                 int _attackrange,int _attackspeed,int _physicD,int _magicD, //for baseAttack
                 std::string _textureTxt, sf::Vector2f _position, //for baseSprite
                 int _dayv, int _dayob, int _nightv, int _nightob, invisibleType _invistype, int _invisduration,  //for baseVision
                 int _hp,int _maxhp, float _hpregen, int _mana, int _maxmana, float _manaregen, float _magicR, float _physicR, //for baseHealth
                ): BaseAttack(_attackrange,_attackspeed,_physicD,_magicD)
                 : BaseSprite(_textureTxt,_position)
                 : BaseVision(_dayv,_dayob,_nightv,_nightob,_invistype,_invisduration)
                 : BaseHealth(_hp,_maxhp,_hpregen,_mana,_max_mana,_manaregen,_magicR,_physicR)
                {
                  setTeleport_cooldown(_teleport_cd);
                  setMovement_speed(_move_speed);
                  setTeleport_cast_time(_teleport_ct);
                  setGold_per_second(_gold_ps);
                  setGold(_gold);
                  setIntelligence(_intel);
                  setStrength(_streng);
                  setAgility(_agili);
                }



    protected:
      int m_stun_duration;
      int m_silence_duration;
      int m_unattackable_duration;
      int m_untargetable_duration;



      int m_teleport_cooldown;
      int m_movement_speed;
      int m_teleport_cast_time;


      int m_gold_per_second;
      int m_gold;

      int m_intelligence;
      int m_strength;
      int m_agility;

      void setSilence_duration(int);
      void setStun_duration(int);
      void setUnattackable_duration(int);
      void setUntargetable_duration(int);
      void setTeleport_cooldown(int);
      void setMovement_speed(int);
      void setTeleport_cast_time(int);
      void setGold_per_second(int);
      void setGold(int);
      void setIntelligence(int);
      void setAgility(int);
      void setStrength(int);

      int getSilence_duration();
      int getStun_duration();
      int getUnattackable_duration();
      int getUntargetable_duration();
      int getTeleport_cooldown();
      int getMovement_speed();
      int getTeleport_cast_time();
      int getGold_per_second();
      int getGold();
      int getelligence();
      int getAgility();
      int getStrength();

      void printBasic_stats();
  };
}

#endif
