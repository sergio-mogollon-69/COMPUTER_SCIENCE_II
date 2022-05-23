//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera ClaseMultimedia.h (clase base)
#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H
#include <iostream>
using namespace std;

class ClaseMultimedia{
  protected:
    string titulo, autor, formato, duracion;
  public:
    ClaseMultimedia(string,string,string,string);
    ~ClaseMultimedia();
    void setTitulo(string);
    void setAutor(string);
    void setFormato(string);
    void setDuracion(string);
    string getTitulo();
    string getAutor();
    string getFormato();
    string getDuracion();
    void infoMultimedia();
};

#endif