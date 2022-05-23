//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Elipse.cpp
#include "Elipse.h"
//usa contructor
Elipse::Elipse(string _nombre,string _color,float R,float r):Forma(_nombre,_color){
  radioMayor = R;
  radioMenor = r;
}
Elipse::~Elipse(){}
void Elipse::setRyr(float R,float r){
  radioMayor = R;
  radioMenor = r;
}
float Elipse::getR(){
  return radioMayor;
}
float Elipse::getr(){
  return radioMenor;
}
float Elipse::calcularArea(){
  float area = pi*(radioMayor*radioMenor);
  return area;
}
void Elipse::infoForma(){
  cout<<"NOMBRE DE LA FORMA: "<<nombre<<"\nCOLOR: "<<color<<endl;
  cout<<"RADIO MAYOR: "<<radioMayor<<"\nRADIO MENOR: "<<radioMenor<<endl;
  cout<<"AREA: "<<calcularArea()<<endl;
}
