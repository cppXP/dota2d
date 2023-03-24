#include "./include/game.h"


int main()
{


  dota2d::Game game
  (
    sf::Vector2i(0,0),sf::Vector2i(2000,2000), //map min&max
    sf::VideoMode::getDesktopMode().width,sf::VideoMode::getDesktopMode().height, "Dota2d window.", //window
    sf::Vector2i(0,0), 0.50, 0.0, 5, 300, sf::FloatRect(0,0, 1.0f, 1.0f), //camera
    ASSEST_GAME_BACKGROUND_TEXTURE_1 , sf::Vector2f(-50, -50)
  );

  game.run();
  return 0;
}
