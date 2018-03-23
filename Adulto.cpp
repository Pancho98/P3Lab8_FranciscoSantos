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
