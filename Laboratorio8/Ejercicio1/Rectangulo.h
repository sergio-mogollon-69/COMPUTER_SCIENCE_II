//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Rectangulo.h
#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Forma.h"

class Rectangulo:public Forma{
  private:
    float Lmayor,Lmenor;
  public:
    Rectangulo(char*,string,int,int,int,float,float);
    ~Rectangulo();
    void imprimir();
    float calcularArea();
    float calcularPerimetro();
    void cambiarTamanio(float);
};

#endif