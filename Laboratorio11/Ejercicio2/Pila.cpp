//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Pila.cpp
#include "Pila.h"
#include<iostream>
using namespace std;

Pila::Pila(){
  ultimo = nullptr;
  longitud = 0;
}

Pila::~Pila(){ cout<<"Stack Destroyed"<<endl; }

bool Pila::empty(){
  return (longitud==0);
}

void Pila::push(int num){
  Nodo* nuevoNodo = new Nodo(num); //creamos el nodo
  nuevoNodo->setPtrSig(ultimo); //lo apuntamos al ultimo
  ultimo = nuevoNodo; //ahora el ultimo es el nuevoNodo
  longitud++;
}

void Pila::pop(){
  if(empty()) // si la pila esta vacia sale de la funcion
    return;
  Nodo* aux = ultimo; //puntero auxiliar apunta al ultimo
  ultimo = aux->getPtrSig(); //ahora ultimo sera el penultimo nodo
  delete aux; //borramos aux que apuntaba al ultimo
  longitud--;
}

int Pila::top() const{
  return ultimo->getDato();
}

int Pila::size(){
  return this->longitud;
}

void Pila::printPila(){
  if(empty()) cout<<0<<endl; //si esta vacio mostrar null
  while(!empty()){
    cout<<top()<<" -> "; //muestra el ultimo elemento
    pop(); //saca el ultimo elemento
  }
  cout<<endl;
}
