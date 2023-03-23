#include "../include/game.h"

void dota2d::Game::setMap_min_pos(sf::Vector2i _min)
{
  m_map_minimum_position = _min;
}

void dota2d::Game::setMap_max_pos(sf::Vector2i _max)
{
  m_map_maximum_position = _max;
}

sf::Vector2i dota2d::Game::getMap_max_pos()
{
  return m_map_maximum_position;
}

sf::Vector2i dota2d::Game::getMap_min_pos()
{
  return m_map_minimum_position;
}

void dota2d::Game::printGame_stats()
{

  std::cout << "game::print stats=\n"
   << " map_minimum_position : " << getMap_min_pos().x << " y= " << getMap_min_pos().y
   << " map_maximum_position : " << getMap_max_pos().x << " y= " << getMap_max_pos().y
   << std::endl;
}


void dota2d::Game::moveCamera()
{
  // Camera init
  m_camera.reset(sf::FloatRect(0,0, m_window_width/2, m_window_height/2));
  m_camera.setViewport(m_camera_viewport);
  m_window.setView(m_camera);
}


void dota2d::Game::draw()
{

  //render things.
  m_window.draw(m_background_sprite.getSprite()); //background-sprite
}


void dota2d::Game::init()
{
  debug("game::init() called.");

  // Window init
  m_window.create
  (
    sf::VideoMode(getWindow_width(),getWindow_height())
    , getWindow_title(), sf::Style::Fullscreen
  );
  // m_window.setPosition(getWindow_position());
  m_window.setFramerateLimit(60);

}


void dota2d::Game::run()
{
  debug("game::run() called.");
  init();
  while(m_window.isOpen())
  {

    //event



    //render things.
    m_window.clear(sf::Color::Black);
    draw();
    m_window.display();

  }
}
