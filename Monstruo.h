#ifndef MONSTRUO_H
#define MONSTRUO_H
#include <string>
#include "Item.h"

using namespace std;

class Monstruo{
  public:
    string nombre;
    Item* item;
    Monstruo(string, Item*);
    string getNombre();
    Item* getItem();

};

#endif
