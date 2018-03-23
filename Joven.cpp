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
