//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Cola.h"
#include "Cola.cpp"
using namespace std;

int main(){
  Cola cola1;
  int num,elemento;
  cout<<"CUANTOS ELEMENTOS DESEA INGRESAR? "; cin>>num;
  for(int i=0; i<num; i++){
    cout<<"INGRESE UN NUMERO: "; cin>>elemento;
    cola1.push(elemento);
  }
  cout<<"La longitud de la Pila es: "<<cola1.size()<<endl;
  cout<<"INGRESE EL DATO QUE DESEA BUSCAR EN LA COLA: "; cin>>elemento;
  if(cola1.buscar(elemento))
    cout<<"EL ELEMENTO SE ENCUENTRA EN LA COLA"<<endl;
  else{
    cout<<"EL ELEMENTO NO SE ENCUENTRA EN LA COLA"<<endl;
  }
  cola1.printCola();
  cout<<"La longitud de la Pila es: "<<cola1.size()<<endl;
  cin.get(); cin.get();
  return 0;
}