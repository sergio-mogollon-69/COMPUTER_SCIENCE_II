//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Pentagono.cpp
#include "Pentagono.h"

Pentagono::Pentagono(int _X,int _Y,int _Z,string _color,float lado,float apotema):
  Forma(_X,_Y,_Z,_color,lado,apotema){
  }
Pentagono::~Pentagono(){}

float Pentagono::calcularArea(){
  return (medida1*5*medida2)/2;
}
void Pentagono::mostrarInfo(){
  cout<<"*** PENTAGONO ***"<<"\nPOSICION: \tX:";
  cout<<posicion.getX()<<"\tY:"<<posicion.getY()<<"\tZ:"<<posicion.getZ()<<endl;
  cout<<"LONGITUD DE LADO: "<<medida1<<"\nAPOTEMA: "<<medida2<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"COLOR: "<<color<<endl;
}