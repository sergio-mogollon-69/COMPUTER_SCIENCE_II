//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Cuenta.h
#ifndef CUENTA_H
#define CUENTA_H
#include "ProductoBancario.h"

class Cuenta:public ProductoBancario{
  public:
    Cuenta();
    Cuenta(double,int);
    ~Cuenta();
};

#endif