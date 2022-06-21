//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Cola.h"
#include "Cola.cpp"
using namespace std;

int comparar_colas(Cola cola1, Cola cola2, int numIteraciones);

int main(){
  Cola edadesHombres, edadesMujeres;
  int num,elemento;
  cout<<"CUANTOS HOMBRES SERAN?  "; cin>>num;
  for(int i=0; i<num; i++){
    cout<<"INGRESE UN NUMERO: "; cin>>elemento;
    edadesHombres.push(elemento);
  }
  cout<<"CUANTAS MUJERES SERAN?  "; cin>>num;
  for(int i=0; i<num; i++){
    cout<<"INGRESE UN NUMERO: "; cin>>elemento;
    edadesMujeres.push(elemento);
  }
  cout<<"Longitud de la cola de hombres es: "<<edadesHombres.size()<<endl;
  cout<<"Longitud de la cola de mujeres es: "<<edadesMujeres.size()<<endl;
  cout<<"CUANTAS COMPARACIONES DESEA REALIZAR ? => "; cin>>num;
  comparar_colas(edadesHombres,edadesMujeres,num);
  cin.get(); cin.get();
  return 0;
}

int comparar_colas(Cola cola1, Cola cola2, int numIteraciones){
  int elemInsertar, mayor;
  for(int i=0;i<numIteraciones; i++){
    cout<<"\n-------- |COMPARACION NUMERO "<<i+1<<"| --------"<<endl;
    cout<<"[ HOMBRES ] => "; cola1.onlyShow();
    cout<<"[ MUJERES ] => "; cola2.onlyShow();
    cout<<" HOMBRES => "<<cola1.front()<<endl;
    cout<<" MUJERES => "<<cola2.front()<<endl;
    if(cola1.front() > cola2.front()){
      cout<<"\nEL MAYOR ES => "<<"HOMBRE CON "<<cola1.front()<<" ANIOS"<<endl;
      elemInsertar = cola2.front();
      cola2.pop(); cola2.push(elemInsertar);
    }else if(cola2.front() > cola1.front()){
      cout<<"\nEL MAYOR ES => "<<"MUJER CON "<<cola2.front()<<" ANIOS"<<endl;
      elemInsertar = cola1.front();
      cola1.pop(); cola1.push(elemInsertar);
    }else{
      cout<<"\nLAS EDADES DE AMBOS SON IGUALES";
      cout<<"HOMBRE CON "<<cola1.front()<<"ANIOS Y MUJER CON "<<cola2.front()<<" ANIOS"<<endl;
      elemInsertar = cola1.front();
      cola1.pop(); cola1.push(elemInsertar);
    }
  } 
}