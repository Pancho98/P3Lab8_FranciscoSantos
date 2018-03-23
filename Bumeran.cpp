#include "Bumeran.h"

Bumeran::Bumeran(string nombre, string color):Item(nombre, color){
  ataque=5;
}

int Bumeran::getAtaque(){
  return ataque;
}
