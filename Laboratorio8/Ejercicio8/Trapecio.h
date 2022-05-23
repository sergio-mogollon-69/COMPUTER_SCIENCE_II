//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Trapecio.h
#ifndef TRAPECIO_H
#define TRAPECIO_H
#include "Forma.h"
#include <iostream>
using namespace std;

class Trapecio:public Forma{
  private:
    float altura;
  public:
    Trapecio(int,int,int,string,float,float,float);
    ~Trapecio();
    float calcularArea();
    void mostrarInfo(); 
};

#endif