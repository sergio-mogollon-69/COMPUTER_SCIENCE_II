//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
using namespace std;

template<typename T1, typename T2>
void operacionesBasicas(T1 num1, T2 num2);

int main(){
  int a; float b;
  cout<<"INGRESE PRIMER NUMERO(int): "; cin>>a;
  cout<<"INGRESE SEGUNDO NUMERO(float): "; cin>>b;
  operacionesBasicas<int,float>(a,b);
  return 0;
}

template<typename T1, typename T2>
void operacionesBasicas(T1 num1, T2 num2){
  int op,op2;
  do{
    cout<<"************OPERACIONES BASICAS************"<<endl;
    cout<<"[1] SUMA\n[2] RESTA\n[3] MULTIPLICACION\n[4] DIVISION"<<endl;
    cout<<"[5] SALIR"<<endl;
    cout<<"Ingrese una opcion => "; cin>>op;
    switch (op){
      case 1: cout<<"EL RESULTADO ES: "<<num1+num2<<endl; break;
      case 2: cout<<"EL RESULTADO ES: "<<num1-num2<<endl; break;
      case 3: cout<<"EL RESULTADO ES: "<<num1*num2<<endl; break;
      case 4: cout<<"EL RESULTADO ES: "<<num1/num2<<endl; break;
    }
    cout<<"\nDESEA REALIZAR OTRA OPERACION ? \n[1] SI\t[2] NO"<<endl; cin>>op2;
    if(op2 == 2) break;  
    cin.get();
  }while( op>0 && op<=4);
}
