#include "../include/baseWindow.h"


dota2d::BaseWindow::BaseWindow()
{
  setWindow_height(200);
  setWindow_width(200);
  setWindow_title("Default Title");
  setWindow_position(sf::Vector2i(0,0));
  m_log.set_pre_message(" windowLog : ");
  m_log.debug("baseWindow object created without texture and position.");
}


dota2d::BaseWindow::BaseWindow(
           int _wheight,int _wwidth,
           std::string _wtitle)
{
  setWindow_width(_wwidth);
  setWindow_height(_wheight);
  setWindow_title(_wtitle);
  m_log.set_pre_message(" windowLog : ");
  m_log.debug("baseWindow object created without texture and position.");
}

dota2d::BaseWindow::BaseWindow(
           int _wheight,int _wwidth,
           std::string _wtitle,
           sf::Vector2i _wpos)
{
  setWindow_width(_wwidth);
  setWindow_height(_wheight);
  setWindow_title(_wtitle);
  setWindow_position(_wpos);
  m_log.set_pre_message(" windowLog : ");
  m_log.debug("baseWindow object created without texture and position.");
}

void dota2d::BaseWindow::setWindow_width(int _w)
{
  m_window_width = _w;
}

void dota2d::BaseWindow::setWindow_height(int _h)
{
  m_window_height = _h;
}


void dota2d::BaseWindow::setWindow_title(std::string _title)
{
  m_window_title = _title;
}

void dota2d::BaseWindow::setWindow_position(sf::Vector2i _pos)
{
  m_window_position = _pos;
}







std::string dota2d::BaseWindow::getWindow_title() const
{
  return m_window_title;
}


int dota2d::BaseWindow::getWindow_width() const
{
  return m_window_width;
}

int dota2d::BaseWindow::getWindow_height() const
{
  return m_window_height;
}

sf::Vector2i dota2d::BaseWindow::getWindow_position() const
{
  return m_window_position;
}



void dota2d::BaseWindow::printWindow_stats() const
{
  std::cout << "\n basewindow::printWindowStatus():"
  // << "\n m_window_height : " << getWindow_height()
  // << "\n m_window_width : " << getWindow_width()
  // << "\n m_window_style : " << getWindow_style()
  // << "\n m_window_title : " << getWindow_title()
  // << "\n m_window_position : " << getWindow_position()
  << std::endl;
}
