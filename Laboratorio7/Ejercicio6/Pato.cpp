//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Pato.cpp
#include "Pato.h"

Pato::Pato(float _peso,float _altura,string _colorPlumas):Ave(_peso,_altura,_colorPlumas){
  nombre = "Pato";
  nadar = true;
}
Pato::~Pato(){
}

void Pato::graznar(){
  cout<<"El "<<nombre<<" esta graznando!!!"<<endl;
}
void Pato::Nadar(){
  cout<<"El "<<nombre<<" esta nadando!!!"<<endl;
}

void Pato::infoAve(){
  cout<<"NOMBRE DEL AVE: "<<nombre<<"\nPESO: "<<peso<<"\nALTURA: "<<altura<<endl;
  cout<<"COLOR DE PLUMAS: "<<colorPlumas<<"\n"<<endl;
}