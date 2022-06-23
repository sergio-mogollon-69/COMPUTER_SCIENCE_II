#include <iostream>
#include <string>
using namespace std;

struct fecha{
  string dia;
  string mes;
};

struct Companero{
  string nombres;
  fecha fechaNacimiento;
};

int main(){
  int n;
  cout<<"INGRESE CANTIDAD DE ESTUDIANTES => "; cin>>n; fflush(stdin);
  Companero* arrayCompaneros = new Companero[n];
  for(int i=0; i<n; i++){
    cout<<"INGRESE NOMBRES: ";
    getline(cin,arrayCompaneros[i].nombres);
    cout<<"INGRESE SU FECHA DE CUMPLEANIOS: "<<endl;
    cout<<"DIA: "; getline(cin,arrayCompaneros[i].fechaNacimiento.dia);
    cout<<"MES: "; getline(cin,arrayCompaneros[i].fechaNacimiento.mes);
  }
  cout<<"\n-----| ESTUDIANTES QUE CUMPLEN ANIOS EN ESTE MES| -----"<<endl;
  for(int i=0; i<n; i++){
    if(arrayCompaneros[i].fechaNacimiento.mes == "06"){
      cout<<arrayCompaneros[i].nombres<<endl; 
    }
  }
  delete arrayCompaneros;
  return 0;
}