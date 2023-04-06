#ifndef DOTA2D_UNIT_HEADER
#define DOTA2D_UNIT_HEADER
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "basicStats.h"


#define UNIT_CONFIG_NAME_X_MARGIN -50
#define UNIT_CONFIG_NAME_Y_MARGIN -150

#define UNIT_CONFIG_HEALTH_X_MARGIN -50
#define UNIT_CONFIG_HEALTH_Y_MARGIN -120

#define UNIT_CONFIG_MANA_X_MARGIN -50
#define UNIT_CONFIG_MANA_Y_MARGIN -110


namespace dota2d
{
  enum class FaceDirectionType
  {
    North,
    West,
    East,
    South,
    NorthWest,
    NorthEast,
    SouthWest,
    SouthEast
  };

  class Unit : public BasicStats
  {
    protected:
      sf::Vector2f m_spawn_position;
      std::string m_name;
      FaceDirectionType m_face_direction;


    public:
      Unit() : BasicStats()
      {
        setName("example-name");
        setSpawn_position(0.0 ,0.0);
        setFace_direction(FaceDirectionType::South);
      }

      Unit(sf::Vector2f _spawn_pos, std::string _name, FaceDirectionType _face) : BasicStats()
      {
        setSpawn_position(_spawn_pos);
        setName(_name);
        setFace_direction(_face);
      }

      Unit
      (
        sf::Vector2f _spawn_pos, std::string _unit_name, FaceDirectionType _face, //self

        //BasicStats:
        int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
                   int _teleport_cd,int _move_speed,int _teleport_ct,
                   int _gold_ps,int _gold,
                   int _intel,int _streng,int _agili,
                   int _attackrange,int _attackspeed,int _physicD,int _magicD, //for baseAttack
                   std::string _textureTxt, sf::Vector2f _position, //for baseSprite
                   int _dayv, int _dayob, int _nightv, int _nightob, invisibleType _invistype, int _invisduration,  //for baseVision
                   int _hp,int _maxhp, float _hpregen, int _mana, int _maxmana, float _manaregen, float _magicR, float _physicR //for baseHealth
      )
          : BasicStats
          (
                      _stun_d, _silence_d, _unattack_d, _untarget_d,
                       _teleport_cd,_move_speed,_teleport_ct,
                       _gold_ps,_gold,
                       _intel,_streng,_agili,
                       _attackrange,_attackspeed,_physicD,_magicD, //for baseAttack
                       _textureTxt, _position, //for baseSprite
                       _dayv, _dayob, _nightv, _nightob, _invistype, _invisduration,  //for baseVision
                       _hp,_maxhp,  _hpregen, _mana, _maxmana,  _manaregen,  _magicR,  _physicR //for baseHealth
          )
      {
        // Unit(_spawn_pos,_unit_name, _face);
        setSpawn_position(_spawn_pos);
        setName(_unit_name);
        setFace_direction(_face);
      }

      void setName(std::string);
      void setSpawn_position(sf::Vector2f);
      void setSpawn_position(float,float);
      void setFace_direction(FaceDirectionType);

      std::string getName() const;
      sf::Vector2f getSpawn_position() const;
      FaceDirectionType getFace_direction() const;

      //action
      void printUnit_stats() const;
      void render(sf::RenderWindow*);



  };
}
#endif
