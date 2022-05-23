//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera ClaseDisco.h
#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include "ClaseMultimedia.h"

class ClaseDisco:public ClaseMultimedia{
  private:
    int numeroCanciones;
    string genero;
  public:
    ClaseDisco(string,string,string,string,int,string);
    ~ClaseDisco();
    void setNumCanciones(int);
    void setGenero(string);
    int getNumCanciones();
    string getGenero();
    void infoDisco();
};

#endif