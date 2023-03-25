                   int,int,float,



                         int m_mana;
                         int m_max_mana;
                         float m_mana_regen;



                               //mana
                               void setMana(int);
                               void setManaRegen(float);
                               void setMaxMana(int);
                               int getMana() const;
                               float getManaRegen() const;
                               int getMaxMana() const;
                               

setMana(0);
setMaxMana(0);
setManaRegen(0.0);

setMana(_mana);
setMaxMana(_max_mana);
setManaRegen(_mana_regen);



void dota2d::BaseHealth::setMana(int _value)
{
  m_mana = _value;
}
void dota2d::BaseHealth::setManaRegen(float _value)
{
  m_mana_regen = _value;
}
void dota2d::BaseHealth::setMaxMana(int _value)
{
  m_max_mana = _value;
}
int dota2d::BaseHealth::getMana() const
{
  return m_mana;
}
float dota2d::BaseHealth::getManaRegen() const
{
  return m_mana_regen;
}
int dota2d::BaseHealth::getMaxMana() const
{
  return m_max_mana;
}
