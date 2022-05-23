//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Triangulo.h
#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Forma.h"
#include <iostream>
using namespace std;

class Triangulo:public Forma{
  public:
    Triangulo(int,int,int,string,float,float);
    ~Triangulo();
    float calcularArea();
    void mostrarInfo(); 
};

#endif