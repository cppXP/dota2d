#include "../include/baseBuilding.h"

void dota2d::BaseBuilding::setTeamSide(TeamSide _team)
{
  m_team = _team;
}

dota2d::TeamSide dota2d::BaseBuilding::getTeamSide() const
{
  return m_team;
}
