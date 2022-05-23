//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Elipse.h
#ifndef ELIPSE_H
#define ELIPSE_H

#include <iostream>
using namespace std;

class Elipse{
  protected:
    float radioMayor, radioMenor;
  public:
    Elipse();
    Elipse(float,float);
    ~Elipse();
    float calcularArea();
    float calcularPerimetro();
    virtual void mostrarInfo(); // Polimorfismo con funcion virtual
};

#endif