//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cola.cpp
#include "Cola.h"
#include<iostream>
using namespace std;

Cola::Cola(){
  primer = nullptr;
  ultimo = nullptr;
  longitud = 0;
}

Cola::~Cola(){ cout<<"Queue Destroyed"<<endl; }

bool Cola::empty(){
  return (longitud==0);
}

void Cola::push(int num){
  Nodo* nuevoNodo = new Nodo(num); //creamos nuevo nodo a insertar
  if(empty()){
    primer = nuevoNodo;
    ultimo = primer;
  }else{
    Nodo* aux = primer;
    while(aux->getPtrSig() != nullptr){
      aux = aux->getPtrSig();
    }
    aux->setPtrSig(nuevoNodo);
    aux = aux->getPtrSig();
    ultimo = aux; //asignamos ultimo al elemento agregado
  }
  longitud++;
}

void Cola::pop(){
  if(empty()){
    return;
  }else{
    Nodo* aux = primer; //apuntamos aux al primer elemento
    primer = primer->getPtrSig(); //apuntamos primer al 2do nodo de la cola
    delete aux; //eliminamos aux
  }
  longitud--;
}

int Cola::front() const{
  return primer->getDato();
}
int Cola::back() const{
  return ultimo->getDato();
}

int Cola::size(){
  return this->longitud;
}

void Cola::printCola(){
  if(empty()){
    cout<<0<<endl; //si esta vacio mostrar null
    return;
  } 
  while(!empty()){
    cout<<this->front()<<" -> "; //muestra el primer elemento
    this->pop(); //saca el primer elemento de la cola para continuar con el sig
  }
  cout<<endl;
}

void Cola::onlyShow(){
  int longTemp = this->longitud, contador = 0;
  int* arrayTemp = new int[longTemp];
  if(empty()){
    //cout<<"null"<<endl; //si esta vacio mostrar null
    cout<<endl;
    return;
  }
  while(!empty()){
    arrayTemp[contador++] = this->front();
    cout<<this->front()<<" -> "; //muestra el primer elemento
    this->pop();
  }
  for(int i=0; i<longTemp; i++){
    this->push(arrayTemp[i]);
  }
  delete arrayTemp;
  cout<<endl;
}

bool Cola::buscar(int dato){
  int longitudArray = this->longitud;
  int* arrayTemp = new int[longitudArray];
  int cont=0;
  bool band = false;
  while(!empty()){ //la pila solo permite el acceso al ultimo elemento insertado
    if(this->front() == dato){
      band = true;
    }
    arrayTemp[cont] = front();
    cont++;
    this->pop();
  }
  for(int i=0; i<longitudArray; i++)
    this->push(arrayTemp[i]);
  
  delete arrayTemp;
  return band;
}