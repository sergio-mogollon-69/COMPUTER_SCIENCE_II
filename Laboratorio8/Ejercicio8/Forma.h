//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Forma.h
#ifndef FORMA_H
#define FORMA_H
#include "Punto.h"
#include <iostream>
using namespace std;

class Forma{
  protected:
    string color;
    Punto posicion;
    float medida1, medida2;
  public:
    //Forma();
    Forma(int,int,int,string,float,float);
    ~Forma();
    void cambiarColor(string);
    void cambiarPosicion(int,int,int);
    // Polimorfismo con funciones virtuales
    virtual float calcularArea();
    virtual void mostrarInfo();
};

#endif