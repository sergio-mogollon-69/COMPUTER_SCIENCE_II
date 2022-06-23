#include <iostream>
#include <string>
using namespace std;

struct Empleado{
  string nombres;
  string sexo;
  float sueldo;
};

void menorSueldo(Empleado*,int);
void mayorSueldo(Empleado*,int);

int main(){
  int n;
  cout<<"INGRESE CANTIDAD DE EMPLEADOS => "; cin>>n; fflush(stdin);
  Empleado* arrayEmpleados = new Empleado[n];
  for(int i=0; i<n; i++){
    cout<<"INGRESE NOMBRES: ";
    fflush(stdin); getline(cin,arrayEmpleados[i].nombres); fflush(stdin);
    cout<<"INGRESE SU SEXO: "; cin>>arrayEmpleados[i].sexo;
    cout<<"INGRESE SUELDO: "; cin>>arrayEmpleados[i].sueldo;
  }
  cout<<"\n-----| MENOR Y MAYOR SUELDO | -----"<<endl;
  menorSueldo(arrayEmpleados,n);
  mayorSueldo(arrayEmpleados,n);
  delete arrayEmpleados;
  return 0;
}

void menorSueldo(Empleado* array,int n){
  float min = array[0].sueldo;
  string nombre = array[0].nombres;
  for(int i=0; i<n; i++){
    if(array[i].sueldo < min){
      min = array[i].sueldo;
      nombre = array[i].nombres;
    }
  }
  cout<<"MENOR SUELDO => "<<nombre<<" con "<<min<<endl;
}

void mayorSueldo(Empleado* array,int n){
  float max = array[0].sueldo;
  string nombre = array[0].nombres;
  for(int i=0; i<n; i++){
    if(array[i].sueldo > max){
      max = array[i].sueldo;
      nombre = array[i].nombres;
    }
  }
  cout<<"MAYOR SUELDO => "<<nombre<<" con "<<max<<endl;
}