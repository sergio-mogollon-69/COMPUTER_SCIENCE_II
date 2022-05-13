//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Matriz.h"
#include "Matriz.cpp"
using namespace std;

int main(){
  Matriz M; int num;
  cout<<"INGRESE NUMERO A BUSCAR EN LA MATRIZ: "; cin>>num;
  M.imprimirMatriz();
  M.busquedaEnMatriz(num);
  return 0;
}