//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
using namespace std;

template<typename T>
T menorNumeroDeTres(T num1, T num2, T num3);
template<typename T>
T mayorNumeroDeTres(T num1, T num2, T num3);

int main(){
  int a,b,c;
  float d,e,f;
  cout<<"INGRESE PRIMER NUMERO(int): "; cin>>a;
  cout<<"INGRESE SEGUNDO NUMERO(int): "; cin>>b;
  cout<<"INGRESE TERCER NUMERO(int): "; cin>>c;
  cout<<"EL MENOR ES: "<<menorNumeroDeTres<int>(a,b,c)<<endl;
  cout<<"EL MAYOR ES: "<<mayorNumeroDeTres<int>(a,b,c)<<endl;
  cout<<"INGRESE PRIMER NUMERO(float): "; cin>>d;
  cout<<"INGRESE SEGUNDO NUMERO(float): "; cin>>e;
  cout<<"INGRESE TERCER NUMERO(float): "; cin>>f;
  cout<<"EL MENOR ES: "<<menorNumeroDeTres<float>(d,e,f)<<endl;
  cout<<"EL MAYOR ES: "<<mayorNumeroDeTres<float>(d,e,f)<<endl;
  cin.get();
  return 0;
}

template<typename T>
T menorNumeroDeTres(T num1, T num2, T num3){
  if(num1<num2 && num1<num3)
    return num1;
  if(num2<num1 && num2<num3)
    return num2;
  if(num3<num1 && num3<num2)
    return num3;
}

template<typename T>
T mayorNumeroDeTres(T num1, T num2, T num3){
  if(num1>num2 && num1>num3)
    return num1;
  if(num2>num1 && num2>num3)
    return num2;
  if(num3>num1 && num3>num2)
    return num3;
}
