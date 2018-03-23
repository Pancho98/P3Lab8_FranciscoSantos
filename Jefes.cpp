#include "Jefes.h"

Jefes::Jefes(int vida, int defensa, int ataque, string nombre, Item* item):Monstruo(nombre, item){
  this->vida=vida;
  this->defensa=defensa;
  this->ataque=ataque;
}

int Jefes::getVida(){
  return vida;
}

int Jefes::getDefensa(){
  return defensa;
}

int Jefes::getAtaque(){
  return ataque;
}
