//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Ganzo.h
#ifndef GANZO_H
#define GANZO_H
#include "Ave.h"
#include <iostream>
using namespace std;

class Ganzo:public Ave{
  protected:
    bool nadar;
  public:
    Ganzo(float,float,string);
    ~Ganzo();
    void graznar();
    void Nadar();
    void infoAve();
};

#endif