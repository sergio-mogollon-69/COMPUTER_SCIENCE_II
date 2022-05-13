//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Rectangulo.h
#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo{
  private:
    int largo;
    int ancho;
  public:
    Rectangulo(int,int);
    ~Rectangulo();
    void setLargo(int);
    void setAncho(int);
    int getLargo();
    int getAncho();
    int Area();
    int Perimetro();
};
#endif 


