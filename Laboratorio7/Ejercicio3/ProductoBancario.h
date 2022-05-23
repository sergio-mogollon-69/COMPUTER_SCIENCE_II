//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera ProductoBancario.h (clase base)
#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include <iostream>
using namespace std;

class ProductoBancario{
  private:
    string cliente;
  protected:
    double saldo;
  public:
    int numProductos;
    ProductoBancario();
    ProductoBancario(string,double,int);
    ~ProductoBancario();
    void imprimir();
};

#endif