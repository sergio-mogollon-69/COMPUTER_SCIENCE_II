//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Array.h"
#include "Array.cpp"
using namespace std;

int main(){
  Array<int> ArrayEntero(9);
  Array<float> ArrayFloat(5);
  
  ArrayEntero.insertArray();
  cout<<"ARRAY DE INT'S => ";
  ArrayEntero.mostrarArray();
  ordenarAscendentemente<int>(ArrayEntero.getArray(),0,8);
  cout<<"ARRAY DESPUES DE ORDENARLO ASCENDENTEMENTE => ";
  ArrayEntero.mostrarArray();
  ordenarDescendentemente<int>(ArrayEntero.getArray(),0,8);
  cout<<"ARRAY DESPUES DE ORDENARLO DESCENDENTEMENTE => ";
  ArrayEntero.mostrarArray();

  ArrayFloat.insertArray();
  cout<<"ARRAY DE FLOAT'S => ";
  ArrayFloat.mostrarArray();
  ordenarAscendentemente<float>(ArrayFloat.getArray(),0,4);
  cout<<"ARRAY DESPUES DE ORDENARLO ASCENDENTEMENTE => ";
  ArrayFloat.mostrarArray();
  ordenarDescendentemente<float>(ArrayFloat.getArray(),0,4);
  cout<<"ARRAY DESPUES DE ORDENARLO DESCENDENTEMENTE => ";
  ArrayFloat.mostrarArray();

  cin.get();
  return 0;
}