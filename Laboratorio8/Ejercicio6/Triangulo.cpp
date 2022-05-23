//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Triangulo.cpp
#include "Triangulo.h"

Triangulo::Triangulo(int _X,int _Y,int _Z,string _color,float _base,float _altura):
  Forma(_X,_Y,_Z,_color,_base,_altura){
  }
Triangulo::~Triangulo(){}

float Triangulo::calcularArea(){
  return (medida1*medida2)/2;
}

void Triangulo::mostrarInfo(){
  cout<<"*** TRIANGULO ***"<<"\nPOSICION: \tX:";
  cout<<posicion.getX()<<"\tY:"<<posicion.getY()<<"\tZ:"<<posicion.getZ()<<endl;
  cout<<"BASE: "<<medida1<<"\nALTURA:"<<medida2<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"COLOR: "<<color<<endl;
}