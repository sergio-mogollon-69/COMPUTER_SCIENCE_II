//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Elipse.h"
#include "Elipse.cpp"
#include "Circulo.h"
#include "Circulo.cpp"
using namespace std;

int main(){
  Elipse elips1(15,30); // Radio Mayor y radio menor
  Circulo circ1(19); // solo Radio
  Elipse* ptrElips1 = &elips1; // punteros de tipó Elipse para usar la funcion virtual
  Elipse* ptrCirc1 = &circ1;
  ptrElips1->mostrarInfo();
  ptrCirc1->mostrarInfo();
  return 0;
}