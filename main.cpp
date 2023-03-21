#include "./include/game.h"


int main()
{


  dota2d::Game game
  (
    sf::Vector2i(0,1000),sf::Vector2i(0,1000), //map min&max
    800,800, "Dota2d window.", sf::Style::Default, //window
    sf::Vector2i(0,0), 0.50, 0.0, 5, 5, sf::FloatRect(0,0, 1.0f, 1.0f), //camera
    ASSEST_GAME_BACKGROUND_TEXTURE , sf::Vector2f(0.0, 0.0)
  );

  game.run();
  return 0;
}
