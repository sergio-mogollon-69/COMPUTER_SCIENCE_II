//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Punto.h"
#include "Punto.cpp"
#include "Forma.h"
#include "Forma.cpp"
#include "Triangulo.h"
#include "Triangulo.cpp"
#include "Rectangulo.h"
#include "Rectangulo.cpp"
#include "Pentagono.h"
#include "Pentagono.cpp"
using namespace std;

int main(){
  Triangulo triangulo1(4,7,14,"Azul",15.3,8.1);
  Rectangulo rect1(9,2,11,"Verde",12.5,6.2);
  Pentagono pent1(2,3,1,"Rojo",6.2,3.5);
  Forma* vectorPunteros[]={&triangulo1,&rect1,&pent1};
  for(int i=0; i<3; i++)
    vectorPunteros[i]->mostrarInfo();
  for(int i=0; i<3; i++){
    vectorPunteros[i]->cambiarColor("Amarillo"); //Todos el mismo color
    vectorPunteros[i]->cambiarPosicion(-1,-2,-3); //Todos a la misma posicion
  }
  for(int i=0; i<3; i++)
    vectorPunteros[i]->mostrarInfo();
  cin.get();
  return 0;
}