//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Lista.h
#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"

class Lista{
  private:
    Nodo* head; //apunta al nodo head de la lista
    int longitud; //almacena el tamanio de la lista
  public:
    Lista(); 
    ~Lista();
    int size(); //retorna el tamanio(longitud) de la lista
    bool empty(); //retorna verdadero si la lista esta vacia y en caso contrario retorna falso 
    void pushBack(int); //agrega un nuevo elemento al final de la lista
    void printList(); //recorre la lista y muestra sus elementos
};

#endif