#ifndef DOTA2D_BASE_WINDOW_HEADER
#define DOTA2D_BASE_WINDOW_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>


namespace dota2d
{
  class BaseWindow
  {
  public:
    BaseWindow();

    BaseWindow(int,int,
               std::string,sf::Style);

    BaseWindow(int,int,std::string,
               sf::Style,sf::Vector2i);


    void setWindow_height(int);
    void setWindow_width(int);
    void setWindow_style(sf::Style);
    void setWindow_title(std::string);
    void setWindow_position(sf::Vector2i);


    std::string getWindow_title();
    sf::Style getWindow_style();
    int getWindow_width();
    int getWindow_height();
    sf::RenderWindow getWindow();
    sf::Vector2i getWindow_position();

    //actions
    void printWindow_stats();

  protected:
    int m_window_height;
    int m_window_width;
    std::string m_window_title;
    sf::Style m_window_style;
    sf::Vector2i m_window_position;
    sf::RenderWindow m_window;
  };
}

#endif
