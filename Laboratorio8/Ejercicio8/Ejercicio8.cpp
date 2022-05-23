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
#include "Trapecio.h"
#include "Trapecio.cpp"
using namespace std;

float getMax(float array[],float size){//valor maximo de un array
  float max = array[0];
  for(int i=1;i<size;i++){
    if(array[i]>max)
      max = array[i];
  }
  return max;
}

int main(){
  Triangulo triangulo1(4,7,14,"Azul",15.3,8.1);
  Rectangulo rect1(9,2,11,"Verde",12.5,6.2);
  Pentagono pent1(2,3,1,"Rojo",6.2,3.5);
  Trapecio trap1(6,19,15,"Rosado",18.5,11.5,5.0);
  Forma* vectorPunteros[]={&triangulo1,&rect1,&pent1,&trap1};
  float areas[4];
  for(int i=0; i<4; i++){
    vectorPunteros[i]->mostrarInfo();
    areas[i] = vectorPunteros[i]->calcularArea();
  }
  for(int i=0; i<4; i++){
    if((vectorPunteros[i]->calcularArea())==getMax(areas,4)){
      cout<<"******** FIGURA QUE TIENE EL AREA MAXIMA ********"<<endl;
      vectorPunteros[i]->mostrarInfo();
    }
  }
  cin.get();
  return 0;
}