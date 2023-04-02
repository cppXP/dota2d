#include "../include/side-buildings.h"

void dota2d::SideBuildings::init_dire()
{
  //single buildings
  m_fountain = new Fountain(100, 1, 1, 50, TeamSide::Dire, ASSEST_BUILDING_FOUNTAIN_DIRE, sf::Vector2f(2000,200));
  m_ancient = new Ancient(9000, 9000, 1.0, 10, 0, TeamSide::Dire, ASSEST_BUILDING_ANCIENT_DIRE, sf::Vector2f(1800,400));
  m_secretshop = new Secretshop(ASSEST_BUILDING_SECRETSHOP, sf::Vector2f(1500,1000));
  m_outpost = new Outpost(true, TeamSide::Dire, ASSEST_BUILDING_OUTPOST_DIRE, sf::Vector2f(500,500));

  //pillars
  m_pillar_top = new Pillar(1300, 1300, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(600, 100));
  m_pillar_middle = new Pillar(1300, 1300, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(700, 650));
  m_pillar_bottom = new Pillar(1300, 1300, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(1800, 500));

  //baracks top
  m_top_melee_baracks = new Barracks(1500, 1500, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(550, 100));
  m_top_ranged_baracks = new Barracks(2000, 2000, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(550, 150));;

  //baracks middle
  m_middle_melee_barracks = new Barracks(1500, 1500, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(953, 478));
  m_middle_ranged_barracks =  new Barracks(2000, 2000, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(1071, 598));;

  //barracks bottom
  m_bottom_melee_barracks = new Barracks(1500, 1500, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(1700, 500));
  m_bottom_ranged_barracks =  new Barracks(2000, 2000, 0.5, 50, 0, TeamSide::Dire, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(1750, 500));;

  //top towers
  m_top_1_tower = new Tower(100, 10, 1, 1, 1100, 1100, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));
  m_top_2_tower = new Tower(100, 10, 1, 1, 1200, 1200, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));
  m_top_3_tower = new Tower(100, 10, 1, 1, 1300, 1300, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));

  //middle towers
  m_middle_1_tower = new Tower(100, 10, 1, 1, 2100, 2100, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(3353, 1741));
  m_middle_2_tower = new Tower(100, 10, 1, 1, 2200, 2200, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(4060, 1052));
  m_middle_3_tower = new Tower(100, 10, 1, 1, 2300, 2300, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(854, 474));
  m_middle_4_tower = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1900, 300));
  m_middle_5_tower = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 300));

  //bottom towers
  m_bottom_1_tower = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 1000));
  m_bottom_2_tower = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 800));
  m_bottom_3_tower = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, TeamSide::Dire, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 600));
}

//
// void dota2d::SideBuildings::init_radiant()
// {
//   //single buildings
//   m_fountain = new Fountain(100, 1, 1, 50, TeamSide::Radiant, ASSEST_BUILDING_FOUNTAIN_DIRE, sf::Vector2f(2000,200));
//   m_ancient = new Ancient(9000, 9000, 1.0, 10, 0, TeamSide::Radiant, ASSEST_BUILDING_ANCIENT_DIRE, sf::Vector2f(1800,400));
//   m_secretshop = new Secretshop(ASSEST_BUILDING_SECRETSHOP, sf::Vector2f(1500,1000));
//   m_outpost = new Outpost(true, TeamSide::Radiant, ASSEST_BUILDING_OUTPOST_DIRE, sf::Vector2f(500,500));
//
//   //pillars
//   m_pillar_top = new Pillar(1300, 1300, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(600, 100));
//   m_pillar_middle = new Pillar(1300, 1300, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(700, 650));
//   m_pillar_bottom = new Pillar(1300, 1300, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_PILLAR_DIRE, sf::Vector2f(1800, 500));
//
//   //baracks top
//   m_top_melee_baracks = new Barracks(1500, 1500, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(550, 100));
//   m_top_ranged_baracks = new Barracks(2000, 2000, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(550, 150));;
//
//   //baracks middle
//   m_middle_melee_barracks = new Barracks(1500, 1500, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(650, 650));
//   m_middle_ranged_barracks =  new Barracks(2000, 2000, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(650, 700));;
//
//   //barracks bottom
//   m_bottom_melee_barracks = new Barracks(1500, 1500, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_MELEE_BARRACKS_DIRE, sf::Vector2f(1700, 500));
//   m_bottom_ranged_barracks =  new Barracks(2000, 2000, 0.5, 50, 0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_BARRACKS_DIRE, sf::Vector2f(1750, 500));;
//
//   //top towers
//   m_top_1_tower = new Tower(100, 10, 1, 1, 1100, 1100, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1322, 504));
//   m_top_2_tower = new Tower(100, 10, 1, 1, 1200, 1200, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1288, 368));
//   m_top_3_tower = new Tower(100, 10, 1, 1, 1300, 1300, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(500, 100));
//
//   //middle towers
//   m_middle_1_tower = new Tower(100, 10, 1, 1, 2100, 2100, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1000, 1000));
//   m_middle_2_tower = new Tower(100, 10, 1, 1, 2200, 2200, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(800, 800));
//   m_middle_3_tower = new Tower(100, 10, 1, 1, 2300, 2300, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(600, 600));
//   m_middle_4_tower = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1900, 300));
//   m_middle_5_tower = new Tower(100, 10, 1, 1, 2400, 2400, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 300));
//
//   //bottom towers
//   m_bottom_1_tower = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 1000));
//   m_bottom_2_tower = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 800));
//   m_bottom_3_tower = new Tower(100, 10, 1, 1, 3100, 3100, 1.0, 10,0, TeamSide::Radiant, ASSEST_BUILDING_RANGED_TOWER_DIRE, sf::Vector2f(1800, 600));
// }



void dota2d::SideBuildings::renderBuidlings(sf::RenderWindow* _window)
{
  _window->draw(m_fountain->getSprite());


  // healthBar included
  _window->draw(m_ancient->getSprite());
  _window->draw(m_ancient->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_ancient->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_secretshop->getSprite());
  _window->draw(m_outpost->getSprite());


  //
  _window->draw(m_pillar_top->getSprite());
  _window->draw(m_pillar_top->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_pillar_top->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

  //
  _window->draw(m_pillar_middle->getSprite());
  _window->draw(m_pillar_middle->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_pillar_middle->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

  //
  _window->draw(m_pillar_bottom->getSprite());
  _window->draw(m_pillar_bottom->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_pillar_bottom->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_top_melee_baracks->getSprite());
  _window->draw(m_top_melee_baracks->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_top_melee_baracks->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());


  _window->draw(m_top_ranged_baracks->getSprite());
  _window->draw(m_top_ranged_baracks->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_top_ranged_baracks->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_middle_melee_barracks->getSprite());
  _window->draw(m_middle_melee_barracks->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_melee_barracks->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_middle_ranged_barracks->getSprite());
  _window->draw(m_middle_ranged_barracks->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_ranged_barracks->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_bottom_melee_barracks->getSprite());
  _window->draw(m_bottom_melee_barracks->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_bottom_melee_barracks->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_bottom_ranged_barracks->getSprite());
  _window->draw(m_bottom_ranged_barracks->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_bottom_ranged_barracks->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());




  _window->draw(m_top_1_tower->getSprite());
  _window->draw(m_top_1_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_top_1_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_top_2_tower->getSprite());
  _window->draw(m_top_2_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_top_2_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_top_3_tower->getSprite());
  _window->draw(m_top_3_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_top_3_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());




  _window->draw(m_middle_1_tower->getSprite());
  _window->draw(m_middle_1_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_1_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_middle_2_tower->getSprite());
  _window->draw(m_middle_2_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_2_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_middle_3_tower->getSprite());
  _window->draw(m_middle_3_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_3_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_middle_4_tower->getSprite());
  _window->draw(m_middle_4_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_4_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_middle_5_tower->getSprite());
  _window->draw(m_middle_5_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_middle_5_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());




  _window->draw(m_bottom_1_tower->getSprite());
  _window->draw(m_bottom_1_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_bottom_1_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_bottom_2_tower->getSprite());
  _window->draw(m_bottom_2_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_bottom_2_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());



  _window->draw(m_bottom_3_tower->getSprite());
  _window->draw(m_bottom_3_tower->m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw(m_bottom_3_tower->m_sprite_hitpoint.get_baseSpriteBar_value_sprite());
}
