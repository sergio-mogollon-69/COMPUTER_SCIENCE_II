//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Lista.h"
#include "Lista.cpp"
using namespace std;

int main(){
  Lista listaEnlazada1;
  int num,elemento;
  cout<<"CUANTOS ELEMENTOS DESEA INGRESAR? "; cin>>num;
  for(int i=0; i<num; i++){
    cout<<"INGRESE UN NUMERO: "; cin>>elemento;
    listaEnlazada1.pushBack(elemento);
  }
  listaEnlazada1.printList();
  cout<<"La longitud de la lista enlazada es: "<<listaEnlazada1.size()<<endl;
  cin.get();
  return 0;
}