#include "baseVision.h"


dota2d::BaseVision::BaseVision()
{
  setDay_vision(0);
  setDay_observe_vision(0);
  setNight_vision(0);
  setNight_observe_vision(0);
  setInvisible_type(invisibleType::None);
  setInvisible_duration(0);
}

dota2d::BaseVision::BaseVision
          (int _day_v,int _day_ob_v,
           int _night_v,int _night_ob_v,
           invisibleType _in_type ,int _in_dur)
{
  setDay_vision(_day_v);
  setDay_observe_vision(_day_ob_v);
  setNight_vision(_night_v);
  setNight_observe_vision(_night_ob_v);
  setInvisible_type(_in_type);
  setInvisible_duration(_in_dur);
}

void dota2d::BaseVision::setDay_vision(int _value)
{
  m_day_vision=_value;
}
void dota2d::BaseVision::setDay_observe_vision(int _value)
{
  m_day_observe_vision = _value;
}

void dota2d::BaseVision::setNight_vision(int _value)
{
  m_night_vision = _value;
}

void dota2d::BaseVision::setNight_observe_vision(int _value)
{
  m_night_observe_vision = _value;
}

void dota2d::BaseVision::setInvisible_duration(int _value)
{
  m_invisible_duration = _value;
}

void dota2d::BaseVision::setInvisible_type(invisibleType _value)
{
  m_invisible_type = _value;
}



int dota2d::BaseVision::getDay_vision()
{
  return m_day_vision;
}
int dota2d::BaseVision::getDay_observe_vision()
{
  return m_day_observe_vision;
}
int dota2d::BaseVision::getNight_vision()
{
  return m_night_vision;
}
int dota2d::BaseVision::getNight_observe_vision()
{
  return m_night_observe_vision;
}
int dota2d::BaseVision::getInvisible_duration()
{
  return m_invisible_duration;
}
dota2d::invisibleType dota2d::BaseVision::getInvisibleType()
{
  return m_invisible_type;
}


void dota2d::BaseVision::printVision_stats()
{
  std::cout << "\n baseVision::printVision_stats():"
       << "\n day-vision = " << getDay_vision()
       << "\n day-observe-vision = " << getDay_observe_vision()
       << "\n night-vision = " << getNight_vision()
       << "\n night-observe-vision = " << getNight_observe_vision()
       << "\n invisible-type = " << (int)getInvisibleType()
       << "\n invisible-duration = " << getInvisible_duration()
       << " .";
}
