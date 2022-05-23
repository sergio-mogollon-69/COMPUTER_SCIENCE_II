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
  cout<<"***Se moveran las figuras a la misma posicion y tendran el mismo color***\n";
  for(int i=0; i<3; i++){
    vectorPunteros[i]->cambiarColor("Amarillo"); //Todos el mismo color
    vectorPunteros[i]->cambiarPosicion(-1,-2,-3); //Todos a la misma posicion
  }
  for(int i=0; i<3; i++)
    vectorPunteros[i]->mostrarInfo();
  for(int i=0; i<3; i++) // No hay problemas al mostrar el area de las formas
    cout<<"EL AREA DE LA FORMA "<<i+1<<" ES: "<<vectorPunteros[i]->calcularArea()<<endl;
  cout<<"Se muestra area 0 en todas las figuras porque estan heredando el metodo"<<endl; 
  cout<<"calcularArea() de la clase base Forma que por defecto tiene 0"<<endl;
  cout<<"Para solucionar se debe usar funciones virtuales en la clase base!!!"<<endl;
  cin.get();
  return 0;
}