#ifndef DOTA2D_BASE_VISION_HEADER
#define DOTA2D_BASE_VISION_HEADER
#include <iostream>

namespace dota2d
{
  enum class invisibleType
  {
    None,
    FromTower,
    FromEnemy,
    FromCreeps,
    FromWards,
    FromCreepEnemy,
    FromCreepsWards,
    FromAll
  };

  class BaseVision
  {
    public:
      BaseVision();
      BaseVision(int,int,
                 int,int,
                 invisibleType,int);

    protected:
      int m_day_vision;
      int m_night_vision;
      int m_night_observe_vision;
      int m_day_observe_vision;
      invisibleType m_invisible_type;
      int m_invisible_duration;

      void setDay_vision(int);
      void setDay_observe_vision(int);
      void setNight_vision(int);
      void setNight_observe_vision(int);
      void setInvisible_duration(int);
      void setInvisible_type(invisibleType);

      int getDay_vision();
      int getDay_observe_vision();
      int getNight_vision();
      int getNight_observe_vision();
      int getInvisible_duration();
      invisibleType getInvisibleType();

      void printVision_stats();
  };
}


#endif
