#ifndef BUMERAN_H
#define BUMERAN_H
#include "Item.h"

using namespace std;

class Bumeran:public Item{
  public:
    int ataque;
    Bumeran(string, string);
    int getAtaque();

};

#endif
