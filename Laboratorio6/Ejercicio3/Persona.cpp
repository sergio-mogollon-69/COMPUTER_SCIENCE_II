//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Persona.cpp
#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

Persona::Persona(string _nombre, string _fechaHoy, string _fechaNaci){
  nombre = _nombre;
  fechaNaci = _fechaNaci;
  fechaHoy = _fechaHoy;
}
Persona::~Persona(){
}
// setters
void Persona::setNombre(string _nombre){
  nombre = _nombre;
}
void Persona::setFechaNaci(string _fechaNaci){
  fechaNaci = _fechaNaci;
}
void Persona::setFechaHoy(string _fechaHoy){
  fechaHoy = _fechaHoy;
}

void Persona::setEdad(){
  int DDa = stoi(fechaHoy.substr(0,2));
  int MMa = stoi(fechaHoy.substr(3,5));
  int AAa = stoi(fechaHoy.substr(6,10));
  int DDn = stoi(fechaNaci.substr(0,2)); 
  int MMn = stoi(fechaNaci.substr(3,5));
  int AAn = stoi(fechaNaci.substr(6,10));
  int edadDias , edadMeses;
    if (DDa<DDn){
        DDa += 30; //Se le suma los 30 días (1 mes) a la fecha actual
        MMa -= 1; //Se le resta un mes al mes actual
        edadDias =  DDa - DDn; //Se le resta fecha nacimiento al actual
    }else //En caso de ser mayor la fecha actual que el nacimiento
        edadDias =  DDa - DDn;  //Se le resta fecha nacimiento al actual
    if(MMa<MMn){ 
        MMa += 12; //Se le suma los 12 meses (1 año) al mes actual
        AAa -= 1 ; //Se le resta 1 año al año actual
        edadMeses = MMa - MMn; //Se le resta año nacimiento al actual
    }else //En caso de ser mayor el mes actual que el nacimiento
        edadMeses = MMa - MMn; //Se le resta año nacimiento
    edad = to_string(AAa-AAn)+" anios "+to_string(edadMeses)+" meses "+to_string(edadDias)+" dias ";
}
// getters
string Persona::getNombre(){
  return nombre;
}
string Persona::getFechaNaci(){
  return fechaNaci;
}
string Persona::getFechaHoy(){
  return fechaHoy;
}
string Persona::getEdad(){
  return edad;
}
