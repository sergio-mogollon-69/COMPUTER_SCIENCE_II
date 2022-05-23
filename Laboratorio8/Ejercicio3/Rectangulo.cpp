//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Rectangulo.cpp
#include "Rectangulo.h"

Rectangulo::Rectangulo(){}
Rectangulo::Rectangulo(float _largo,float _ancho){
  largo = _largo;
  ancho = _ancho;
}
Rectangulo::~Rectangulo(){}

float Rectangulo::calcularArea(){
  return largo*ancho;
}
float Rectangulo::calcularPerimetro(){
  return (largo+ancho)*2;
}
void Rectangulo::mostrarInfo(){
  cout<<"*** RECTANGULO ***"<<"\nLARGO: "<<largo<<"\tANCHO: "<<ancho<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"PERIMETRO: "<<calcularPerimetro()<<endl;
}