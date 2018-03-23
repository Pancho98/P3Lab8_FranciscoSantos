#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"

using namespace std;

class Bomba:public Item{
  public:
    int ataque;
    int dano;
    Bomba(string, string);
    int getAtaque();
    int getDano();
};

#endif
