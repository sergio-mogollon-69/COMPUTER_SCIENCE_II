//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Persona.h
#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona{
  protected:
    string nombre, edad;
  public:
    Persona(string,string);
    Persona();
    ~Persona();
    void setNombre(string);
    void setEdad(string);
    string getNombre();
    string getEdad();
    void infoPersona();
};

#endif 



