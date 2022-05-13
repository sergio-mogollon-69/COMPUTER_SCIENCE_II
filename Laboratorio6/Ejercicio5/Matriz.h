//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Matriz.h
#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
  private:
    int matriz[3][3];
  public:
    Matriz();
    ~Matriz();
    void imprimirMatriz();
    void busquedaEnMatriz(int);
};
#endif