#include "Item.h"

Item::Item(string nombre, string color){
  this->nombre=nombre;
  this->color=color;
}

string Item::getNombre(){
  return nombre;
}

string Item::getColor(){
  return color;
}
