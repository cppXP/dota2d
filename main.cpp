// #include "./include/baseBuilding.h"
#include "game.h"


dota2d::Game game();
sf::Vector2f viewSize(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "dota2-game", sf::Style::Fullscreen);


dota2d::BaseBuilding tower1(dota2d::TeamSide::Dire, true, "./assets/tower1.png", sf::Vector2f(0.0, 0.0));


void draw()
{
  window.draw(tower1.getSprite());
}
int main()
{
  while(window.isOpen())
  {
    // inputs();

    // moveView();
    window.clear(sf::Color::Black);
    draw();
    window.display();
  }
  return 0;
}
