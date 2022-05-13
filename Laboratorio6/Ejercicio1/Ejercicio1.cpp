//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
// Archivo Principal
#include <iostream>
#include "Rectangulo.h"
#include "Rectangulo.cpp" //se incluye para que sea compilado junto con el archivo principal
using namespace std;

int main(){
  int a,b;
  cout<<"INGRESE LARGO: "; cin>>a;
  cout<<"INGRESE ANCHO: "; cin>>b;
  Rectangulo r1(a,b); //Se construye el objeto con las medidas ingresadas
  cout<<"MEDIDAS: "<<r1.getLargo()<<" x "<<r1.getAncho()<<endl;
  cout<<"AREA: "<<r1.Area()<<endl;
  cout<<"PERIMETRO: "<<r1.Perimetro()<<endl;

  cin.get();//pausa la ejecucion hasta presionar enter
  return 0;
}