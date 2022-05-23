//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Cuadrado.h
#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "Rectangulo.h"
using namespace std;

class Cuadrado:public Rectangulo{
  public:
    Cuadrado(float);
    ~Cuadrado();
    void mostrarInfo();
};

#endif