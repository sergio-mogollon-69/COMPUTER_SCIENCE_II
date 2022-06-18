//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Pila.h
#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Nodo.h"

class Pila{
  private:
    Nodo* ultimo; //apunta al nodo head de la lista
    int longitud; //almacena el tamanio de la lista
  public:
    Pila(); 
    ~Pila();
    bool empty(); //devuelve true si la pila esta vacio y false en caso contrario
    void push(int); //inserta un elemento(nodo) en la pila
    void pop(); //retira el ultimo elemnto(nodo) de la pila
    int top() const; //devuelve el ultimo elemento insertado en la pila
    int size(); //devuelve el tamanio de la pila
    void printPila(); //muestra el top element y luego lo elimina. Muestra toda la pila
};

#endif