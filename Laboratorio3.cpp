#include<iostream>
using namespace std;
#ifdef _WIN32 //condicional para limpiar la consola dependiendo del sistema operativo
  #include<windows.h>
#endif  
void limpiarConsola(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}
// EJERCICIO 1
// Hacer un programa que sin usar la función pow(), pero por medio de una función, 
// calcule la potencia de un número (ambos números ingresados por teclado).
int potencia(int base, int exponente){
  int potencia=1;
  for(int i=1; i<=exponente;i++){
    potencia*=base;
  }
  return potencia;
}

// EJERCICIO 2
// Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. 
// Para realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto 
// recibe el año leído por teclado, comprueba si es o no bisiesto.
bool bisiesto(int year){
  if(year%4 !=0 or (year%100==0 and year%400!=0 ))
    return false;
  else return true;
}
void esBisiesto(int year){
  if(bisiesto(year))
    cout<<"El anho "<<year<<" es bisiesto"<<endl;
  else
    cout<<"El anho "<<year<<" no es bisiesto"<<endl;
}

// EJERCICIO 3
// Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de 
// una persona y por medio de una función calcule su edad en años, meses y días.
void edad(int DDa, int MMa, int AAa, int DDn, int MMn, int AAn){
  int edadDias , edadMeses;
    if (DDa<DDn){
        DDa += 30; //Se le suma los 30 días (1 mes) a la fecha actual
        MMa -= 1; //Se le resta un mes al mes actual
        edadDias =  DDa - DDn; //Se le resta fecha nacimiento al actual
    }else //En caso de ser mayor la fecha actual que el nacimiento
        edadDias =  DDa - DDn;  //Se le resta fecha nacimiento al actual
    if(MMa<MMn){ 
        MMa += 12; //Se le suma los 12 meses (1 año) al mes actual
        AAa -= 1 ; //Se le resta 1 año al año actual
        edadMeses = MMa - MMn; //Se le resta año nacimiento al actual
    }else //En caso de ser mayor el mes actual que el nacimiento
        edadMeses = MMa - MMn; //Se le resta año nacimiento
    cout<< "\nUsted tiene:\n";
    cout<<AAa-AAn<< " anios"<< endl; //Muestra edad
    cout<<edadMeses<<" meses"<<endl; //Muestra mes
    cout<<edadDias<<" dias" <<endl; //Muestra dia
}

// EJERCICIO 4
// Hacer un programa que desarrolle una función, que genere en pantalla el listado 
// de números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
bool esPrimo(int n){
  bool band;
  if (n != 1 && n != 0){
    for (int i = 2; i <= n; i++){
      if (n % i == 0){
        if (n == i){
          band = true;
        }else{
          band = false;
          return band;
        }
      }
    }
  }
  else
    band = false;
  return band;
}
void NumPrimos(int n){ // en main NumPrimos(50);
  for (int i = 0; i <= n; i++){
    if (esPrimo(i))
      cout << i << " "; // si es primo imprime el numero
  }
}

// EJERCICIO 5
// Desarrollar un programa, utilizando funciones con un tipo de retorno,
// con las siguientes opciones:
// a. Introducir un valor x entero comprendido entre 0 y 100.
// b. Validar que sea un valor par.
// c. Sumar todos los números impares desde el 0 hasta el valor de x.
bool esPar(int x){
  if(x%2==0)
    return true;
  else return false;
}
int sumaImparesHasta(int x){
  int suma=0;
  for(int i=0; i<=x; i++){
    if(esPar(i)==false){ //si es impar
      suma=suma+i;
    }
  }
  return suma;
}
void introducirValor(){
  int x;
  cout<<"Ingrese un valor x entero comprendido entre 0 y 100: "; cin>>x;
  if(esPar(x)) cout<<"El numero ingresado es par"<<endl;
  else cout<<"El numero ingresado es impar"<<endl;
  cout<<"La suma de los numeros impares del 0 al "<<x<<" es: "<<sumaImparesHasta(x)<<endl;
}

void MenuDeOpciones(){
  int op,val,val2,val3,val4,val5,val6;
  string cadena;
  do{
    cout<<"------------LABORATORIO 3------------"<<endl;
    for(int i=1; i<=5; i++){
      cout<<"EJERCICIO "<<i<<endl;
    }
    cout<<"\n\nIngrese una opcion [1-5] ==> ";
    cin>>op;
    switch(op){
      case 1: cout<<"Ingrese la base: "; cin>>val;
              cout<<"Ingrese el exponente: "; cin>>val2;
              cout<<"Potencia: "<<potencia(val,val2)<<endl; break;
      case 2: cout<<"Ingrese el anho: "; cin>>val; 
              esBisiesto(val); break;
      case 3: cout<<"Ingrese fecha actual(DD MM AA): "; cin>>val; cin>>val2; cin>>val3;
              cout<<"Ingrese fecha de nacimiento(DD MM AA): "; cin>>val4; cin>>val5; cin>>val6;
              edad(val,val2,val3,val4,val5,val6); break;
      case 4: cout<<"Ingrese x: "; cin>>val; NumPrimos(val); break;
      case 5: introducirValor(); break;
    }
    cout<<"Presione Enter para continuar...";
    cin.get(); cin.get();//pausa el sistema momentaneamente
    limpiarConsola();
  }while(op<=5 && op>0);
}

int main(){
  MenuDeOpciones();
  return 0;
}