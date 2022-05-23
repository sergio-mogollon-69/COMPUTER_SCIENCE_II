//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Elipse.cpp
#include "Elipse.h"

Elipse::Elipse(){}
Elipse::Elipse(float _R,float _r){
  radioMayor = _R;
  radioMenor = _r;
}
Elipse::~Elipse(){}

float Elipse::calcularArea(){
  return radioMayor*radioMenor*3.1416;
}
float Elipse::calcularPerimetro(){
  return (radioMayor+radioMenor)*3.1416;
}
void Elipse::mostrarInfo(){
  cout<<"*** ELIPSE ***"<<"\nRADIO MAYOR: "<<radioMayor<<"\tRADIO MENOR: "<<radioMenor<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
  cout<<"PERIMETRO: "<<calcularPerimetro()<<endl;
}