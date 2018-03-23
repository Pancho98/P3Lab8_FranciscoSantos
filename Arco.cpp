#include "Arco.h"

Arco::Arco(string nombre, string color):Item(nombre, color){
  ataque=4;
}

int Arco::getAtaque(){
  return ataque;
}
