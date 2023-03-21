#include "../include/game.h"
void dota2d::Game::setMap_min_pos(sf::Vector2i _min)
{
  m_map_minimum_position = _min;
}

void dota2d::Game::setMap_max_pos(sf::Vector2i _max)
{
  m_map_maximum_position = _max;
}
void dota2d::Game::printGame_stats()
{
  std::cout << "game::print stats=\n"
   << " map_minimum_position : " << getMap_min_pos()
   << " map_maximum_position : " << getMap_max_pos()
   << std::endl;
}

sf::Vector2i dota2d::Game::getMap_max_pos()
{
  return m_map_maximum_position;
}

sf::Vector2i dota2d::Game::getMap_min_pos()
{
  return m_map_minimum_position;
}





void dota2d::Game::init()
{
  std::cout << "game::init()\n";

  // Window init
  m_window.create
  (
    sf::ViewMode(getWindow_width(),getWindow_height())
    , getWindow_title(), sf::Style::Default//, getWindow_style()
  );
  // m_window.setPosition(getWindow_position());
  m_window.setFramerateLimit(60);

  // ...
}

void dota2d::Game::draw()
{

  //Draw things.
  //----------

}

void dota2d::Game::run()
{
  std::cout << "game::run()\n";
  init();
  while(window.isOpen())
  {

    //render things.
    m_window.clear(sf::Color::Black);
    draw();
    m_window.display();

  }
}
