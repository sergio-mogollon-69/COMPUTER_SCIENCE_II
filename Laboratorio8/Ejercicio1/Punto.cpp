//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Punto.cpp
#include "Punto.h"

Punto::Punto(){} //constructor 1: por defecto
Punto::Punto(int X,int Y,int Z){ //constructor 2: con parametros
  coordenadaX = X;
  coordenadaY = Y;
  coordenadaZ = Z;
}
Punto::~Punto(){}

void Punto::setCoordenadas(int X,int Y,int Z){
  coordenadaX = X;
  coordenadaY = Y;
  coordenadaZ = Z;
}

int Punto::getX(){
  return coordenadaX;
}
int Punto::getY(){
  return coordenadaY;
}
int Punto::getZ(){
  return coordenadaZ;
}