//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"
#include "Pila.h"
#include "Pila.cpp"
using namespace std;

string line="--------------------\n";
int movimientos = 0; //contador global: cuenta cuantos movimientos en total se realizaron
void mover(Pila&,Pila&,Pila&);
void hanoiPila(int,Pila&,Pila&,Pila&);

int main(){
  Pila origen("Origen");
  Pila auxiliar("Auxiliar");
  Pila destino("Destino");
  int num,elemento;
  //Llenamos la primeera pila (origen)
  cout<< "----------| TORRES DE HANOI |----------  \n"<<endl;
  cout<<"CON CUANTOS DISCOS DESEA JUGAR? => "; cin>>num;
  for(int i=num; i>0; i--){
    origen.push(i);
  }
  cout<<"\n--------------------| ESTADO INICIAL DE LAS TORRES |--------------------"<<endl;
  cout<<"-----"<<char(186)<<" REPRESENTACION EN PILA: "<<endl;
  cout<<"ORIGEN = "; origen.onlyShow();
  cout<<"AUXILIAR = "; auxiliar.onlyShow();
  cout<<"DESTINO = "; destino.onlyShow();
  cout<<"-----"<<char(186)<<" REPRESENTACION GRAFICA: "<<endl;
  cout<<origen.getId()<<":"+line<<endl; origen.graficarPila();
  cout<<auxiliar.getId()<<":"+line<<endl; auxiliar.graficarPila();
  cout<<destino.getId()<<":"+line<<endl; destino.graficarPila();

  hanoiPila(num,origen,destino,auxiliar);
  
  cout<<"\nMOVIMIENTOS NECESARIOS => "<<movimientos<<endl;
  cout<<"\n--------------------| ESTADO FINAL DE LAS TORRES |--------------------"<<endl;
  cout<<"ORIGEN = "; origen.printPila();
  cout<<"AUXILIAR = "; auxiliar.printPila();
  cout<<"DESTINO = "; destino.printPila();
  
  cin.get(); cin.get();
  return 0;
}

void mover(Pila& pila1,Pila& pila2,Pila& auxTemp){
  cout<<"\n--------------------| MOVIMIENTO "<<movimientos+1<<" |--------------------"<<endl;
  pila2.push(pila1.top());
  cout<<"Se mueve Disco "<<pila1.top()<<"\tDe: "<<pila1.getId()<<" -> "<<pila2.getId()<<endl;
  pila1.pop();
  cout<<"-----"<<char(186)<<" REPRESENTACION EN PILA: "<<endl;
  cout<<pila1.getId()<<" = "; pila1.onlyShow();
  cout<<pila2.getId()<<" = "; pila2.onlyShow();
  cout<<auxTemp.getId()<<" = "; auxTemp.onlyShow();
  cout<<"-----"<<char(186)<<" REPRESENTACION GRAFICA: "<<endl;
  cout<<pila1.getId()<<":"+line<<endl; pila1.graficarPila();
  cout<<pila2.getId()<<":"+line<<endl; pila2.graficarPila();
  cout<<auxTemp.getId()<<":"+line<<endl; auxTemp.graficarPila();
  movimientos++;
}

void hanoiPila(int num,Pila& _origen,Pila& _destino,Pila& _aux){ 
  if(num == 1){
    mover(_origen,_destino,_aux);
  }
  else{
    hanoiPila(num-1,_origen,_aux,_destino);
    mover(_origen,_destino,_aux);
    hanoiPila(num-1,_aux,_destino,_origen);
  }
}
