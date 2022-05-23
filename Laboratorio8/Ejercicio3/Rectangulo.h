//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Rectangulo.h
#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
using namespace std;

class Rectangulo{
  protected:
    float largo, ancho;
  public:
    Rectangulo();
    Rectangulo(float,float);
    ~Rectangulo();
    void setLargo(float);
    void setAncho(float);
    float calcularArea();
    float calcularPerimetro();
    virtual void mostrarInfo(); // Polimorfismo con funcion virtual
};

#endif