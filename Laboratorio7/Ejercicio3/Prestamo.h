//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Prestamo.h
#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "ProductoBancario.h"

class Prestamo:protected ProductoBancario{
  public:
    Prestamo();
    Prestamo(int);
    ~Prestamo();
};

#endif