//SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Array.h"
#include "Array.cpp"

using namespace std;

int main(){
  Array array1; int dato,op;
  array1.imprimirArray();
  do{
    cout<<"-------ELIJA OPERACION--------"<<endl;
    cout<<"[1] INSERTAR ELEMENTO\t[2] ELIMINAR ELEMENTO\t[3] SALIR"<<endl;
    cin>>op;
    if(op==1){
      cout<<"\nINGRESE DATO: "; cin>>dato;
      array1.insertarElemento(dato);
      array1.imprimirArray();
    }else if(op==2){
      cout<<"\nINGRESE DATO: "; cin>>dato;
      array1.retirarElemento(dato);
      array1.imprimirArray();
    }
  }while(op>0 && op<=2);
  return 0;
}