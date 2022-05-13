//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Array.cpp
#include "Array.h"

Array::Array(){
  for(int i=0; i<5; i++)
    array[i]=0;
}
Array::~Array(){
}
bool Array::hayEspacio(){
  for(int i=0; i<5; i++){
    if(array[i]==0)
      return true;
  }
  return false;
}
void Array::insertarElemento(int dato){
  if(hayEspacio()){
    for(int i=0; i<5; i++){
      if(array[i]==0){
        array[i]=dato;
        return;
      }
    }
  }else{
    cout<<"EL ARREGLO ESTA LLENO!!!"<<endl;
  }
}

void Array::retirarElemento(int dato){
  for(int i=0; i<5; i++){
    if(array[i]==dato){
      array[i]=0;
      return;
    }
  }
  if(array[4] != dato) mensaje();
}
void Array::mensaje(){
  cout<<"NO HAY NADA PARA SACAR DEL ARREGLO!!!"<<endl;
}
void Array::imprimirArray(){
  for(int i=0; i<5; i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}