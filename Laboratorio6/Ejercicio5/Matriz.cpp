//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Matriz.cpp
#include <time.h>
#include <iostream>
#include "Matriz.h"
using namespace std;

Matriz::Matriz(){
  srand(time(nullptr));
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
      matriz[i][j] = 1+rand()%(9-1);
  }
}
Matriz::~Matriz(){
}
// metodos
void Matriz::imprimirMatriz(){
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
      cout<<matriz[i][j]<<" ";
    cout<<endl;
  }
}

void Matriz::busquedaEnMatriz(int a){
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(matriz[i][j] == a){
        cout<<"EL ELEMENTO SE ENCONTRO EN LA POSICION: ["<<i<<"]["<<j<<"]"<<endl;
        return;
      }
    }
  }
  if(matriz[2][2] != a) cout<<"NO SE ENCONTRO EL ELEMENTO!!!"<<endl;
}
