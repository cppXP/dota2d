#include "baseHealth.h"

dota2d::BaseHealth::BaseHealth()
{
  setMana(0);
  setMaxMana(0);
  setManaRegen(0.0);

  setHitpoint(0);
  setMaxHitpoint(0);
  setHitpointRegen(0.0);

  setMagicRasistant(0.0);
  setPhysicRasistant(0.0);
}

dota2d::BaseHealth::BaseHealth
          (int _hitpoint,int _max_hitpoint,float _hitpoint_regen,
           int _mana,int _max_mana,float _mana_regen,
           float _magic_rasistant,float _physic_rasistant)
{
  setMana(_mana);
  setMaxMana(_max_mana);
  setManaRegen(_mana_regen);

  setHitpoint(_hitpoint);
  setMaxHitpoint(_max_hitpoint);
  setHitpointRegen(_hitpoint_regen);

  setMagicRasistant(_magic_rasistant);
  setPhysicRasistant(_physic_rasistant);
}

void dota2d::BaseHealth::setMana(int _value)
{
  m_mana = _value;
}
void dota2d::BaseHealth::setManaRegen(float _value)
{
  m_mana_regen = _value;
}
void dota2d::BaseHealth::setMaxMana(int _value)
{
  m_max_mana = _value;
}
int dota2d::BaseHealth::getMana() const
{
  return m_mana;
}
float dota2d::BaseHealth::getManaRegen() const
{
  return m_mana_regen;
}
int dota2d::BaseHealth::getMaxMana() const
{
  return m_max_mana;
}







void dota2d::BaseHealth::setMagicRasistant(float _value)
{
  m_magical_rasistant = _value;
}
void dota2d::BaseHealth::setPhysicRasistant(float _value)
{
  m_physical_rasistant = _value;
}
float dota2d::BaseHealth::getMagicRasistant() const
{
  return m_magical_rasistant;
}
float dota2d::BaseHealth::getPhysicRasistant() const
{
  return m_physical_rasistant;
}





void dota2d::BaseHealth::setHitpoint(int _value)
{
  m_hitpoint = _value;
}
void dota2d::BaseHealth::setHitpointRegen(float _value)
{
   m_hitpoint_regen = _value;
}
void dota2d::BaseHealth::setMaxHitpoint(int _value)
{
  m_max_hitpoint = _value;
}
int dota2d::BaseHealth::getHitpoint() const
{
  return m_hitpoint;
}
float dota2d::BaseHealth::getHitpointRegen() const
{
  return m_hitpoint_regen;
}
int dota2d::BaseHealth::getMaxHitpoint() const
{
  return m_max_hitpoint;
}

void dota2d::BaseHealth::printHealth_stats() const
{
  std::cout << "\n BaseHealth::printHealth_stats():"
       << "\n hitpoint = " << getHitpoint()
       << "\n max-hitpoint = " << getMaxHitpoint()
       << "\n hitpoint-regen = " << getHitpointRegen()
       << "\n mana = " << getMana()
       << "\n max-mana = " << getMaxMana()
       << "\n mana-regen = " << getManaRegen()
       << "\n physical-rasistant = " << getPhysicRasistant()
       << "\n magical-rasistant = " << getMagicRasistant()
       << " .";
}
