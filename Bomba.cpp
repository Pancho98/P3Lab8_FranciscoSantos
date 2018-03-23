#include "Bomba.h"

Bomba::Bomba(string nombre, string color):Item(nombre, color){
  ataque=10;
  dano=4;
}

int Bomba::getAtaque(){
  return ataque;
}

int Bomba::getDano(){
  return dano;
}
