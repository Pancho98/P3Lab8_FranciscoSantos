#ifndef SEMIJEFE_H
#define SEMIJEFE_H
#include "Monstruo.h"
#include "Item.h"
#include <string>

class SemiJefe:public Monstruo{
  public:
    int vida;
    int defensa;
    int ataque;
    SemiJefe(int, int, int, string, Item*);
    int getVida();
    int getDefensa();
    int getAtaque();

};

#endif
