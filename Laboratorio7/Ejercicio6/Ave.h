//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Ave.h
#ifndef AVE_H
#define AVE_H
#include <iostream>
using namespace std;

class Ave{
  protected:
    bool alas, plumas;
    int patas;
    float peso,altura;
    string nombre,colorPlumas;
  public:
    Ave(float,float,string);// peso, altura, colorPlumas
    ~Ave();
    void infoAve();
};

#endif