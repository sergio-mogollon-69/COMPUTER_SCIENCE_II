//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Pentagono.h
#ifndef PENTAGONO_H
#define PENTAGONO_H
#include "Forma.h"
#include <iostream>
using namespace std;

class Pentagono:public Forma{
  public:
    Pentagono(int,int,int,string,float,float);
    ~Pentagono();
    float calcularArea();
    void mostrarInfo();
};

#endif