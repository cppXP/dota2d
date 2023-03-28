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

      //pillars
      Pillar* m_pillar_top = nullptr;
      Pillar* m_pillar_middle = nullptr;
      Pillar* m_pillar_bottom = nullptr;

      //baracks top
      Barracks* m_top_melee_baracks = nullptr;
      Barracks* m_top_ranged_baracks = nullptr;

      //baracks middle
      Barracks* m_middle_melee_barracks = nullptr;
      Barracks* m_middle_ranged_barracks = nullptr;

      //barracks bottom
      Barracks* m_bottom_melee_barracks = nullptr;
      Barracks* m_bottom_ranged_barracks = nullptr;

      //top towers
      Tower* m_top_1_tower = nullptr;
      Tower* m_top_2_tower = nullptr;
      Tower* m_top_3_tower = nullptr;

      //middle towers
      Tower* m_middle_1_tower = nullptr;
      Tower* m_middle_2_tower = nullptr;
      Tower* m_middle_3_tower = nullptr;
      Tower* m_middle_4_tower = nullptr;
      Tower* m_middle_5_tower = nullptr;

      //bottom towers
      Tower* m_bottom_1_tower = nullptr;
      Tower* m_bottom_2_tower = nullptr;
      Tower* m_bottom_3_tower = nullptr;

    public:
      void init_dire();
      void init_radiant();
      void renderBuidlings(sf::RenderWindow* _window);

      //delete pointers
  };
}
#endif
