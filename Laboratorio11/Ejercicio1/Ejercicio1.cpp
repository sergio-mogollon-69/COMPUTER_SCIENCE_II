//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Pila.h"
#include "Pila.cpp"
using namespace std;

int main(){
  Pila pila1;
  int num,elemento;
  cout<<"CUANTOS ELEMENTOS DESEA INGRESAR? "; cin>>num;
  for(int i=0; i<num; i++){
    cout<<"INGRESE UN NUMERO: "; cin>>elemento;
    pila1.push(elemento);
  }
  cout<<"La longitud de la Pila es: "<<pila1.size()<<endl;
  pila1.printPila();
  cout<<"La longitud de la Pila es: "<<pila1.size()<<endl;
  cin.get(); cin.get();
  return 0;
}