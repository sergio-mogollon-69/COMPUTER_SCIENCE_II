//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "OperacionBase.h"
#include "OperacionBase.cpp"
#include "OperacionFactorial.h"
#include "OperacionFactorial.cpp"
using namespace std;

int main(){
  OperacionFactorial operacion;
  int num;
  cout<<"INGRESE UN NUMERO PARA CALCULAR FACTORIAL: "; cin>>num;
  operacion.setOperador(num);
  cout<<"RESULTADO: "<<operacion.devolverFactorial()<<endl;
  return 0;
}