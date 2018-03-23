#ifndef COMUN_H
#define COMUN_H
#include "Monstruo.h"
#include "Item.h"
#include <string>

class Comun:public Monstruo{
  public:
    int vida;
    int defensa;
    int ataque;
    Comun(int, int, int, string, Item*);
    int getVida();
    int getDefensa();
    int getAtaque();
};

#endif
