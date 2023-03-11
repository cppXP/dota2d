#include "basicStats.h"



void dota2d::BasicStats::setStun_duration(int _value)
{
  m_stun_duration = _value;
}

void dota2d::BasicStats::setSilence_duration(int _value)
{
    m_silence_duration = _value;
}

void dota2d::BasicStats::setUnattackable_duration(int _value)
{
  m_unattackable_duration=_value;
}

void dota2d::BasicStats::setUntargetable_duration(int _value)
{
  m_untargetable_duration = _value;
}

void dota2d::BasicStats::setTeleport_cooldown(int _value)
{
  m_teleport_cooldown = _value;
}

void dota2d::BasicStats::setMovement_speed(int _value)
{
  m_movement_speed = _value;
}
void dota2d::BasicStats::setTeleport_cast_time(int _value)
{
  m_teleport_cast_time = _value;
}
void dota2d::BasicStats::setGold_per_second(int _value)
{
  m_gold_per_second = _value;
}
void dota2d::BasicStats::setGold(int _value)
{
  m_gold = _value;
}
void dota2d::BasicStats::setIntelligence(int _value)
{
  m_intelligence = _value;
}
void dota2d::BasicStats::setAgility(int _value)
{
  m_agility = _value;
}
void dota2d::BasicStats::setStrength(int _value)
{
  m_strength = _value;
}








int dota2d::BasicStats::getStun_duration() const
{
  return m_stun_duration;
}

int dota2d::BasicStats::getSilence_duration() const
{
  return m_silence_duration;
}

int dota2d::BasicStats::getUntargetable_duration() const
{
  return m_untargetable_duration;
}
int dota2d::BasicStats::getUnattackable_duration() const
{
  return m_unattackable_duration;
}

int dota2d::BasicStats::getTeleport_cooldown() const
{
  return m_teleport_cooldown;
}

int dota2d::BasicStats::getMovement_speed() const
{
  return m_movement_speed;
}
int dota2d::BasicStats::getTeleport_cast_time() const
{
  return m_teleport_cast_time;
}
int dota2d::BasicStats::getGold_per_second() const
{
  return m_gold_per_second;
}
int dota2d::BasicStats::getGold() const
{
  return m_gold;
}
int dota2d::BasicStats::getIntelligence() const
{
  return m_intelligence;
}
int dota2d::BasicStats::getAgility() const
{
  return m_agility;
}
int dota2d::BasicStats::getStrength() const
{
  return m_strength;
}




void dota2d::BasicStats::printBasic_stats() const
{
  printHealth_stats();
  printAttack_stats();
  printVision_stats();
  printSprite_stats();

  std::cout << "\n BasicStats::printBasic_stats():"
       << "\n teleport-cooldown = " << getTeleport_cooldown()
       << "\n movement-speed = " << getMovement_speed()
       << "\n teleport cast-time= " << getTeleport_cast_time()
       << "\n gold-per-second = " << getGold_per_second()
       << "\n gold = " << getGold()
       << "\n intelligence = " << getIntelligence()
       << "\n strength = " << getStrength()
       << "\n agility = " << getAgility()
       << " .";

  std::cout << "\n -- end of basics_stats() -- \n";
}
