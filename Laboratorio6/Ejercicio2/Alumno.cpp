//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Alumno.cpp
#include "Alumno.h"
#include <iostream>
#include <iomanip>
using namespace std;

Alumno::Alumno(string _CUI,string _nombre){
  CUI = _CUI;
  nombre = _nombre;
}
// setters
void Alumno::setCUI(string _CUI){
  CUI = _CUI;
}
void Alumno::setNombre(string _nombre){
  nombre = _nombre;
}
void Alumno::setNotas(int _n1,int _n2, int _n3){
  n1 = _n1;
  n2 = _n2;
  n3 = _n3;
}
// getters
string Alumno::getCUI(){
  return CUI;
}
string Alumno::getNombre(){
  return nombre;
}
// metodos
float Alumno::calcularPromedio(){
  return (n1+n2+n3)/3.0;
}
bool Alumno::aprueba(){
  if(calcularPromedio()>=10.5)
    return true;
  else return false;
}
void Alumno::imprimirDatos(){
  cout<<"\n----------DATOS DEL ALUMNO----------"<<endl;
  cout<<"CUI: "<<getCUI()<<endl;
  cout<<"PRIMER NOMBRE: ";
  for(int i=0; nombre[i]!=' ';i++)
    cout<<nombre[i];
  cout<<endl;
  cout<<"PROMEDIO FINAL: "<<fixed<<setprecision(2)<<calcularPromedio()<<endl;
  if(aprueba())
    cout<<"El alumno aprobo la asignatura de Ciencias de la Computacion II."<<endl;
  else 
    cout<<"El alumno reprobo la asignatura"<<endl;
}