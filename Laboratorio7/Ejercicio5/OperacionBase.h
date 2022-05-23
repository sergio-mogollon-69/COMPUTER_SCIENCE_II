//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera OperacionBase.h
#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H

class OperacionBase{
  protected:
    int operador;
  public:
    OperacionBase();
    ~OperacionBase();
    void setOperador(int);
    int getOperador();
};

#endif