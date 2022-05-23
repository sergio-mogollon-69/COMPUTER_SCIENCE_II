//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Color.h
#ifndef COLOR_H
#define COLOR_H
#include<iostream>
using namespace std;

class Color{
  protected:
    int R,G,B;
    string color;
  public:
    Color();
    ~Color();
    void setColor(int,int,int);
    string getColor();
};

#endif