#include "Lista.h"

Lista::Lista(){
  head = nullptr;
  longitud = 0;
}

Lista::~Lista(){ cout<<"Linked List Destroyed"<<endl; }

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
void Lista::pushFront(int num){
  Nodo* nuevoNodo = new Nodo(num); //creamos nuevo nodo a insertar
  if(empty()){
    head = nuevoNodo;
  }else{
    Nodo* aux = head;
    head = nuevoNodo;
    head->setPtrSig(aux);
  }
  longitud++;
}

int Lista::getHead(){
  return head->getDato();
}

void Lista::printList(){
  Nodo* aux = head;
  for(int i=0; i<longitud; i++){
    cout<<aux->getDato()<<" -> ";
    aux = aux->getPtrSig();
  }
  cout<<endl;
}