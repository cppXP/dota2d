#ifndef DOTA2D_BASE_WINDOW_HEADER
#define DOTA2D_BASE_WINDOW_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "baseLog.h"


namespace dota2d
{
  class BaseWindow
  {
  private:
    BaseLog m_log;

  public:
    BaseWindow();

    BaseWindow(int,int,std::string);

    BaseWindow(int,int,std::string,sf::Vector2i);


    void setWindow_height(int);
    void setWindow_width(int);
    void setWindow_title(std::string);
    void setWindow_position(sf::Vector2i);


    std::string getWindow_title() const;
    int getWindow_width() const;
    int getWindow_height() const;
    sf::Vector2i getWindow_position() const;

    //actions
    void printWindow_stats() const;

  protected:
    int m_window_height;
    int m_window_width;
    std::string m_window_title;
    sf::Vector2i m_window_position;
    sf::RenderWindow m_window;
  };
}

#endif
