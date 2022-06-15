#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista{
  private:
    Nodo* head; //apunta al nodo head de la lista
    int longitud; //almacena el tamanio de la lista
    void intercambio(int &,int &); //funciones privadas
    void quickSort(int*&,int,int);
  public:
    Lista(); 
    ~Lista();
    int size() const; //retorna el tamanio(longitud) de la lista
    bool empty(); //retorna verdadero si la lista esta vacia y en caso contrario retorna falso 
    int getHead() const; //retorna el valor del primer nodo
    void pushBack(int); //agrega un nuevo elemento al final de la lista
    void pushFront(int); //agrega un nuevo elemento al PRINCIPIO de la lista
    void insert(int,int); //inserta un nuevo elemento en el indice indicado como 1er parametro
    void pop();
    void popFront();
    void popElemento(int);
    void popAll();
    void sort_asc();
    void sort_desc();
    void printList(); //recorre la lista y muestra sus elementos
};



#endif