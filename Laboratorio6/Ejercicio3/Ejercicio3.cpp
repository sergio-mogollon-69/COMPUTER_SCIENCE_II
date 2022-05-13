//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include <string>
#include "Persona.h"
#include "Persona.cpp"
using namespace std;

int main(){
  int val1,val2,val3,val4,val5,val6;
  string fecha1,fecha2;
  cout<<"Ingrese fecha actual(DD-MM-AA): "; getline(cin,fecha1);
  cout<<"Ingrese fecha de nacimiento(DD-MM-AA): "; getline(cin,fecha2);
  Persona P("Sergio Daniel Mogollon Caceres",fecha1,fecha2);
  P.setEdad(); // calcula la edad y la pone como atributo
  cout<<"\n------------------------------------------------"<<endl;
  cout<<"NOMBRE DE LA PERSONA: "<<P.getNombre()<<endl;
  cout<<"EDAD DE LA PERSONA: "<<P.getEdad()<<endl;
  return 0;
}
