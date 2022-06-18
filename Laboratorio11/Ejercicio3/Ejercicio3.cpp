//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Pila.h"
#include "Pila.cpp"
using namespace std;

int main(){
  Pila pila3;
  int num,elemento;
  cout<<"CUANTOS ELEMENTOS DESEA INGRESAR? "; cin>>num;
  for(int i=0; i<num; i++){
    cout<<"INGRESE UN NUMERO: "; cin>>elemento;
    pila3.push(elemento);
  }
  cout<<"INGRESE ELEMENTO A BUSCAR: "; cin>>elemento;
  if(pila3.buscar(elemento))
    cout<<"El elemento "<<elemento<<" SE encuentra en la pila"<<endl;
  else
    cout<<"El elemento "<<elemento<<" NO se encuentra en la Pila"<<endl;
  cout<<"La longitud de la Pila es: "<<pila3.size()<<endl;
  pila3.printPila();
  cout<<"La longitud de la Pila es: "<<pila3.size()<<endl;
  cin.get(); cin.get();
  return 0;
}