std::endl// #include "./include/baseBuilding.h"
#include "game.h"

dota2d::Game game();

//game window, main inits
sf::Vector2f viewSize(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "dota2-game", sf::Style::Fullscreen);
sf::View view;


//objects
dota2d::BaseBuilding tower1(dota2d::TeamSide::Dire, true, "./assets/tower1.png", sf::Vector2f(0.0, 0.0));


void init()
{
  view.reset(sf::FloatRect(0,0, viewSize.x/2, viewSize.y/2));
  view.setViewport(sf::FloatRect(0,0, 1.0f, 1.0f));
}



//camera
void moveCameraLeft()
{
  if(!(view_pos.x <= game.m_map_minimum.x))
    view_pos.x -= game.m_camera_speed;
}

void moveCameraRight()
{
  if(!(view_pos.x >= game.m_map_maximum.x))
    view_pos.x += game.m_camera_speed;
}

void moveCamearTop()
{
  if(!(view_pos.y <= game.m_map_minimum.y))
    view_pos.y -= game.m_camera_speed;
}

void moveCameraBottom()
{
  if(!(view_pos.y >= game.m_map_maximum.y))
    view_pos.y += game.m_camera_speed;
}
void mousePositionToMoveCamera()
{
  sf::Vector2i position = sf::Mouse::getPosition(window);
  if(position.x <= game.m_camera_mouse_range) //go left
    moveCameraLeft();
  if(position.y <= game.m_camera_mouse_range) //go top
    moveCamearTop();
  if(position.y > viewSize.y-game.m_camera_mouse_range) //go bottom
    moveCameraBottom();
  if(position.x > viewSize.x-game.m_camera_mouse_range) //go right
    moveCameraRight();
}
void moveView()
{


 // std::cout << "camera pos = " << view_pos.x << " , y = " << view_pos.y << std::endl;

 // if(!(view_pos.x >= MAX_MAP_X ||  || view_pos.y >= MAX_MAP_Y))
  view.reset(sf::FloatRect(game.m_camera_position.x, game.m_camera_position.y , viewSize.x/2, viewSize.y/2));


  view.zoom(zoomSize);
 // if(view_pos.x < 0)
 //  view_pos.x =0;
 // else if(view_pos.x >= MAX_MAP_X)
 //  view_pos.x = 0;
 // else if(view_pos.y >= MAX_MAP_Y)
 //  view_pos.y = 0;

  if(hero_on_center)
  {
    game.m_camera_position.x = game.m_camera_position.x - viewSize.x/2;
    // view_pos.y = hero_pos.y - window_h/2;
    view.setCenter(sf::Vector2f(hero_pos));
  }
  window.setView(view);
}
void checkCameraLock(bool doLock=false)
{
  if(hero_on_center)
  {
    hero_on_center=false;
  }
  else if(hero_on_center==false && doLock)
   hero_on_center=true;
}

















//inputs

// inputs : mouse
static bool hero_on_center=false;
void mouseMoved(sf::Event eve)
{
  if(hero_on_center)
    hero_on_center=false;
  std::cout << "mouse moved: \n";
  // sf::Vector2i position = sf::Mouse::getPosition(window);
  // std::cout << "mouse pos  =" << position.x  << " y=" << position.y << "\n";
  mousePositionToMoveCamera();
}
void mouseWheelMoved(sf::Event eve)
{
  std::cout << "mouse wheel moved\n" ;
}


void mouseLeftPressed()
{
  std::cout << "left click...\n";
  sf::Vector2i position = sf::Mouse::getPosition();
  std::cout << "mouse pos  =" << position.x  << " y=" << position.y << "\n";
}
void mouseRightPressed() //S
{
  std::cout << "right click lets move hero to this position \n";
  sf::Vector2i position = sf::Mouse::getPosition();
  std::cout << "mouse pos  =" << position.x  << " y=" << position.y << "\n";
  position = sf::Mouse::getPosition(window);
  std::cout << "mouse wubdiw pos  =" << position.x  << " y=" << position.y << "\n";
  // hero_pos.x = position.x;
  // hero_pos.y = position.y;
  // hero.setPosition(hero_pos);
}
void mousePressed(sf::Event eve)
{
  std::cout << "mouse pressed " << std::endl << std::endl;
  if(eve.mouseButton.button == sf::Mouse::Left)
  {
    mouseLeftPressed();
  }
  else if(eve.mouseButton.button == sf::Mouse::Right)
  {
    mouseRightPressed();
  }
}
void mouseReleased(sf::Event eve)
{
  std::cout << "mouse released " << std::endl << std::endl;
  if(eve.mouseButton.button == sf::Mouse::Left)
  {
    std::cout << "mouse left released. \n";
  }
  else if(eve.mouseButton.button == sf::Mouse::Right)
  {
    std::cout << "mouse right released. \n";
  }
}


//inputs : keyboard
static float zoomSize=1.0;
void checkLiveInputs() //S
{
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
      checkCameraLock();
      std::cout << "go down hero \n";
      moveCameraBottom();
      // std::cout << "hero pos y = " << hero_pos.y << std::endl;
    }
   if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
      checkCameraLock();
      std::cout << "go right hero \n";
      // hero.move(HERO_MOVE_SPEED,0);
      moveCameraRight();
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
      {
        checkCameraLock();
        std::cout << "go left hero \n";
        // hero.move(-HERO_MOVE_SPEED,0);
        moveCameraLeft();
      }
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
      {
        checkCameraLock();
        std::cout << "go up hero \n";
        // hero.move(0,-HERO_MOVE_SPEED);
        moveCamearTop();
      }
      // updateHeroPos(); //put hero.getpos into hero_pos.x and ..
      if(sf::Keyboard::isKeyPressed(sf::Keyboard::F2))
       {
         checkCameraLock(true);
         std::cout << "GOTO HERO , MAKE CAMERA CENTER FOR HERO \n";
         // view_pos.x = hero_pos.x/viewSize.x;
         // view_pos.y = hero_pos.y/viewSize.y;
       }

       if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
       {
         std::cout << "zoom out.? "<< std::endl;
         zoomSize += 0.5;
       }
       if(sf::Keyboard::isKeyPressed(sf::Keyboard::X))
       {
         std::cout << "zoom in.? "<< std::endl;
         if(zoomSize>=1.0)
          zoomSize -= 0.5;
       }
}

void keyboardKeyPressed(sf::Event eve)
{
  checkLiveInputs();
}
void keyboardKeyReleased(sf::Event eve)
{
  std::cout << "key released \n";
}
void keyboardTextEntered(sf::Event eve)
{
  std::cout << "keyboard text entered\n";
}


//window events
void closeSafe(sf::Event eve)
{
  std::cout << "safe close." << endl;
  window.close();
}


void inputs()
{
	sf::Event event;
  mousePositionToMoveCamera();
	while(window.pollEvent(event))
	{
    switch(event.type)
    {

      //window
      case sf::Event::Closed:
        closeSafe(event);
        break;

      //mouse
      case sf::Event::MouseButtonPressed:
        mousePressed(event);
        break;
      case sf::Event::MouseButtonReleased:
        mouseReleased(event);
        break;
      case sf::Event::MouseMoved:
        mouseMoved(event);
        break;
      case sf::Event::MouseWheelMoved:
        mouseWheelMoved(event);
        break;

      //keyboard
      case sf::Event::KeyPressed:
        keyboardKeyPressed(event);
        break;
      case sf::Event::KeyReleased:
        keyboardKeyReleased(event);
        break;
    }
  }
}





//render things
void draw()
{
  window.draw(tower1.getSprite());
}
int main()
{
  while(window.isOpen())
  {
    inputs();

    moveView();
    window.clear(sf::Color::Black);
    draw();
    window.display();
  }
  return 0;
}
