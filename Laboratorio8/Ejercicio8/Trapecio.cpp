//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Trapecio.cpp
#include "Trapecio.h"

Trapecio::Trapecio(int _X,int _Y,int _Z,string _color,float _baseMayor,float _baseMenor,float _altura):
  Forma(_X,_Y,_Z,_color,_baseMayor,_baseMenor){
    altura = _altura;
  }
Trapecio::~Trapecio(){}

float Trapecio::calcularArea(){
  return (medida1+medida2)*altura/2;
}
void Trapecio::mostrarInfo(){
  cout<<"*** TRAPECIO ***"<<"\nPOSICION: \tX:";
  cout<<posicion.getX()<<"\tY:"<<posicion.getY()<<"\tZ:"<<posicion.getZ()<<endl;
  cout<<"BASE MAYOR: "<<medida1<<"\nBASE MENOR: "<<medida2<<endl;
  cout<<"ALTURA: "<<altura<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"COLOR: "<<color<<endl;
}