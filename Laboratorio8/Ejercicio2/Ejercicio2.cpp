//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Forma.h"
#include "Forma.cpp"
#include "Elipse.h"
#include "Elipse.cpp"
using namespace std;

int main(){
  //Forma forma1("Forma1","Verde"); no se permite construir el objeto "Forma" porque esta declarado como abstracto
  Elipse elipse1("Elipse","Azul",15.4,9.5);
  //Se puede usar un puntero de tipo Forma para acceder a las caracteristicas polimorficas de sus clases hijas
  Forma* ptrElipse1 = &elipse1; //puntero tipo Forma para usar la virtual function
  ptrElipse1->infoForma();
  cout<<"\nEL AREA ES: "<<ptrElipse1->calcularArea(); //si solo queremos el area
  return 0;
}