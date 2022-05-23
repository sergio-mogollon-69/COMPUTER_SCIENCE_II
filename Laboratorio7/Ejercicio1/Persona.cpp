//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Persona.cpp
#include "Persona.h"

Persona::Persona(string _nombre,string _edad){ //constructor
  nombre = _nombre;
  edad = _edad;
}
Persona::Persona(){} //constructor por defecto
Persona::~Persona(){}//destructor
//setters
void Persona::setNombre(string _nombre){
  nombre = _nombre;
}
void Persona::setEdad(string _edad){
  edad = _edad;
}
//getters
string Persona::getNombre(){
  return nombre;
}
string Persona::getEdad(){
  return edad;
}
void Persona::infoPersona(){
  cout<<"\nLOS DATOS INGRESADOS SON: \nNOMBRE: "<<nombre<<"\nEDAD: "<<edad<<endl;
}
