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

void Heroe::write(ofstream& out){
  int size=nombre.size();
  //length del nombre y contenido
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);
  //vida
  out.write(reinterpret_cast<char*>(&vida),sizeof(int));

  //Item
  out.write(reinterpret_cast<char*>(&item),sizeof(int));

  //jefes derrotados
  out.write(reinterpret_cast<char*>(&DJefes),sizeof(int));
  //dinero
  out.write(reinterpret_cast<char*>(&dinero),sizeof(int));

}
