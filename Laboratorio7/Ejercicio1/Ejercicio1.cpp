//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
// Archivo Principal
#include <iostream>
#include <string>
#include "Persona.h" //clases
#include "Alumno.h"
#include "Persona.cpp" //se incluye para que sea compilado junto con el archivo principal
#include "Alumno.cpp"
using namespace std;

int main(){ 
  Alumno alumno1;
  Alumno alumno2("Pedro Castillo","25");
  string temp;
  cout<<"INGRESE EL NOMBRE DEL ESTUDIANTE: "; getline(cin,temp);
  alumno1.setNombre(temp);
  cout<<"INGRESE LA EDAD DEL ESTUDIANTE: "; cin>>temp;
  alumno1.setEdad(temp);
  // 1ra forma: muestra datos mediante getters
  cout<<"\nLOS DATOS INGRESADOS SON: \nNOMBRE: "<<alumno1.getNombre()<<"\nEDAD: "<<alumno1.getEdad()<<endl;
  alumno2.infoPersona();// 2da forma: muestra directamente desde una funcion
  cin.get();cin.get();//pausa la ejecucion hasta presionar enter
  return 0;
}