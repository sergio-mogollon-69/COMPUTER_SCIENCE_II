//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera CuentaJoven.cpp
#include "CuentaJoven.h"
CuentaJoven::CuentaJoven(){}
CuentaJoven::CuentaJoven(double _saldo,int _numProductos):Cuenta(_saldo,_numProductos){
}
CuentaJoven::~CuentaJoven(){}

void CuentaJoven::imprimir(){
  cout<<"CuentaJoven tiene acceso PRIVATE a saldo = "<<saldo<<endl;
  cout<<"saldo solo sera accesible dentro de la clase CuentaJoven"<<endl;
  cout<<"CuentaJoven tiene acceso PRIVATE a numProductos = "<<numProductos<<endl;
  cout<<"numProductos solo sera accesible dentro de la clase CuentaJoven"<<endl;
}