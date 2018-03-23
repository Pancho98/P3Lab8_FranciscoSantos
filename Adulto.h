#ifndef ADULTO_H
#define ADULTO_H
#include "Heroe.h"
#include "Item.h"
#include <string>

using namespace std;

class Adulto: public Heroe{
  public:
    int defensa=4;
    int ataque=8;
    int especial=12;
    Adulto(string, Item*);
    int getDefensa();
    int getAtaque();
    int getEspecial();
};

#endif
