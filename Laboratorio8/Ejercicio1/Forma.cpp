//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Forma.cpp
#include "Forma.h"

Forma::Forma(char* _nombreForma,string _color,int X,int Y,int Z){
  nombreForma = _nombreForma;
  color = _color;
  puntoCentro.setCoordenadas(X,Y,Z);
}
Forma::~Forma(){}

string Forma::getColor(){
  return color;
}
Punto Forma::getPunto(){
  return puntoCentro;
}
char* Forma::getNombre(){
  return nombreForma;
}

void Forma::imprimir(){
  cout<<"\nFORMA: ";
  int i = 0;
  while (nombreForma[i] != '\0'){
    cout<<nombreForma[i++];
  }    
  cout<<"\nCOLOR: "<<color<<endl;
  cout<<"PUNTO CENTRAL: \tX: ";
  cout<<puntoCentro.getX()<<"\tY: "<<puntoCentro.getY()<<"\tZ: "<<puntoCentro.getZ()<<endl;
}
void Forma::ObtenerYCambiarColor(string _color){
  cout<<"\nSE CAMBIO EL COLOR DE LA FORMA DE: "<<color;
  color = _color;
  cout<<" A: "<<color<<" !!!"<<endl;
}
void Forma::moverForma(int _X,int _Y, int _Z){
  puntoCentro.setCoordenadas(_X,_Y,_Z);
  cout<<"\nSE MOVIO LA FORMA AL PUNTO: \tX: ";
  cout<<puntoCentro.getX()<<"\tY: "<<puntoCentro.getY()<<"\tZ: "<<puntoCentro.getZ()<<endl;
}