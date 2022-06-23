#include <iostream>
#include <string>
using namespace std;

struct Notas{
  int f1;
  int f2;
  int f3;
  int pfinal;
  float final;
};

struct Companero{
  string nombres;
  string grupo;
  Notas notas;
};

void mostrar(Companero* arrayCompaneros,int n);
float notaFinal(Notas);

int main(){
  int n;
  cout<<"INGRESE CANTIDAD DE ESTUDIANTES => "; cin>>n; fflush(stdin);
  Companero* arrayCompaneros = new Companero[n];
  for(int i=0; i<n; i++){
    cout<<"INGRESE NOMBRES: ";
    fflush(stdin); getline(cin,arrayCompaneros[i].nombres); fflush(stdin);
    cout<<"INGRESE GRUPO(A-B-C): "; cin>>arrayCompaneros[i].grupo;
    cout<<"NOTA FASE 1: "; cin>>arrayCompaneros[i].notas.f1;
    cout<<"NOTA FASE 2: "; cin>>arrayCompaneros[i].notas.f2;
    cout<<"NOTA FASE 3: "; cin>>arrayCompaneros[i].notas.f3;
    cout<<"NOTA PROYECTO FINAL: "; cin>>arrayCompaneros[i].notas.pfinal; fflush(stdin);
    arrayCompaneros[i].notas.final = notaFinal(arrayCompaneros[i].notas);
  }
  mostrar(arrayCompaneros,n);
  delete arrayCompaneros;
  return 0;
}

void mostrar(Companero* arrayCompaneros,int n){
  cout<<"\n-----| NOTAS DE ESTUDIANTES | -----"<<endl;
  for(int i=0; i<n; i++){
    cout<<"NOMBRE: "<<arrayCompaneros[i].nombres<<endl;
    cout<<"GRUPO : "<<arrayCompaneros[i].grupo<<endl;
    cout<<"NOTA FASE 1: "<<arrayCompaneros[i].notas.f1<<endl; 
    cout<<"NOTA FASE 2: "<<arrayCompaneros[i].notas.f2<<endl;
    cout<<"NOTA FASE 3: "<<arrayCompaneros[i].notas.f3<<endl; 
    cout<<"NOTA PROYECTO FINAL: "<<arrayCompaneros[i].notas.pfinal<<endl; 
    cout<<"Nota Final: "<<arrayCompaneros[i].notas.final<<endl;
  }
}


float notaFinal(Notas notas){
  float notafinal = (notas.f1*0.15)+(notas.f2*0.2)+(notas.f3*0.25)+(notas.pfinal*0.4);
  return notafinal;
}