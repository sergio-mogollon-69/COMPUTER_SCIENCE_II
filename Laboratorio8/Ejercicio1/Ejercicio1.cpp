//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Punto.h"
#include "Punto.cpp"
#include "Forma.h"
#include "Forma.cpp"
#include "Rectangulo.h"
#include "Rectangulo.cpp"
using namespace std;

int main(){
  //tambien se puede usar: string nombreForma1 ="Forma1"; y apuntar a &nombreForma1[0];
  char nombreForma1[]={"Forma_1"}, nombreRect[]={"Rectangulo_1"};
  char* ptrNombreForma1 = nombreForma1, *ptrNombreRect = nombreRect;
  Forma forma1(ptrNombreForma1,"Verde",12,8,3); 
  Rectangulo rect(ptrNombreRect,"Azul",6,7,4,15.0,7.0);
  forma1.imprimir(); //obtiene todos los datos, area y perimetro entre ellos
  forma1.moverForma(1,2,3);
  forma1.imprimir();
  rect.imprimir(); //antes de los cambios
  rect.cambiarTamanio(3); //duplicara el tamaño(area) del rectangulo
  rect.ObtenerYCambiarColor("Violeta"); //obtiene y cambia el color
  rect.imprimir(); //despues de los cambios
  cin.get();
  return 0;
}