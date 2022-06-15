//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Lista.cpp
#include "Lista.h"
using namespace std;

Lista::Lista(){
  head = nullptr;
  longitud = 0;
}

Lista::~Lista(){
  Nodo* aux1 = head;
  Nodo* aux2 = nullptr;
  while(aux1 != nullptr){
    aux2 = aux1->getPtrSig();
    delete aux1;
    aux1 = aux2;
  }
  cout<<"Linked List Destroyed"<<endl;
}

int Lista::size(){
  return longitud;
}

bool Lista::empty(){
  return (longitud==0);
}

void Lista::pushBack(int num){
  Nodo* nuevoNodo = new Nodo(num); //creamos nuevo nodo a insertar
  if(empty()){
    head = nuevoNodo;
  }else{
    Nodo* aux = head; //apuntamos aux al head
    while(aux->getPtrSig() != nullptr){ //recorre hasta el final de la lista
      aux = aux->getPtrSig();
    }
    aux->setPtrSig(nuevoNodo); //apunta al nuevo nodo
  }
  longitud++; 
}

void Lista::printList(){
  Nodo* aux = head;
  for(int i=0; i<longitud; i++){
    cout<<aux->getDato()<<" -> ";
    aux = aux->getPtrSig();
  }
  cout<<endl;
}