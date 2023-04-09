#include "./include/game.h"


#define HEIGHT 1080
#define WIDTH 1924
#define TITLE "Dota2d window."
#define MINX 600
#define MAXX 6600
#define MINY 275
#define MAXY 7100
#define CAMERA_POSX MINX
#define CAMERA_POSY MINY
#define CAMERA_ZOOM 1.8// 2 is max more than 2 background will be framerusher. (frame problem i called this :)
#define CAMERA_ROTATE 0.0
#define CAMERA_SPEED 50
#define CAMERA_BORDER 5
//ASSEST_GAME_BACKGROUND_TEXTURE_1 placed in assets-cofnig.h
#define BG_POSX 0
#define BG_POSY 0


int main()
{

  try
  {
    dota2d::Game game
    (
      sf::Vector2i(MINX, MINY),sf::Vector2i(MAXX, MAXY), //map min&max
      HEIGHT, WIDTH, TITLE, //window sf::VideoMode::getDesktopMode().width*1.50 sf::VideoMode::getDesktopMode().height*1.50
      sf::Vector2i(CAMERA_POSX, CAMERA_POSY), CAMERA_ZOOM, CAMERA_ROTATE, CAMERA_SPEED, CAMERA_BORDER, sf::FloatRect(0,0, 1.0f, 1.0f), //camera
      ASSEST_TERAIN_TEXTURE_3 , sf::Vector2f(BG_POSX, BG_POSY)
    );
    game.run();
  }
  catch (const std::exception& e) // caught by reference to base
  {
      std::cout << " a standard exception was caught, with message '"
                << e.what() << "'\n";
  }
  catch(...)
  {
    std::cout << "idk whats happend error game borken." << std::endl;
  }
  return 0;
}
