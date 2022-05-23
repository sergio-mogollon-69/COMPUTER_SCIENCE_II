//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Pato.h
#ifndef PATO_H
#define PATO_H
#include "Ave.h"
#include <iostream>
using namespace std;

class Pato:public Ave{
  protected:
    bool nadar;
  public:
    Pato(float,float,string);
    ~Pato();
    void graznar();
    void Nadar();
    void infoAve();
};

#endif