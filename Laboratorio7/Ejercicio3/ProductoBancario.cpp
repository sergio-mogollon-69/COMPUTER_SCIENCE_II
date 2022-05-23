//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera ProductoBancario.cpp
#include "ProductoBancario.h"

ProductoBancario::ProductoBancario(){}
ProductoBancario::ProductoBancario(string _cliente,double _saldo,int _numProductos){
  cliente = _cliente;
  saldo = _saldo;
  numProductos = _numProductos;
}
ProductoBancario::~ProductoBancario(){}

void ProductoBancario::imprimir(){
  cout<<"INFO DE LOS ATRIBUTOS DE ProductoBancario";
}