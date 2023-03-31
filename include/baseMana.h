#ifndef DOTA2D_BASE_MANA_HEADER
#define DOTA2D_BASE_MANA_HEADER
#include <SFML/Graphics.hpp>
#include <iostream>
#include "baseSpriteBar.h"


namespace dota2d
{
  class BaseMana
  {
    public:
        BaseSpriteBar m_sprite_mana;
        BaseMana();
        BaseMana(int,int,float);
        BaseMana(int,int,float,sf::Vector2f);

    protected:
      int m_mana;
      int m_max_mana;
      float m_mana_regen;

      //mana
      void setMana(int);
      void setManaRegen(float);
      void setMaxMana(int);

      //health
      int getMana() const;
      float getManaRegen() const;
      int getMaxMana() const;

      //actions
      void printMana_stats() const;

  };

}


#endif
