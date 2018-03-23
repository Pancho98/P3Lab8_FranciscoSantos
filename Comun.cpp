#include "Comun.h"

Comun::Comun(int vida, int defensa, int ataque, string nombre, Item* item):Monstruo(nombre, item){
  this->vida=vida;
  this->defensa=defensa;
  this->ataque=ataque;
}

int Comun::getVida(){
  return vida;
}

int Comun::getDefensa(){
  return defensa;
}

int Comun::getAtaque(){
  return ataque;
}
