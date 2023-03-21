#include "../include/baseWindow.h"


dota2d::BaseWindow::BaseWindow()
{
  setWindow_height(200);
  setWindow_width(200);
  setWindow_style(sf::Style::Default);
  setWindow_title("Default Title");
  setWindow_position(sf::Vector2i(0,0));
}


dota2d::BaseWindow::BaseWindow(
           int _wheight,int _wwidth,
           std::string _wtitle,sf::Style _wstyle)
{
  setWindow_width(_wwidth);
  setWindow_height(_wheight);
  setWindow_title(_wtitle);
  setWindow_style(_wstyle);
}

dota2d::BaseWindow::BaseWindow(
           int _wheight,int _wwidth,
           std::string _wtitle,
           sf::Style _wstyle,
           sf::Vector2i _wpos)
{
  setWindow_width(_wwidth);
  setWindow_height(_wheight);
  setWindow_title(_wtitle);
  setWindow_style(_wstyle);
  setWindow_position(_wpos);
}



void dota2d::BaseWindow::setWindow_width(int _w)
{
  m_window_width = _w;
}

void dota2d::BaseWindow::setWindow_height(int _h)
{
  m_window_height = _h;
}

void dota2d::BaseWindow::setWindow_style(sf::Style _style)
{
  m_window_style = _style;
}

void dota2d::BaseWindow::setWindow_title(std::string _title)
{
  m_window_title = _title;
}

void dota2d::BaseWindow::setWindow_position(sf::Vector2i _pos)
{
  m_window_position = _pos;
}







std::string dota2d::BaseWindow::getWindow_title()
{
  return m_window_title;
}

sf::Style dota2d::BaseWindow::getWindow_style()
{
  return m_window_style;
}

int dota2d::BaseWindow::getWindow_width()
{
  return m_window_width;
}

int dota2d::BaseWindow::getWindow_height()
{
  return m_window_height;
}
sf::RenderWindow dota2d::BaseWindow::getWindow()
{
  return m_window;
}

sf::Vector2i dota2d::BaseWindow::getWindow_position()
{
  return m_window_position;
}

void dota2d::BaseWindow::printWindow_stats()
{
  std::cout << "\n basewindow::printWindowStatus():"
  << "\n m_window_height : " << getWindow_height()
  << "\n m_window_width : " << getWindow_width()
  << "\n m_window_style : " << getWindow_style()
  << "\n m_window_title : " << getWindow_title()
  << "\n m_window_position : " << getWindow_position()
  << std::endl;
}
