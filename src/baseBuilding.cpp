#include "baseBuilding.h"

void dota2d::BaseBuilding::setTeamSide(TeamSide _team)
{
  m_team = _team;
}

dota2d::TeamSide dota2d::BaseBuilding::getTeamSide() const
{
  return m_team;
}


void dota2d::BaseBuilding::setAttackable(bool _attackable)
{
  m_attackable = _attackable;
}

bool dota2d::BaseBuilding::getAttackable() const
{
  return m_attackable;
}
