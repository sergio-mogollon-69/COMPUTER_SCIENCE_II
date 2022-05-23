//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Rectangulo.h"
#include "Rectangulo.cpp"
#include "Cuadrado.h"
#include "Cuadrado.cpp"
using namespace std;

int main(){
  Rectangulo rect1(15,30);
  Cuadrado cuadr1(18);
  Rectangulo* ptrRect1 = &rect1;
  Rectangulo* ptrCuadr1 = &cuadr1;
  ptrRect1->mostrarInfo();
  ptrCuadr1->mostrarInfo();
  return 0;
}