//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Alumno.h
#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
using namespace std;

class Alumno:public Persona{
  public:
    Alumno(string,string);
    Alumno();
    ~Alumno();
};

#endif