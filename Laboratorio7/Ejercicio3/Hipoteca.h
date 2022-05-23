//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Hipoteca.h
#ifndef HIPOTECA_H
#define HIPOTECA_H
#include "Prestamo.h"

class Hipoteca:public Prestamo{
  public:
    Hipoteca();
    Hipoteca(int);
    ~Hipoteca();
    void imprimir();
};

#endif