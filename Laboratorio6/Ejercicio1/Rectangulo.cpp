//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
// Archivo Rectangulo.cpp
#include "Rectangulo.h"
using namespace std;

Rectangulo::Rectangulo(int _largo,int _ancho){ //constructor
  largo = _largo;
  ancho = _ancho;
}
Rectangulo::~Rectangulo(){ //destructor
}
//setters
void Rectangulo::setLargo(int _largo){
  largo = _largo;
}
void Rectangulo::setAncho(int _ancho){
  ancho = _ancho;
}

//getters
int Rectangulo::getLargo(){
  return largo;
}
int Rectangulo::getAncho(){
  return ancho;
}
//metodos
int Rectangulo::Area(){
  return (largo*ancho);
}
int Rectangulo::Perimetro(){
  return 2*(largo+ancho);
}
