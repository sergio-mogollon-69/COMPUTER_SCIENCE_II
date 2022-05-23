//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cuadrado.cpp
#include "Cuadrado.h"
Cuadrado::Cuadrado(float _lado){ //definimos constructor de cuadrado
  largo = _lado;
  ancho = _lado;
}
Cuadrado::~Cuadrado(){}

void Cuadrado::mostrarInfo(){
  cout<<"*** CUADRADO ***"<<"\nLARGO: "<<largo<<"\tANCHO: "<<ancho<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"PERIMETRO: "<<calcularPerimetro()<<endl;
}