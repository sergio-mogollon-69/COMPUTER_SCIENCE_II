//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Pila.h
#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Nodo.h"
using namespace std;

class Pila{
  private:
    Nodo* ultimo; //apunta al nodo head de la pila
    int longitud; //almacena el tamanio de la pila
    string id; //nombre identificador de la pila
  public:
    Pila(string); 
    ~Pila();
    bool empty(); //devuelve true si la pila esta vacio y false en caso contrario
    void push(int); //inserta un elemento(nodo) en la pila
    void pop(); //retira el ultimo elemnto(nodo) de la pila
    int top() const; //devuelve el ultimo elemento insertado en la pila
    int size(); //devuelve el tamanio de la pila
    void printPila(); //muestra el top element y luego lo elimina. Muestra toda la pila
    void onlyShow(); //muestra la pila (saca los elementos y los vuelve a meter)
    void graficarPila(); //grafica el pontenido de la pila (disco de hanoi)
    string getId();
};

#endif