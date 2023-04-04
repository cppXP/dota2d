#include "../include/unit.h"


void dota2d::Unit::setName(std::string _value)
{
  m_name = _value;
}

void dota2d::Unit::setSpawn_position(sf::Vector2f _pos)
{
  m_spawn_position = _pos;
}

void dota2d::Unit::setSpawn_position(float _x,float _y)
{
  m_spawn_position.x = _x;
  m_spawn_position.y = _y;
}
void dota2d::Unit::setFace_direction(FaceDirectionType _face)
{
  m_face_direction = _face;
}


std::string dota2d::Unit::getName() const
{
  return m_name;
}

sf::Vector2f dota2d::Unit::getSpawn_position() const
{
  return m_spawn_position;
}


dota2d::FaceDirectionType dota2d::Unit::getFace_direction() const
{
  return m_face_direction;
}
//action
void dota2d::Unit::printUnit_stats() const
{
  std::cout << "\n Unit::printUnit_stats : "
       << "\n name = " << getName()
       << "\n spawn-position = x: " << getSpawn_position().x << " y: " << getSpawn_position().y
       << std::endl;
}

void dota2d::Unit::render(sf::RenderWindow* _window)
{
  _window->draw((*this).getSprite());

  //set position to mana and health bar and hero_name
  sf::Font herofont;
  herofont.loadFromFile(ASSEST_GAME_FONT_DEFAULT);

  sf::Text heroname_text;
  heroname_text.setString((*this).getName());
  heroname_text.setPosition
  (
    sf::Vector2f
    (
      (*this).getPosition().x + UNIT_CONFIG_NAME_X_MARGIN ,
      (*this).getPosition().y + UNIT_CONFIG_NAME_Y_MARGIN
    )
  );
  heroname_text.setFont(herofont);
  heroname_text.setCharacterSize(24);
  heroname_text.setFillColor(sf::Color::Red);


  (*this).m_sprite_hitpoint.set_baseSpriteBar_position
  (
    sf::Vector2f
    (
      (*this).getPosition().x + UNIT_CONFIG_HEALTH_X_MARGIN ,
      (*this).getPosition().y + UNIT_CONFIG_HEALTH_Y_MARGIN
    )
  );

  (*this).m_sprite_mana.set_baseSpriteBar_position
  (
    sf::Vector2f
    (
      (*this).getPosition().x + UNIT_CONFIG_MANA_X_MARGIN ,
      (*this).getPosition().y + UNIT_CONFIG_MANA_Y_MARGIN
    )
  );


  _window->draw((*this).m_sprite_mana.get_baseSpriteBar_max_sprite());
  _window->draw((*this).m_sprite_mana.get_baseSpriteBar_value_sprite());

  _window->draw((*this).m_sprite_hitpoint.get_baseSpriteBar_max_sprite());
  _window->draw((*this).m_sprite_hitpoint.get_baseSpriteBar_value_sprite());

  _window->draw(heroname_text);
}
