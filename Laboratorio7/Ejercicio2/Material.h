//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Material.h
#ifndef MATERIAL_H
#define MATERIAL_H

#include<iostream>
using namespace std;

class Material{
  protected:
    string material;
  public:
    Material();
    ~Material();
    void setMaterial(string);
    string getMaterial();
};

#endif