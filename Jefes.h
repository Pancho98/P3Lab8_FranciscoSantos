#ifndef JEFES_H
#define JEFES_H
#include "Monstruo.h"
#include "Item.h"
#include <string>

using namespace std;

class Jefes:public Monstruo{
  public:
    int vida;
    int defensa;
    int ataque;
    Jefes(int, int, int, string, Item*);
    int getVida();
    int getDefensa();
    int getAtaque();
};

#endif
