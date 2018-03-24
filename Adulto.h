#ifndef ADULTO_H
#define ADULTO_H
#include "Heroe.h"
#include "Item.h"
#include <string>
#include <fstream>

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
    void write(ofstream&);
};

#endif
