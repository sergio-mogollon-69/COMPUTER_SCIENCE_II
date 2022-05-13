//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
// archivo principal
#include <iostream>
#include "Alumno.h"
#include "Alumno.cpp" //se incluye para que sea compilado junto con el archivo principal
using namespace std;

int main(){
  Alumno a1("20210689","Sergio Daniel Mogollon Caceres");
  int a,b,c;
  cout<<"NOMBRE COMPLETO: "<<a1.getNombre()<<endl; 
  cout<<"INGRESE NOTA 1: "; cin>>a;
  cout<<"INGRESE NOTA 2: "; cin>>b;
  cout<<"INGRESE NOTA 3: "; cin>>c;
  a1.setNotas(a,b,c);
  a1.imprimirDatos();
  cin.get();//pausa la ejecucion hasta presionar enter
  return 0;
}