#ifndef DOTA2D_SIDE_BUILDINGS_HEADER
#define DOTA2D_SIDE_BUILDINGS_HEADER

//buildings
#include "buildings/building-fountain.h"
#include "buildings/building-ancient.h"
#include "buildings/building-barracks.h"
#include "buildings/building-pillar.h"
#include "buildings/building-tower.h"

//buildings-usable
#include "buildings/building-secretshop.h"
#include "buildings/building-outpost.h"
#include "buildings/building-shrine.h"

#include "assets-config.h"

namespace dota2d
{
  class SideBuildings
  {
      //single buildings
      Fountain* m_fountain = nullptr;
      Ancient* m_ancient = nullptr;
      Secretshop* m_secretshop = nullptr;
      Outpost* m_outpost = nullptr;

      //pillars 0->top, 1->middle, 2->bottom
      Pillar* m_pillars[3] = {nullptr,nullptr,nullptr};

      //barracks. 0->top, 1->middle, 2->bottom
      Barracks* m_melee_barracks[3] = {nullptr,nullptr,nullptr};
      Barracks* m_ranged_barracks[3] = {nullptr,nullptr,nullptr};

      //top towers
      Tower* m_top_towers[3] = {nullptr, nullptr, nullptr};

      //middle towers
      Tower* m_middle_towers[5] = {nullptr,nullptr,nullptr,nullptr,nullptr};

      //bottom towers
      Tower* m_bottom_towers[3] = {nullptr,nullptr,nullptr};

    public:
      void init_dire();
      void init_radiant();
      void renderBuidlings(sf::RenderWindow* _window);

      //delete pointers
  };
}
#endif
