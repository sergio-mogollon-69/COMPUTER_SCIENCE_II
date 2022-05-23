//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Elipse.h
#ifndef ELIPSE_H
#define ELIPSE_H
#include "Forma.h"

class Elipse:public Forma{ //Hereda de Forma
  private:
    float radioMayor, radioMenor;
    const float pi = 3.1416;
  public:
    Elipse(string,string,float,float);
    ~Elipse();
    void setRyr(float,float);
    float getR();
    float getr();
    void infoForma();
    float calcularArea();
};

#endif