#include "Adulto.h"
#include<string>

using namespace std;

Adulto::Adulto(string nombre, Item* item):Heroe(nombre, item){
  defensa=4;
  ataque=8;
  especial=12;
}

int Adulto::getDefensa(){
  return defensa;
}

int Adulto::getAtaque(){
  return ataque;
}

int Adulto::getEspecial(){
  return especial;
}

void Adulto::write(ofstream& out){
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
