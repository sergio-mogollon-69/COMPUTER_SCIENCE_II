//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Punto.h
#ifndef PUNTO_H
#define PUNTO_H

class Punto{
  private:
    int coordenadaX, coordenadaY, coordenadaZ;
  public:
    Punto();
    Punto(int,int,int);
    ~Punto();
    void setCoordenadas(int,int,int);
    int getX();
    int getY();
    int getZ();
};

#endif