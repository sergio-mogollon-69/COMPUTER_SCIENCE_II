//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera OperacionBase.cpp
#include "OperacionBase.h"

OperacionBase::OperacionBase(){} //constructor por defecto
OperacionBase::~OperacionBase(){} //destructor

void OperacionBase::setOperador(int _num){ //setter
  operador = _num;
}
int OperacionBase::getOperador(){ //getter
  return operador;
}