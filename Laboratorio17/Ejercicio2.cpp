#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template<class type>
class Nodo{
  private:
    type dato;
    Nodo<type>* sig;
  public:
    Nodo(type);
    Nodo();
    ~Nodo();
    void setDato(type);
    type getDato() const;
    Nodo<type>* getPtrSig();
    void setPtrSig(Nodo<type>*);
};
template<class type> 
Nodo<type>::Nodo(type dato){ //constructor
  this->dato = dato;
  this->sig = nullptr;
}
template<class type> //destructor
Nodo<type>::~Nodo(){}

template<class type>
type Nodo<type>::getDato() const{//retorna el dato
  return dato;
}
template<class type>
void Nodo<type>::setDato(type dato){//establece dato
  this->dato = dato;
}
template<class type>
Nodo<type>* Nodo<type>::getPtrSig(){//retorna la direccion apuntada por PtrSig
  return sig;
}
template<class type>
void Nodo<type>::setPtrSig(Nodo<type>* sig){//establece una nueva direccion/ apunta a otra Nodo
  this->sig = sig;
}


template<class type>
class Lista{
  private:
    Nodo<type>* head; //apunta al nodo head de la lista
    int longitud; //almacena el tamanio de la lista
  public:
    Lista(); 
    ~Lista();
    int size(); //retorna el tamanio(longitud) de la lista
    bool empty(); //retorna verdadero si la lista esta vacia y en caso contrario retorna falso 
    void pushBack(type); //agrega un nuevo elemento al final de la lista
    void printList(); //recorre la lista y muestra sus elementos
};
template<class type>
Lista<type>::Lista(){
  head = nullptr;
  longitud = 0;
}
template<class type>
Lista<type>::~Lista(){
  Nodo<type>* aux1 = head;
  Nodo<type>* aux2 = nullptr;
  while(aux1 != nullptr){
    aux2 = aux1->getPtrSig();
    delete aux1;
    aux1 = aux2;
  }
}
template<class type>
int Lista<type>::size(){
  return longitud;
}
template<class type>
bool Lista<type>::empty(){
  return (longitud==0);
}
template<class type>
void Lista<type>::pushBack(type num){
  Nodo<type>* nuevoNodo = new Nodo<type>(num); //creamos nuevo nodo a insertar
  if(empty()){
    head = nuevoNodo;
  }else{
    Nodo<type>* aux = head; //apuntamos aux al head
    while(aux->getPtrSig() != nullptr){ //recorre hasta el final de la lista
      aux = aux->getPtrSig();
    }
    aux->setPtrSig(nuevoNodo); //apunta al nuevo nodo
  }
  longitud++; 
}
template<class type>
void Lista<type>::printList(){
  Nodo<type>* aux = head;
  for(int i=0; i<longitud; i++){
    cout<<aux->getDato()<<" -> ";
    aux = aux->getPtrSig();
  }
  cout<<endl;
}

template<class type>
class listaArbol{
  private:
    Lista<type> array;
  public:
    listaArbol(){
    }
    ~listaArbol(){
    }
    void insertarArbol(type dato){
      array.pushBack(dato);
    }
    void mostrarArbol(){
      array.printList();
    }
};


int main(){
  Lista<int> listaEnlazada1;
  int num,elemento;
  srand(time(NULL));
  cout<<"CUANTOS ELEMENTOS DESEA INGRESAR? "; cin>>num;
  for(int i=0; i<num; i++){
    elemento = 1 + rand() % (20 - 1);
    listaEnlazada1.pushBack(elemento);
  }
  listaEnlazada1.printList();
  cout<<"La longitud de la lista enlazada es: "<<listaEnlazada1.size()<<endl;

  cin.get();
  return 0;
}