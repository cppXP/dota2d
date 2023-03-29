#include "./include/game.h"


#define HEIGHT 1080
#define WIDTH 1924
#define TITLE "Dota2d window."
#define MINX 0
#define MAXX 5000
#define MINY 0
#define MAXY 5000
#define CAMERA_POSX 0
#define CAMERA_POSY 0
#define CAMERA_ZOOM 1.0
#define CAMERA_ROTATE 0.0
#define CAMERA_SPEED 50
#define CAMERA_BORDER 5
//ASSEST_GAME_BACKGROUND_TEXTURE_1 placed in assets-cofnig.h
#define BG_POSX 2250
#define BG_POSY 2250


int main()
{


  dota2d::Game game
  (
    sf::Vector2i(MINX, MINY),sf::Vector2i(MAXX, MAXY), //map min&max
    HEIGHT, WIDTH, TITLE, //window sf::VideoMode::getDesktopMode().width*1.50 sf::VideoMode::getDesktopMode().height*1.50
    sf::Vector2i(CAMERA_POSX, CAMERA_POSY), CAMERA_ZOOM, CAMERA_ROTATE, CAMERA_SPEED, CAMERA_BORDER, sf::FloatRect(0,0, 1.0f, 1.0f), //camera
    ASSEST_GAME_BACKGROUND_TEXTURE_3 , sf::Vector2f(BG_POSX, BG_POSY)
  );

  game.run();
  return 0;
}
