#ifndef DOTA2D_BASE_SPRITE_HEADER
#define DOTA2D_BASE_SPRITE_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include-level-0/assets-config.h"

namespace dota2d
{
  class BaseSprite
  {
    public:
      BaseSprite();
      BaseSprite(std::string, sf::Vector2f);

    protected:
      std::string m_texture_path;
      sf::Texture m_texture;
      sf::Sprite m_sprite;
      sf::Vector2f m_position;

	// m_sprite.setOrigin(m_texture.getSize().x / 2, m_texture.getSize().y / 2);
      void setTexture(std::string);
      void setPosition(sf::Vector2f);

      sf::Vector2f getPosition() const;
      sf::Texture getTexture() const;
      sf::Sprite getSprite() const;
      std::string getTexture_path() const;

      void printSprite_stats() const;
  };
}

#endif
