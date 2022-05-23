//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera CuentaJoven.h
#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H
#include "Cuenta.h"

class CuentaJoven:private Cuenta{
  public:
    CuentaJoven();
    CuentaJoven(double,int);
    ~CuentaJoven();
    void imprimir();
};
#endif