//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Color.h"
#include "Color.cpp" //se incluye para que sea compilado junto con el archivo principal
#include "Material.h"
#include "Material.cpp"
#include "Objetos.h"
#include "Objetos.cpp"
using namespace std;

int main(){
  Objetos Obj1; // usando constructor 1
  Obj1.setNombre("Mesa");
  Obj1.setColor(255,0,0);
  Obj1.setMaterial("madera");
  Obj1.describirObjeto();
  Objetos Obj2("Vaso","vidrio",0,255,255); // usando constructor 2
  Obj2.describirObjeto();
  cin.get();
  return 0;
}