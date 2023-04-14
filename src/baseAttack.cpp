#include "../include/baseAttack.h"

dota2d::BaseAttack::BaseAttack()
{
  setAttackRange(0);
  setAttackSpeed(0);
  setMagicalDamage(0);
  setPhysicalDamage(0);
}

dota2d::BaseAttack::BaseAttack
    (int _aRange,int _aSpeed,int _magicD,int _physicD)
{
  setAttackRange(_aRange);
  setAttackSpeed(_aSpeed);
  setMagicalDamage(_magicD);
  setPhysicalDamage(_physicD);
}


void dota2d::BaseAttack::setAttackRange(int _value)
{
  m_attack_range = _value;
}
void dota2d::BaseAttack::setAttackSpeed(int _value)
{
  m_attack_speed = _value;
}
void dota2d::BaseAttack::setPhysicalDamage(int _value)
{
  m_physical_damage = _value;
}
void dota2d::BaseAttack::setMagicalDamage(int _value)
{
  m_magical_damage = _value;
}


std::string dota2d::BaseAttack::getAttack_stats() const
{
  std::string result = "a.range: " + std::to_string(getAttackRange())
    + "\na.speed: " +  std::to_string(getAttackSpeed())
    + "\nd.magical: " +  std::to_string(getMagicalDamage())
    + "\nd.physical: " +  std::to_string(getPhysicalDamage());
  return result;
}

int dota2d::BaseAttack::getAttackRange() const
{
  return m_attack_range;
}
int dota2d::BaseAttack::getAttackSpeed() const
{
  return m_attack_speed;
}
int dota2d::BaseAttack::getMagicalDamage() const
{
  return m_magical_damage;
}
int dota2d::BaseAttack::getPhysicalDamage() const
{
  return m_physical_damage;
}


void dota2d::BaseAttack::printAttack_stats() const
{
    std::cout << "\n BaseAttack::printAttack_stats():"
         << "\n attack-range = " << getAttackRange()
         << "\n attack-speed = " << getAttackSpeed()
         << "\n magical-damage = " << getMagicalDamage()
         << "\n physical-damage = " << getPhysicalDamage()
         << " .";
}
