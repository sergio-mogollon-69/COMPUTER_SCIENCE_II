//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Array.h
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array{
  private:
    int array[5];
  public:
    Array();
    ~Array();
    bool hayEspacio();
    void insertarElemento(int);
    void retirarElemento(int);
    void imprimirArray();
    void mensaje();
};
#endif