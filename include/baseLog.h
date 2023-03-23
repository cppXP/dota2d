#ifndef DOTA2D_BASE_LOG_HEADER
#define DOTA2D_BASE_LOG_HEADER
#include <iostream>
#include <string>


#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

namespace dota2d
{
  class BaseLog
  {
    std::string m_pre_message;
    std::string m_post_message;

  public:
    BaseLog(std::string, std::string);
    void fatal(std::string);
    void error(std::string);
    void warning(std::string);
    void info(std::string);
    void debug(std::string);

    void set_pre_message(std::string);
    void set_post_message(std::string);
  };
}



#endif
