//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Objetos.h
#ifndef OBJETOS_H
#define OBJETOS_H

#include<iostream>
#include "Color.h"
#include "Material.h"
using namespace std;

class Objetos:public Color,public Material{
  private:
    string nombre;
  public:
    Objetos();
    Objetos(string,string,int,int,int);
    ~Objetos();
    void setNombre(string);
    string getNombre();
    void describirObjeto();
};

#endif