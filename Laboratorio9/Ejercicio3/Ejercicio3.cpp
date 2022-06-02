//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
T2 generarCorreo(T1 caracter, T2 cadena);

int main(){
  char c; 
  string cadena;
  for(int i=1; i<=5; i++){//5 veces
    cout<<"--| GENERANDO CORREO "<<i<<" |--"<<endl;
    cout<<"INGRESE UN CARACTER: "; cin>>c;
    cout<<"INGRESE UN APELLIDO: "; cin>>cadena;
    cout<<"SU CORREO ES => "<<generarCorreo<char,string>(c,cadena)<<endl;
  }
  cin.get();
  return 0;
}

template<typename T1, typename T2>
T2 generarCorreo(T1 caracter, T2 cadena){
  T2 correo;
  correo.push_back(caracter); //agrega char al string
  correo += cadena+"@unsa.edu.pe";
  return correo;
}
