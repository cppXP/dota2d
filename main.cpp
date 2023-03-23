#include "./include/game.h"


int main()
{


  dota2d::Game game
  (
    sf::Vector2i(0,1000),sf::Vector2i(0,1000), //map min&max
    sf::VideoMode::getDesktopMode().width,sf::VideoMode::getDesktopMode().height, "Dota2d window.", //window
    sf::Vector2i(0,0), 0.50, 0.0, 5, 5, sf::FloatRect(0,0, 1.0f, 1.0f), //camera
    "./assets/game/game-background.jpg" , sf::Vector2f(0.0, 0.0)
  );

  game.run();
  return 0;
}
