#include "baseSprite.h"

dota2d::BaseSprite::BaseSprite()
{
  setTexture(ASSEST_DEFAULT_TEXTURE);
  setPosition(sf::Vector2f(0.0,0.0));
}
dota2d::BaseSprite::BaseSprite
    (std::string _texture,sf::Vector2f _pos)
{
    setTexture(_texture);
    setPosition(_pos);
}

void dota2d::BaseSprite::setTexture(std::string _texture)
{
  m_texture_path = _texture;
  if(!m_texture.loadFromFile(_texture.c_str()))
  {
    std::cout << MESSAGE_TEXT_TEXTURE_FAILED_TO_LOAD getTexture_path() << std::endl;
    if(!m_texture.loadFromFile(ASSEST_DEFAULT_TEXTURE.c_str()))
      std::cout << MESSAGE_TEXT_TEXUTRE_DEFAULT_CANT_LOAD ASSEST_DEFAULT_TEXTURE << std::endl;
    else
    {
      std::cout << MESSAGE_TEXT_TEXTURE_DEFAULT_LOADED ASSEST_DEFAULT_TEXTURE << std::endl;
      m_sprite.setTexture(m_texture_path.c_str());
    }
  }
  else
  {
    std::cout << MESSAGE_TEXT_TEXTURE_SUCCESS_LOADED << getTexture_path() << std::endl;
    m_sprite.setTexture(m_texture_path.c_str());
  }
}

void dota2d::BaseSprite::setPosition(sf::Vector2f _pos)
{
  m_position = _pos;
  m_sprite.setPosition(m_position);
}


sf::Vector2f dota2d::BaseSprite::getPosition()
{
  return m_position;
}
sf::Texture dota2d::BaseSprite::getTexture()
{
  return m_texture;
}
sf::Sprite dota2d::BaseSprite::getSprite()
{
  return m_sprite;
}
std:string dota2d::BaseSrite::getTexture_path()
{
  return m_texture_path;
}
void dota2d::BaseSprite::printSprite_stats()
{
  std::cout << "\n BaseSprite::printSprite_stats():"
       << "\n texture-path = " << getTexture_path()
       << "\n position x= " << getPosition().x << " y=" << getPosition().y
       << "\n position-sprite x= " << m_sprite.getPosition().x << " y=" << m_sprite.getPosition().y
       << " .";
}
