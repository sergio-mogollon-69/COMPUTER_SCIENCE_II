//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Hipoteca.cpp
#include "Hipoteca.h"
Hipoteca::Hipoteca(){}
Hipoteca::Hipoteca(int _numProductos){
  numProductos = _numProductos;
}
Hipoteca::~Hipoteca(){}

void Hipoteca::imprimir(){
  cout<<"Hipoteca tiene acceso PROTECTED a numProductos = "<<numProductos<<endl;
  cout<<"numProductos sera accesible dentro de la clase Hipoteca y sus clases hijas"<<endl;
}