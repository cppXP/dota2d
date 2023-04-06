#include "../include/baseLog.h"


dota2d::BaseLog::BaseLog()
{
   plog::init(plog::debug, LOG_FILE_NAME);
   debug("baseLog called. log-location = " LOG_FILE_NAME);
}

dota2d::BaseLog::BaseLog(std::string _pre, std::string _post)
{
  set_pre_message(_pre);
  set_post_message(_post);
  plog::init(plog::debug, LOG_FILE_NAME);
  debug("baseLog called. pre and post seted. log-location = " LOG_FILE_NAME);
}

void dota2d::BaseLog::set_pre_message(std::string _text)
{
  m_pre_message = _text;
}
void dota2d::BaseLog::set_post_message(std::string _text)
{
  m_post_message = _text;
}


void dota2d::BaseLog::fatal(std::string _text)
{
  // PLOG(plog::fatal) << m_pre_message + _text + m_post_message;
}

void dota2d::BaseLog::error(std::string _text)
{
  // PLOG(plog::error) << m_pre_message + _text + m_post_message;
}

void dota2d::BaseLog::warning(std::string _text)
{
  // PLOG(plog::warning) << m_pre_message + _text + m_post_message;
}

void dota2d::BaseLog::info(std::string _text)
{
  // PLOG(plog::info) << m_pre_message + _text + m_post_message;
}

void dota2d::BaseLog::debug(std::string _text)
{
  // PLOG(plog::debug) << m_pre_message + _text + m_post_message;
}
