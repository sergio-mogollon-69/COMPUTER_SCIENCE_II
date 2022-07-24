#include "Lista.h"

Lista::Lista(){
  head = nullptr;
  longitud = 0;
}

Lista::~Lista(){ cout<<"Linked List Destroyed"<<endl; }

int Lista::size() const{
  return longitud;
}

bool Lista::empty(){
  return (longitud==0);
}

int Lista::getHead() const{
  return head->getDato();
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

void Lista::insert(int indice,int num){
  if((indice<0) || (indice>longitud)){
    cout<<"Posicion no valida. No se inserto el nuevo dato"<<endl; return;
  }
  Nodo* nuevoNodo = new Nodo(num); //creamos nuevo nodo a insertar
  Nodo* aux1 = head;
  Nodo* aux2 = head;
  if(indice==0){
    head = nuevoNodo;
    head->setPtrSig(aux1);
  }else if(indice==longitud){
    while(aux1->getPtrSig() != nullptr){ //recorre hasta el final de la lista
      aux1 = aux1->getPtrSig();
    }
    aux1->setPtrSig(nuevoNodo); //apunta al nuevo nodo
  }else{
    for(int i=0; i<indice-1; i++){
      aux1 = aux1->getPtrSig();
      aux2 = aux2->getPtrSig();
    }
    aux2 = aux2->getPtrSig();
    aux1->setPtrSig(nuevoNodo);
    nuevoNodo->setPtrSig(aux2);
  }
  longitud++;
}

void Lista::pop(){
  Nodo* aux1 = head;
  Nodo* aux2 = head;
  if(empty()){
    cout<<"No existe un elemento para eliminar"<<endl;
    return;
  }else{
    while(aux1->getPtrSig() != nullptr){ //recorre hasta el ultimo elemento de la lista
      aux1 = aux1->getPtrSig();
    }
    for(int i=0; i<longitud-2;i++){ //recorre hasta el penultimo elemento de la lista
      aux2 = aux2->getPtrSig();
    }
    aux2->setPtrSig(nullptr); //apunta a nullptr
  }
  delete aux1;
  longitud--;
}

void Lista::popFront(){
  if(empty()){
    cout<<"No existe un elemento para eliminar"<<endl;
    return;
  }else{
    Nodo* aux1 = head;
    Nodo* aux2 = head;
    aux2 = aux2->getPtrSig();
    aux1->setPtrSig(nullptr); delete aux1;
    head = aux2;
  }
  longitud--;
}

void Lista::popIndexOfElemento(int indice){
  if((indice<0) || (indice>=longitud)){
    cout<<"Posicion no valida. No se inserto el nuevo dato"<<endl; return;
  }
  Nodo* aux1 = head;
  Nodo* aux2 = head;
  Nodo* temp = head;
  if(indice==0){
    aux2 = aux2->getPtrSig();
    aux1->setPtrSig(nullptr); delete aux1;
    head = aux2;
  }else{
    for(int i=0; i<indice-1; i++){
      aux1 = aux1->getPtrSig();
      aux2 = aux2->getPtrSig();
      temp = temp->getPtrSig();
    }
    temp = temp->getPtrSig();
    for(int i=0; i<2; i++)
      aux2 = aux2->getPtrSig(); // 2 veces
    aux1->setPtrSig(aux2);
    temp->setPtrSig(nullptr); delete temp;
  }
  longitud--;
}

void Lista::printList(){
  Nodo* aux = head;
  for(int i=0; i<longitud; i++){
    cout<<aux->getDato()<<" -> ";
    aux = aux->getPtrSig();
  }
  cout<<endl;
}

