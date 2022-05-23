//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Ganzo.cpp
#include "Ganzo.h"

Ganzo::Ganzo(float _peso,float _altura,string _colorPlumas):Ave(_peso,_altura,_colorPlumas){
  nombre = "Ganzo";
  nadar = true;
}
Ganzo::~Ganzo(){
}

void Ganzo::graznar(){
  cout<<"El "<<nombre<<" esta graznando!!!"<<endl;
}
void Ganzo::Nadar(){
  cout<<"El "<<nombre<<" esta nadando!!!"<<endl;
}

void Ganzo::infoAve(){
  cout<<"NOMBRE DEL AVE: "<<nombre<<"\nPESO: "<<peso<<"\nALTURA: "<<altura<<endl;
  cout<<"COLOR DE PLUMAS: "<<colorPlumas<<"\n"<<endl;
}