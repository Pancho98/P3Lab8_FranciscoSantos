#include "Monstruo.h"

Monstruo::Monstruo(string nombre, Item* item){
  this->nombre=nombre;
  this->item=item;
}

string Monstruo::getNombre(){
  return nombre;
}

Item* Monstruo::getItem(){
  return item;
}
