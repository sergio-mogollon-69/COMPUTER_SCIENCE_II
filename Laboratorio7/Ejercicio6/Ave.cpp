//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Ave.cpp
#include "Ave.h"

Ave::Ave(float _peso,float _altura,string _colorPlumas){
  alas = true;  plumas = true;
  patas = 2;
  peso = _peso;   altura = _altura;
  colorPlumas = _colorPlumas;
}
Ave::~Ave(){}

void Ave::infoAve(){
  cout<<"NOMBRE DEL AVE: Sin determinar"<<"\nPESO: "<<peso<<"\nALTURA: "<<altura<<endl;
  cout<<"COLOR DE PLUMAS: "<<colorPlumas<<"\n"<<endl;
}