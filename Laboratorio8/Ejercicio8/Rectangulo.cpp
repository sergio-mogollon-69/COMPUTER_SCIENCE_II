//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Rectangulo.cpp
#include "Rectangulo.h"

Rectangulo::Rectangulo(int _X,int _Y,int _Z,string _color,float _largo,float _ancho):
  Forma(_X,_Y,_Z,_color,_largo,_ancho){
  }
Rectangulo::~Rectangulo(){}

float Rectangulo::calcularArea(){
  return medida1*medida2;
}
void Rectangulo::mostrarInfo(){
  cout<<"*** RECTANGULO ***"<<"\nPOSICION: \tX:";
  cout<<posicion.getX()<<"\tY:"<<posicion.getY()<<"\tZ:"<<posicion.getZ()<<endl;
  cout<<"LARGO: "<<medida1<<"\nANCHO: "<<medida2<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"COLOR: "<<color<<endl;
}