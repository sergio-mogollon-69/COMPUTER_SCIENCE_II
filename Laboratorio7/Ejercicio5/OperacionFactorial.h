//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera OperacionFactorial.h
#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "OperacionBase.h"

class OperacionFactorial:public OperacionBase{
  public:
    OperacionFactorial();
    ~OperacionFactorial();
    int devolverFactorial();
};

#endif