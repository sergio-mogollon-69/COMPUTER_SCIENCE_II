//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Circulo.h
#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include "Elipse.h"
using namespace std;

class Circulo:public Elipse{
  public:
    Circulo(float);
    ~Circulo();
    void mostrarInfo();
};

#endif