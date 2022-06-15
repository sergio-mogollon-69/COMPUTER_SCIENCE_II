#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista{
  private:
    Nodo* head; //apunta al nodo head de la lista
    int longitud; //almacena el tamanio de la lista
  public:
    Lista(); 
    ~Lista();
    int size(); //retorna el tamanio(longitud) de la lista
    bool empty(); //retorna verdadero si la lista esta vacia y en caso contrario retorna falso 
    void pushBack(int); //agrega un nuevo elemento AL FINAL de la lista
    void pushFront(int); //agrega un nuevo elemento al PRINCIPIO de la lista
    int getHead(); //retorna el valor del primer nodo
    void printList(); //recorre la lista y muestra sus elementos
};

#endif