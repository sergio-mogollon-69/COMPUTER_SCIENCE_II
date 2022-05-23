//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Gallina.h
#ifndef GALLINA_H
#define GALLINA_H
#include "Ave.h"

class Gallina:public Ave{
  protected:
    bool volar = false;
  public:
    Gallina(float,float,string);
    ~Gallina();
    void cacarear();
    void infoAve();
};

#endif