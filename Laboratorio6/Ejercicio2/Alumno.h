//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Alumno.h
#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

class Alumno{
  private:
    string CUI;
    string nombre;
    int n1,n2,n3;
  public:
    Alumno(string,string);
    void setCUI(string);
    void setNombre(string);
    void setNotas(int,int,int);
    string getCUI();
    string getNombre();
    float calcularPromedio();
    bool aprueba();
    void imprimirDatos();
};
#endif