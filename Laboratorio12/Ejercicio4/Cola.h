//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Cola.h
#ifndef COLA_H
#define COLA_H
#include <iostream>
#include "Nodo.h"

class Cola{
  private:
    Nodo* primer; //apunta al primer nodo de la cola
    Nodo* ultimo; //apunta al ultimo nodo de la cola
    int longitud; //almacena el tamanio de la cola
  public:
    Cola(); 
    ~Cola();
    bool empty(); //devuelve true si la cola esta vacio y false en caso contrario
    void push(int); //inserta un elemento(nodo) en la cola
    void pop(); //retira el ultimo elemnto(nodo) de la cola
    int front() const; //devuelve el primer elemento de la cola
    int back() const; //devuelve el ultimo elemento de la cola
    int size(); //devuelve el tamanio de la cola
    bool buscar(int); //devuelve true si encuentra el valor en la cola
    void printCola(); //muestra el top element y luego lo elimina. Muestra toda la cola
    void onlyShow(); //saca los elementos para mostrar la cola y los vuelve a ingresar
};

#endif