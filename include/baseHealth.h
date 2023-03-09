#ifndef DOTA2D_BASE_HEALTH_HEADER
#define DOTA2D_BASE_HEALTH_HEADER
#include <SFML/Graphics.hpp>
#include <iostream>


namespace dota2d
{
  class BaseHealth
  {
    public:
        BaseHealth();
        BaseHealth(int,int,float,
                   int,int,float,
                   float,float);
    protected:
      int m_hitpoint;
      int m_max_hitpoint;
      float m_hitpoint_regen;

      int m_mana;
      int m_max_mana;
      float m_mana_regen;

      float m_physical_rasistant;
      float m_magical_rasistant;


      //mana
      void setMana(int);
      void setManaRegen(float);
      void setMaxMana(int);
      int getMana();
      float getManaRegen();
      int getMaxMana();

      //rasistant
      void setMagicRasistant(float);
      void setPhysicRasistant(float);
      float getPhysicRasistant();
      float getMagicRasistant();

      //health
      void setHitpoint(int);
      void setHitpointRegen(float);
      void setMaxHitpoint(int);
      int getHitpoint();
      float getHitpointRegen();
      int getMaxHitpoint();


      //actions
      void printHealth_stats();

  };

}


#endif
