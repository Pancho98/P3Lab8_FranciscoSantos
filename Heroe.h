#ifndef HEROE_H
#define HEROE_H
#include "Item.h"
#include <string>

using namespace std;

class Heroe{
  public:
    string nombre;
    int vida;
    Item* item;
    int DJefes;
    int dinero;
    Heroe(string, Item*);
    string getNombre();
    int getVida();
    void setVida(int);
    Item* getItem();
    void setItem(Item*);
    int getDJefes();
    void setDJefes(int);
    int getDinero();
    void setDinero(int);


};

#endif
