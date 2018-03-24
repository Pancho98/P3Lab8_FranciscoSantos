#include "Joven.h"
#include<string>

using namespace std;

Joven::Joven(string nombre, Item* item):Heroe(nombre, item){
  defensa=2;
  ataque=4;
  especial=0;
}

int Joven::getDefensa(){
  return defensa;
}

int Joven::getAtaque(){
  return ataque;
}

int Joven::getEspecial(){
  return especial;
}

void Joven::write(ofstream& out){
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
