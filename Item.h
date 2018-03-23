#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

class Item{
  public:
    string nombre;
    string color;
    Item(string, string);
    string getNombre();
    string getColor();
};

#endif
