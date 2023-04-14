#ifndef DOTA2D_BASE_ATTACK_HEADER
#define DOTA2D_BASE_ATTACK_HEADER
#include <iostream>

namespace dota2d
{
  class BaseAttack
  {
    public:
      BaseAttack();
      BaseAttack(int,int,int,int);

    protected:
      int m_attack_range;
      int m_attack_speed;
      int m_physical_damage;
      int m_magical_damage;

    public:
      void setAttackRange(int);
      void setAttackSpeed(int);
      void setPhysicalDamage(int);
      void setMagicalDamage(int);

      int getAttackRange() const;
      int getAttackSpeed() const;
      int getMagicalDamage() const;
      int getPhysicalDamage() const;

      void printAttack_stats() const;
      std::string getAttack_stats() const;
  };
}


#endif
