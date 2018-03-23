#ifndef ARCO_H
#define ARCO_H
#include "Item.h"

class Arco: public Item{
  public:
    int ataque;
    Arco(string, string);
    int getAtaque();

};

#endif
