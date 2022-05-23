//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Gallina.cpp
#include "Gallina.h"

Gallina::Gallina(float _peso,float _altura,string _colorPlumas):Ave(_peso,_altura,_colorPlumas){
  nombre = "Gallina";
}
Gallina::~Gallina(){}

void Gallina::cacarear(){
  cout<<"La "<<nombre<<" esta cacareando!!!"<<endl;
}

void Gallina::infoAve(){
  cout<<"NOMBRE DEL AVE: "<<nombre<<"\nPESO: "<<peso<<"\nALTURA: "<<altura<<endl;
  cout<<"COLOR DE PLUMAS: "<<colorPlumas<<"\n"<<endl;
}