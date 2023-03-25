#ifndef DOTA2D_BASE_HEALTH_HEADER
#define DOTA2D_BASE_HEALTH_HEADER
#include <SFML/Graphics.hpp>
#include <iostream>
#include "baseSpriteBar.h"


namespace dota2d
{
  class BaseHealth
  {
    public:
        BaseHealth();
        BaseHealth(int,int,float,
                   float,float);
    protected:
      int m_hitpoint;
      int m_max_hitpoint;
      float m_hitpoint_regen;

      float m_physical_rasistant;
      float m_magical_rasistant;

      BaseSpriteBar m_sprite_hitpoint;

      //rasistant
      void setMagicRasistant(float);
      void setPhysicRasistant(float);
      float getPhysicRasistant() const;
      float getMagicRasistant() const;

      //health
      void setHitpoint(int);
      void setHitpointRegen(float);
      void setMaxHitpoint(int);
      int getHitpoint() const;
      float getHitpointRegen() const;
      int getMaxHitpoint() const;


      //actions
      void printHealth_stats() const;

  };

}


#endif
