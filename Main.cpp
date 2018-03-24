#include <iostream>
#include <vector>
#include <string>
#include "Heroe.h"
#include "Joven.h"
#include "Adulto.h"
#include "Item.h"
#include "Bumeran.h"
#include "Arco.h"
#include "Bomba.h"
#include "Monstruo.h"
#include "Jefes.h"
#include "SemiJefe.h"
#include "Comun.h"
#include <stdlib.h>
#include <time.h>
#include <typeinfo>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<Monstruo*>listaMonstrous;
  Heroe* heroe;
  Monstruo* monstruo;
  string nombreJ;
  int itemInicial;
  string nombre1, color1, nombre2, color2, nombre3, color3;
  cout << "Ingrese nombre del Bumeran" << '\n';
  cin>>nombre1;
  cout << "Ingrese color del Bumeran" << '\n';
  cin>>color1;
  Item* item1 = new Bumeran(nombre1, color1);
  cout << "Ingrese nombre del Arco" << '\n';
  cin>>nombre2;
  cout << "Ingrese color del Arco" << '\n';
  cin>>color2;
  Item* item2= new Arco(nombre2, color2);
  cout << "Ingrese nombre de la Bomba" << '\n';
  cin>>nombre3;
  cout << "Ingrese color de la Bomba" << '\n';
  cin>>color3;
  Item* item3=new Bomba(nombre3, color3);
  int opc;
  cout << "Ingrese el nombre de su Heroe" << '\n';
  cin>>nombreJ;
  cout << "Escoger Item inicial" << '\n';
  cout << "1. Bumeran" << '\n';
  cout << "2. Arco" << '\n';
  cout << "3. Bomba" << '\n';
  cin>>itemInicial;
  if (itemInicial==1) {
    heroe=new Joven(nombreJ, item1);
  }else if(itemInicial==2){
    heroe=new Joven(nombreJ, item2);
  }else if(itemInicial==3){
    heroe=new Joven(nombreJ, item3);
  }

  while (opc!=8) {
    cout << "----------MENU----------" << '\n';
    cout << "1. Crear Monstruo" << '\n';
    cout << "2. Eliminar Monstruo" << '\n';
    cout << "3. Cambiar Item" << '\n';
    cout << "4. Ir a Tienda" << '\n';
    cout << "5. Sacar (Master Sword)" << '\n';
    cout << "6. Guardar Partida" << '\n';
    cout << "7. Batalla" << '\n';
    cout << "8. Salir del Juego" << '\n';
    cin>>opc;
    switch (opc) {
      case 1:
      {
        string nombreM;
        int debilidad;
        int monst;
        int vida, defensa, ataque;
        cout << "Ingrese el nombre del Monstruo" << '\n';
        cin>>nombreM;
        cout << "Escoger debilidad del Monstruo" << '\n';
        cout << "1. Bumeran" << '\n';
        cout << "2. Arco" << '\n';
        cout << "3. Bomba" << '\n';
        cin>>debilidad;
        cout << "1. Crear Jefe" << '\n';
        cout << "2. Crear SemiJefe" << '\n';
        cout << "3. Crear Comun" << '\n';
        cin>>monst;
        if (monst==1) {
          vida= rand()% 40+26;
          defensa=2;
          ataque=9;
          if (debilidad==1) {
              monstruo=new Jefes(vida,defensa,ataque,nombreM,item1);
          }else if(debilidad==2){
            monstruo=new Jefes(vida,defensa,ataque,nombreM,item2);
          }else if(debilidad==3){
            monstruo=new Jefes(vida,defensa,ataque,nombreM,item3);
          }
        }else if(monst==2){
          vida= rand()% 26+12;
          defensa=1;
          ataque=7;
          if (debilidad==1) {
              monstruo=new Jefes(vida,defensa,ataque,nombreM,item1);
          }else if(debilidad==2){
            monstruo=new Jefes(vida,defensa,ataque,nombreM,item2);
          }else if(debilidad==3){
            monstruo=new Jefes(vida,defensa,ataque,nombreM,item3);
          }
        }else if(monst==3){
          vida= rand()% 12+4;
          defensa=0;
          ataque=5;
          if (debilidad==1) {
              monstruo=new Jefes(vida,defensa,ataque,nombreM,item1);
              listaMonstrous.push_back(monstruo);
          }else if(debilidad==2){
            monstruo=new Jefes(vida,defensa,ataque,nombreM,item2);
            listaMonstrous.push_back(monstruo);
          }else if(debilidad==3){
            monstruo=new Jefes(vida,defensa,ataque,nombreM,item3);
            listaMonstrous.push_back(monstruo);
          }
        }
        break;
      }
      case 2:
      {
        if(listaMonstrous.size()>0){
          int decision;
          for (int i = 0; i < listaMonstrous.size(); i++) {
            cout << i<<". Monstruo: "<< listaMonstrous[i]->getNombre()<< '\n';
          }
          cout << "Ingrese Monstruo que desee eliminar" << '\n';
          cin>>decision;
          listaMonstrous.erase(listaMonstrous.begin()+decision);
        }else{
          cout << "No exiten monstruos que eliminar" << '\n';
        }
      }
      break;
      case 3:
      {
        int cambio;
        if (itemInicial==1) {
          cout << "Tienes el Bumeran" << '\n';
          cout << "Deseas Cambiar a: " << '\n';
          cout << "1. Arco" << '\n';
          cout << "2. Bomba" << '\n';
          cin>>cambio;
          if (cambio==1) {
            heroe->setItem(item2);
          }else if(cambio==2){
            heroe->setItem(item3);
          }
        }else if(itemInicial==2){
          cout << "Tienes el Arco" << '\n';
          cout << "Deseas Cambiar a: " << '\n';
          cout << "1. Bumeran" << '\n';
          cout << "2. Bomba" << '\n';
          cin>>cambio;
          if (cambio==1) {
            heroe->setItem(item1);
          }else if(cambio==2){
            heroe->setItem(item3);
          }
        }else if(itemInicial==3){
          cout << "Tienes la bomba" << '\n';
          cout << "Deseas Cambiar a: " << '\n';
          cout << "1. Bumeran" << '\n';
          cout << "2. Arco" << '\n';
          cin>>cambio;
          if (cambio==1) {
            heroe->setItem(item1);
          }else if(cambio==2){
            heroe->setItem(item2);
          }
        }
      }
      break;
      case 4:
      {
        int comprar;
        int salud=heroe->getVida();
        int dinero=heroe->getDinero();
        if (heroe->getDinero()>200) {
          std::cout << "Deseas comprar un corazon" << '\n';
          std::cout << "1. Si" << '\n';
          std::cout << "2. No" << '\n';
          cin>>comprar;
          if (comprar==1) {
            dinero=dinero-200;
            salud=salud+4;
            heroe->setVida(salud);
            heroe->setDinero(dinero);
            cout << "Gracias por su compra" << '\n';
          }else if(comprar==2){
            cout << "Vuelve si deseas comprar" << '\n';
          }
        }else{
          cout << "No tienes dinero suficiente (NO PIERDAS MI TIEMPO :v)" << '\n';
        }
      }
      break;
      case 5:
      {
        if (heroe->getDJefes()>=3) {
          int saludJ=heroe->getVida();
          string nombreJ1=heroe->getNombre();
          Item* itemJ=heroe->getItem();
          int JefesD=heroe->getDJefes();
          int rupias=heroe->getDinero();
          heroe=new Adulto(nombreJ1, itemJ);
          heroe->setVida(saludJ);
          heroe->setDJefes(JefesD);
          heroe->setDinero(rupias);
        }else{
          cout << "No tienes el poder suficiente para sacar la (MASTER SWORD)" << '\n';
        }
      }
      break;
      case 6:
      {
        ofstream heroes("Partida.bin",ios::binary);
        heroe->write(heroes);
        cout<<"Heroe guardado correctamente"<<endl;
        heroes.close();
      }
      break;
      case 7:
      {

      }
      break;
      case 8:
      {
        //delete listaMonstrous;
        delete heroe;
        delete item1;
        delete item2;
        delete item3;
        std::cout << "Gracias por jugar:" << '\n';
      }
      break;
      default:{

      }
    }//fin del switch
  }//fin del while
  return 0;
}
