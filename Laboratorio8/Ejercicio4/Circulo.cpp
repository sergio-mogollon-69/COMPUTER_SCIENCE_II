//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Circulo.cpp
#include "Circulo.h"
Circulo::Circulo(float _radio){ //definimos constructor de cuadrado
  radioMayor = _radio;
  radioMenor = _radio;
}
Circulo::~Circulo(){}

void Circulo::mostrarInfo(){
  cout<<"*** CIRCULO ***"<<"\nRADIO: "<<radioMayor<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"PERIMETRO: "<<calcularPerimetro()<<endl;
}