//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Forma.h
#ifndef FORMA_H
#define FORMA_H
#include <iostream>
using namespace std;

class Forma{
  protected:
    string nombre;
    string color;
  public:
    Forma(string,string);
    ~Forma();
    // Polimorfismo en tiempo de ejecucion
    virtual void infoForma() = 0; //abstraccion
    virtual float calcularArea() = 0; //abstraccion
};

#endif