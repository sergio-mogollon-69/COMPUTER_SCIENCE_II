//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include <time.h>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Lista.h"
#include "Lista.cpp"
using namespace std;

int main(){
  Lista listaEnlazada1;
  int num,elemento;
  srand(time(NULL));
  cout<<"CUANTOS ELEMENTOS DESEA INGRESAR? "; cin>>num;
  for(int i=0; i<num; i++){
    elemento = 1+rand() % (101-1); //obtiene num aleatorio entre 1 y 100
    listaEnlazada1.pushBack(elemento);
  }
  listaEnlazada1.printList();
  cout<<"La longitud de la lista enlazada es: "<<listaEnlazada1.size()<<endl;
  cout<<"Como desea ordenar los datos?:\n[1] Ascendentemente\n[2] Descendentemente\n"; 
  cout<<"Opcion => "; cin>>num;
  if(num==1)
    listaEnlazada1.sort_asc();
  else if(num==2)
    listaEnlazada1.sort_desc();
  else
    cout<<"No eligió una opcion valida !!!"<<endl;
  listaEnlazada1.printList();
  cout<<"La longitud de la lista enlazada es: "<<listaEnlazada1.size()<<endl;
  cin.get(); cin.get();
  return 0;
}