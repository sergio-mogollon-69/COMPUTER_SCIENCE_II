#include <iostream>
#include <string>
using namespace std;

struct Jugador{
  string nombres;
  int edad;
  float talla;
};

float clasificacion(Jugador*,int);

int main(){
  int n;
  cout<<"INGRESE CANTIDAD DE ESTUDIANTES => "; cin>>n; fflush(stdin);
  Jugador* arrayJugadores = new Jugador[n];
  for(int i=0; i<n; i++){
    cout<<"INGRESE NOMBRES: ";
    fflush(stdin); getline(cin,arrayJugadores[i].nombres); fflush(stdin);
    cout<<"INGRESE EDAD: "; cin>>arrayJugadores[i].edad;
    cout<<"INGRESE TALLA: "; cin>>arrayJugadores[i].talla;
  }
  cout<<"\n-----| ESTUDIANTES MENORES DE 20 ANIOS Y CON ALTURA MAYOR A 1.70 | -----"<<endl;
  clasificacion(arrayJugadores,n);
  delete arrayJugadores;
  return 0;
}

float clasificacion(Jugador* array,int n){
  for(int i=0; i<n; i++){
    if(array[i].edad<20 && array[i].talla>1.70){
      cout<<"NOMBRE: "<<array[i].nombres<<endl;
      cout<<"EDAD : "<<array[i].edad<<endl;
      cout<<"TALLA: "<<array[i].talla<<endl; 
    }
  }
}