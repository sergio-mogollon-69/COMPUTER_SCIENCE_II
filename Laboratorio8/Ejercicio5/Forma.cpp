//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Forma.cpp
#include "Forma.h"

Forma::Forma(int X,int Y,int Z,string _color,float _medida1, float _medida2){
  posicion.setCoordenadas(X,Y,Z);
  color = _color;
  medida1 = _medida1;
  medida2 = _medida2;
}
Forma::~Forma(){}

void Forma::cambiarColor(string _color){
  color = _color;
}
void Forma::cambiarPosicion(int _x,int _y,int _z){
  posicion.setCoordenadas(_x,_y,_z);
}
float Forma::calcularArea(){
  return 0;
}
void Forma::mostrarInfo(){
  cout<<"No es una forma definida";
}