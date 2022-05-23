//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Forma.h
#ifndef FORMA_H
#define FORMA_H
#include <iostream>
#include "Punto.h"
using namespace std;

class Forma{
  protected:
    string color;
    Punto puntoCentro;
    char* nombreForma;
  public:
    Forma(char*,string,int,int,int);
    ~Forma();
    string getColor();
    Punto getPunto();
    char* getNombre();
    void imprimir();
    void ObtenerYCambiarColor(string);
    void moverForma(int,int,int);
};

#endif