//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Pila.cpp
#include "Pila.h"
#include <iostream>
#include <iomanip>
using namespace std;

Pila::Pila(string id){
  ultimo = nullptr;
  longitud = 0;
  this->id = id;
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

void Pila::printPila(){ //SACA SUS ELEMENTOS Y LOS MUESTRA
  if(empty()) cout<<"null"; //si esta vacio mostrar null
  while(!empty()){
    cout<<top()<<" -> "; //muestra el ultimo elemento
    pop(); //saca el ultimo elemento
  }
  cout<<endl;
}
void Pila::onlyShow(){ //MUESTRA SUS ELEMENTOS PERO NO LOS PIERDE
  int longTemp = this->longitud, contador = 0;
  int* arrayTemp = new int[longTemp];
  if(empty()){
    cout<<"null"<<endl; //si esta vacio mostrar null
    return;
  }
  while(!empty()){
    arrayTemp[contador++] = this->top();
    cout<<top()<<" -> "; //muestra el ultimo elemento
    pop(); //saca el ultimo elemento
  }
  for(int i=longTemp-1; i>=0; i--){
    this->push(arrayTemp[i]);
  }
  delete arrayTemp;
  cout<<endl;
}
void Pila::graficarPila(){
  int longTemp = this->longitud, contador = 0;
  int* arrayTemp = new int[longTemp];
  if(empty()){
    cout<<setw(longTemp+10)<<"[vacio]"<<endl; //si esta vacio mostrar null
    return;
  }
  while(!empty()){
    arrayTemp[contador++] = this->top();
    pop(); //saca el ultimo elemento
  }
  for(int i=longTemp-1; i>=0; i--){
    this->push(arrayTemp[i]);
  }
  int espacio=longTemp+10;
  for(int i=0; i<longTemp; i++){
    cout<<setw(espacio-arrayTemp[i]);//coloca espacios en la consola
    for(int j=0; j<arrayTemp[i]; j++){
      cout<<"==";
    }
    cout<<endl;
  }
  delete arrayTemp;
}

string Pila::getId(){
  return this->id;
}