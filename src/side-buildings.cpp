#include "../include/side-buildings.h"

void dota2d::SideBuildings::init_dire()
{
  const TeamSide team = dota2d::TeamSide::Dire;
  //single buildings
  m_fountain = new Fountain(100, 1, 1, 50, team, ASSEST_BUILDING_FOUNTAIN_DIRE, sf::Vector2f(2000,200));
  m_ancient = new Ancient(9000, 9000, 1.0, 10, 0, team, ASSEST_BUILDING_ANCIENT_DIRE, sf::Vector2f(1800,400));
  m_secretshop = new Secretshop(ASSEST_BUILDING_SECRETSHOP, sf::Vector2f(1500,1000));
  m_outpost = new Outpost(true, team, ASSEST_BUILDING_OUTPOST_DIRE, sf::Vector2f(500,500));

  //pillars
  m_pillars[0] = new Pillar(1300, 1300, 0.5, 50, 0, team, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(600, 100));
  m_pillars[1] = new Pillar(1300, 1300, 0.5, 50, 0, team, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(700, 650));
  m_pillars[2] = new Pillar(1300, 1300, 0.5, 50, 0, team, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(1800, 500));

  //baracks top
  m_melee_barracks[0] = new Barracks(1500, 1500, 0.5, 50, 0, team, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(550, 100));
  m_ranged_barracks[0] = new Barracks(2000, 2000, 0.5, 50, 0, team, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(550, 150));;

  //baracks middle
  m_melee_barracks[1] = new Barracks(1500, 1500, 0.5, 50, 0, team, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(953, 478));
  m_ranged_barracks[1] =  new Barracks(2000, 2000, 0.5, 50, 0, team, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(1071, 598));;

  //barracks bottom
  m_melee_barracks[2] = new Barracks(1500, 1500, 0.5, 50, 0, team, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(1700, 500));
  m_ranged_barracks[2] =  new Barracks(2000, 2000, 0.5, 50, 0, team, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(1750, 500));;

  //top towers
  m_top_towers[0] = new Tower(100, 10, 1, 1, 1100, 1100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));
  m_top_towers[1] = new Tower(100, 10, 1, 1, 1200, 1200, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));
  m_top_towers[2] = new Tower(100, 10, 1, 1, 1300, 1300, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));

  //middle towers
  m_middle_towers[0] = new Tower(100, 10, 1, 1, 2100, 2100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(3353, 1741));
  m_middle_towers[1] = new Tower(100, 10, 1, 1, 2200, 2200, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(4060, 1052));
  m_middle_towers[2] = new Tower(100, 10, 1, 1, 2300, 2300, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(854, 474));
  m_middle_towers[3] = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1900, 300));
  m_middle_towers[4] = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 300));

  //bottom towers
  m_bottom_towers[0] = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 1000));
  m_bottom_towers[1] = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 800));
  m_bottom_towers[2] = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 600));
}

void dota2d::SideBuildings::init_radiant()
{
  const TeamSide team = dota2d::TeamSide::Radiant;
  //single buildings
  m_fountain = new Fountain(100, 1, 1, 50, team, ASSEST_BUILDING_FOUNTAIN_RADIANT, sf::Vector2f(2000,3000));
  m_ancient = new Ancient(9000, 9000, 1.0, 10, 0, team, ASSEST_BUILDING_ANCIENT_RADIANT, sf::Vector2f(1800,3000));
  m_secretshop = new Secretshop(ASSEST_BUILDING_SECRETSHOP, sf::Vector2f(1500,3000));
  m_outpost = new Outpost(true, team, ASSEST_BUILDING_OUTPOST_RADIANT, sf::Vector2f(500,3000));

  //pillars
  m_pillars[0] = new Pillar(1300, 1300, 0.5, 50, 0, team, ASSEST_BUILDING_PILLAR_RADIANT, sf::Vector2f(600, 3000));
  m_pillars[1] = new Pillar(1300, 1300, 0.5, 50, 0, team, ASSEST_BUILDING_PILLAR_RADIANT, sf::Vector2f(700, 3000));
  m_pillars[2] = new Pillar(1300, 1300, 0.5, 50, 0, team, ASSEST_BUILDING_PILLAR_RADIANT, sf::Vector2f(1800, 3000));

  //baracks top
  m_melee_barracks[0] = new Barracks(1500, 1500, 0.5, 50, 0, team, ASSEST_BUILDING_MELEE_BARRACKS_RADIANT, sf::Vector2f(550, 3000));
  m_ranged_barracks[0] = new Barracks(2000, 2000, 0.5, 50, 0, team, ASSEST_BUILDING_RANGED_BARRACKS_RADIANT, sf::Vector2f(550, 3000));;

  //baracks middle
  m_melee_barracks[1] = new Barracks(1500, 1500, 0.5, 50, 0, team, ASSEST_BUILDING_MELEE_BARRACKS_RADIANT, sf::Vector2f(953, 3000));
  m_ranged_barracks[1] =  new Barracks(2000, 2000, 0.5, 50, 0, team, ASSEST_BUILDING_RANGED_BARRACKS_RADIANT, sf::Vector2f(1071, 3000));;

  //barracks bottom
  m_melee_barracks[2] = new Barracks(1500, 1500, 0.5, 50, 0, team, ASSEST_BUILDING_MELEE_BARRACKS_RADIANT, sf::Vector2f(1700, 3000));
  m_ranged_barracks[2] =  new Barracks(2000, 2000, 0.5, 50, 0, team, ASSEST_BUILDING_RANGED_BARRACKS_RADIANT, sf::Vector2f(1750, 3000));;

  //top towers
  m_top_towers[0] = new Tower(100, 10, 1, 1, 1100, 1100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(500, 3000));
  m_top_towers[1] = new Tower(100, 10, 1, 1, 1200, 1200, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(500, 3000));
  m_top_towers[2] = new Tower(100, 10, 1, 1, 1300, 1300, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(500, 3000));

  //middle towers
  m_middle_towers[0] = new Tower(100, 10, 1, 1, 2100, 2100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(3353, 3000));
  m_middle_towers[1] = new Tower(100, 10, 1, 1, 2200, 2200, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(4060, 3000));
  m_middle_towers[2] = new Tower(100, 10, 1, 1, 2300, 2300, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(854, 3000));
  m_middle_towers[3] = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(1900, 3000));
  m_middle_towers[4] = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(1800, 3000));

  //bottom towers
  m_bottom_towers[0] = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(1800, 3000));
  m_bottom_towers[1] = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(1800, 3000));
  m_bottom_towers[2] = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, team, ASSEST_BUILDING_RANGED_TOWER_RADIANT, sf::Vector2f(1800, 3000));
}



void dota2d::SideBuildings::renderBuidlings(sf::RenderWindow* _window)
{
  //building without healthBar
  _window->draw(m_fountain->getSprite());
  _window->draw(m_secretshop->getSprite());
  _window->draw(m_outpost->getSprite());


  //buidling with healthBar
  _window->draw(m_ancient->getSprite());
  _window->draw(m_ancient->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_ancient->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

  for(int i=0; i<=2; i++)
  {

    //pillars
    _window->draw(m_pillars[i]->getSprite());
    _window->draw(m_pillars[i]->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
    _window->draw(m_pillars[i]->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

    //melee barracks
    _window->draw(m_melee_barracks[i]->getSprite());
    _window->draw(m_melee_barracks[i]->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
    _window->draw(m_melee_barracks[i]->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

    //ranged barracks
    _window->draw(m_ranged_barracks[i]->getSprite());
    _window->draw(m_ranged_barracks[i]->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
    _window->draw(m_ranged_barracks[i]->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());


    //top towers
    _window->draw(m_top_towers[i]->getSprite());
    _window->draw(m_top_towers[i]->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
    _window->draw(m_top_towers[i]->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

    //bottom towers
    _window->draw(m_bottom_towers[i]->getSprite());
    _window->draw(m_bottom_towers[i]->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
    _window->draw(m_bottom_towers[i]->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());
  }

  for(int k=0; k<=4; k++)
  {
    _window->draw(m_middle_towers[k]->getSprite());
    _window->draw(m_middle_towers[k]->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
    _window->draw(m_middle_towers[k]->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());
  }

}
