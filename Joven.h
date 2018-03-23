#ifndef JOVEN_H
#define JOVEN_H
#include "Heroe.h"
#include "Item.h"
#include <string>

using namespace std;

class Joven:public Heroe{
  public:
    int defensa;
    int ataque;
    int especial;
    Joven(string, Item*);
    int getDefensa();
    int getAtaque();
    int getEspecial();
};

#endif
