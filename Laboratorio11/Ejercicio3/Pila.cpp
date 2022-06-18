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

bool Pila::buscar(int dato){
  int longitudArray = this->longitud;
  int* arrayTemp = new int[longitudArray];
  int cont=0;
  bool band = false;
  while(!empty()){ //la pila solo permite el acceso al ultimo elemento insertado
    if(this->top() == dato){
      band = true;
    }
    arrayTemp[cont] = top();
    cont++;
    this->pop();
  }
  for(int i=longitudArray-1; i>=0; i--)
    this->push(arrayTemp[i]);
  
  delete arrayTemp;
  return band;
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
