//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Persona.h
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre;
    string fechaNaci;
    string fechaHoy;
    string edad;
  public:
    Persona(string,string,string);
    ~Persona();
    void setNombre(string);
    void setFechaNaci(string);
    void setFechaHoy(string);
    void setEdad();
    string getNombre();
    string getFechaNaci();
    string getFechaHoy();
    string getEdad();
};
#endif