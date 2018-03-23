#include "SemiJefe.h"

SemiJefe::SemiJefe(int vida, int defensa, int ataque, string nombre, Item* item):Monstruo(nombre, item){
  this->vida=vida;
  this->defensa=defensa;
  this->ataque=ataque;
}

int SemiJefe::getVida(){
  return vida;
}

int SemiJefe::getDefensa(){
  return defensa;
}

int SemiJefe::getAtaque(){
  return ataque;
}
