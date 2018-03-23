#include "Heroe.h"
#include <string>

using namespace std;

Heroe::Heroe(string nombre, Item* item){
  vida=12;
  DJefes=0;
  dinero=0;
  this->nombre=nombre;
  this->item=item;
}

string Heroe::getNombre(){
  return nombre;
}

int Heroe::getVida(){
  return vida;
}

void Heroe::setVida(int vida){
  this->vida=vida;
}

Item* Heroe::getItem(){
  return item;
}

void Heroe::setItem(Item* item){
  this->item=item;
}

int Heroe::getDJefes(){
  return DJefes;
}

void Heroe::setDJefes(int DJefes){
  this->DJefes=DJefes;
}

int Heroe::getDinero(){
  return dinero;
}

void Heroe::setDinero(int dinero){
  this->dinero=dinero;
}
