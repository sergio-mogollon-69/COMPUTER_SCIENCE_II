//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera OperacionFactorial.cpp
#include "OperacionFactorial.h"
#include <iostream>
using namespace std;

OperacionFactorial::OperacionFactorial(){} //constuctor por defecto
OperacionFactorial::~OperacionFactorial(){} //destructor por defecto

int OperacionFactorial::devolverFactorial(){
  int factorial=1;
  if (operador < 0){
    factorial = 0;
  }else if (operador == 0){
    factorial = 1;
  }else{
    for (int i=1; i<=operador; i++){
      factorial *= i;
    }
  }
  return factorial;
}