//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Rectangulo.h
#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Forma.h"
#include <iostream>
using namespace std;

class Rectangulo:public Forma{
  public:
    Rectangulo(int,int,int,string,float,float);
    ~Rectangulo();
    float calcularArea();
    void mostrarInfo(); 
};

#endif