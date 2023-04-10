#include "../include/baseSprite.h"

dota2d::BaseSprite::BaseSprite()
{
  // setTexture(ASSEST_DEFAULT_TEXTURE);
  // setPosition(sf::Vector2f(0.0,0.0));
  m_log.set_pre_message(" spritelog : ");
  m_log.debug("baseSprite object created without texture and position.");
}
dota2d::BaseSprite::BaseSprite
    (std::string _texture,sf::Vector2f _pos)
{
    m_log.debug("baseSprite object created with texture and position.");
    setTexture(_texture);
    setPosition(_pos);
}

void dota2d::BaseSprite::setScale(float x_val,float y_val)
{
  m_sprite.setScale(x_val,y_val);
}




void dota2d::BaseSprite::setTexture(std::string _texture)
{
  m_texture_path = _texture;
  if(!m_texture.loadFromFile(m_texture_path))
  {
    m_log.warning("can not load texture " + getTexture_path());
    if(!m_texture.loadFromFile(ASSEST_DEFAULT_TEXTURE))
      m_log.error("can not load default texture " ASSEST_DEFAULT_TEXTURE);
    else
    {
      m_log.warning("default texture loaded " ASSEST_DEFAULT_TEXTURE);
      m_sprite.setTexture(m_texture);
    }
  }
  else
  {
    m_log.info("texture loaded successfully " + getTexture_path());
    m_sprite.setTexture(m_texture);
  }
}

void dota2d::BaseSprite::setPosition(sf::Vector2f _pos)
{
  m_position = _pos;
  m_sprite.setPosition(m_position);
  m_sprite.setOrigin(m_texture.getSize().x/2, m_texture.getSize().y/2);
}

void dota2d::BaseSprite::setOrigin(sf::Vector2f _pos)
{
  m_sprite.setOrigin(_pos);
}

sf::Vector2f dota2d::BaseSprite::getScale() const
{
  return m_sprite.getScale();
}


sf::Vector2f dota2d::BaseSprite::getOrigin() const
{
  return m_sprite.getOrigin();
}
sf::Vector2f dota2d::BaseSprite::getPosition() const
{
  return m_position;
}
sf::Texture dota2d::BaseSprite::getTexture() const
{
  return m_texture;
}
sf::Sprite dota2d::BaseSprite::getSprite() const
{
  return m_sprite;
}
std::string dota2d::BaseSprite::getTexture_path() const
{
  return m_texture_path;
}
void dota2d::BaseSprite::printSprite_stats() const
{
  std::cout << "\n BaseSprite::printSprite_stats():"
       << "\n texture-path = " << getTexture_path()
       << "\n position x= " << getPosition().x << " y=" << getPosition().y
       << "\n position-sprite x= " << m_sprite.getPosition().x << " y=" << m_sprite.getPosition().y
       << " .";
}
