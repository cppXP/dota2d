#include "baseBuilding.h"

void dota2d::BaseBuilding::setTeamSide(TeamSide _team)
{
  m_team = _team;
}

TeamSide dota2d::BaseBuilding::getTeamSide()
{
  return m_team;
}


void dota2d::BaseBuilding::setAttackable(bool _attackable)
{
  m_attackable = _attackable;
}

bool dota2d::BaseBuilding::getAttackable()
{
  return m_attackable;
}
