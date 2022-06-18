//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Nodo.cpp
#include "Nodo.h"

Nodo::Nodo(int dato){
  this->dato = dato;
  this->sig = nullptr;
}
Nodo::~Nodo(){}

void Nodo::setDato(int dato){
  this->dato = dato;
}
int Nodo::getDato() const{
  return dato;
}
void Nodo::setPtrSig(Nodo* sig){
  this->sig = sig;
}
Nodo* Nodo::getPtrSig() const{
  return sig;
}

