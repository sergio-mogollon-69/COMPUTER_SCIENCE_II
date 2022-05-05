//AUTOR: SERGIO DANIEL MOGOLLON CACERES
#include <iostream>
#include <string.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#ifdef _WIN32 
  #include<windows.h>
#endif  
void limpiarConsola(){
  #ifdef _WIN32//condicional para limpiar la consola dependiendo del sistema operativo
    system("cls");
  #else
    system("clear");
  #endif
}

// EJERCICIO 1
// Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
// el producto de ambos.
void productoDeAmbos(){
  int a, b; //Se declaran variables
  cout<<"Ingrese un numero: "; cin>>a;
  cout<<"Ingrese otro numero: "; cin>>b;
  cout<<"El producto es: "<<a*b<<endl; //producto
}
// EJERCICIO 2
// Escriba un código que solicite el primer nombre de una persona, el apellido paterno
// y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
// primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
// materno. (se agrega el dominio de la universidad al final).
void crearCorreoUnsa(){
  string name, apellP, apellM, correo; //Se declaran variables
  cout<<"Ingrese su primer nombre: "; cin>>name;
  cout<<"Ingrese su apellido paterno: "; cin>>apellP;
  cout<<"Ingrese su apellido materno: "; cin>>apellM;
  correo = name[0]+apellP+apellM[0]+"@unsa.edu.pe"; //Se concatenan strings
  cout<<"Su correo es: "<<correo<<endl;
}
// EJERCICIO 3
// Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
// cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
// formato de salida debe de estar en AM o PM según corresponda).
void soliciteHora(){
  string hora;
  int minAdd;
  cout<<"Ingrese una hora del dia(HH:MM): "; cin>>hora;
  cout<<"Tiempo en minutos a agregar: "; cin>>minAdd;
  int HH=stoi(hora.substr(0,2)); //stoi convierte string a int
  int MM= stoi(hora.substr(3,5));
  int contador=0;
  MM+=minAdd;
  while(MM>59){ //contar las horas si esque los min pasan los 60
    contador++;
    MM-=60;
  }
  HH+=contador;
  if(MM<10){
    if(HH>12){
      HH-=12;
      cout<<"Hora de finalizacion: "<<HH<<":0"<<MM<<" PM"<<endl;
    }else cout<<"Hora de finalizacion: "<<HH<<":0"<<MM<<" AM"<<endl;
  }else{
    if(HH>12){
      HH-=12;
      cout<<"Hora de finalizacion: "<<HH<<':'<<MM<<" PM"<<endl;
    }else cout<<"Hora de finalizacion: "<<HH<<':'<<MM<<" AM"<<endl;
  }
}
// EJERCICIO 4
// Escriba un código que solicite una cantidad de minutos específica y muestre como
// resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y
// restarle el tiempo indicado.
void hora(){
  char date[25];//almacenara la fecha y hora local de su sistema
  time_t tiempoActual = time(NULL); //variable date
  strcpy(date, ctime(&tiempoActual)); 
  string dateString(date); //convierte a string para usar substr()
  //cout<<date<<endl; 
  int HHint = stoi(dateString.substr(11,13));
  int MMint = stoi(dateString.substr(14,16));
  cout<<"Fecha Actual: "<<dateString.substr(0,10)+" "+dateString.substr(20,24);
  cout<<"Hora Actual: "<<HHint<<":"<<MMint<<endl;
  int min;
  cout<<"\nIngrese minutos a restar: "; cin>>min;
  MMint-=min; //restamos minutos
  int contador=0;
  while(MMint<0){ //contar las horas si esque los min pasan los 60
    contador++;
    MMint+=60;
  }
  HHint-=contador; //restamos las horas
  if(MMint<10){
    if(HHint>12){
      HHint-=12;
      cout<<"Hora resultante: "<<HHint<<":0"<<MMint<<" PM"<<endl;
    }else cout<<"Hora resultante: "<<HHint<<":0"<<MMint<<" AM"<<endl;
  }else{
    if(HHint>12){
      HHint-=12;
      cout<<"Hora resultante: "<<HHint<<':'<<MMint<<" PM"<<endl;
    }else cout<<"Hora resultante: "<<HHint<<':'<<MMint<<" AM"<<endl;
  }
}
// EJERCICIO 5
// Elabore un código que reciba como entrada una secuencia de caracteres que contiene
// un numero flotante y retorne el número redondeado.

void saveFloat(string cadena){ //probar ingresando en consola: num12.53798num awsd
  string nums="0123456789."; //incluye el punto decimal
  char numfloat[cadena.size()];//array que guarda los digitos del float
  int x=0;
  for(int i=0; i<cadena.size(); i++){
    for(int j=0; j<nums.length(); j++){
      if(cadena[i] == nums[j]){
        numfloat[x++]=cadena[i]; //guarda en el array los digitos del float y el punto
      }
    }
  }
  float num = atof(numfloat); //convierte string a float
  cout<<"El numero flotante redondeado a dos decimales es: "; printf("%.2f",num);
  cout<<"\nEl numero redondeado a enteros es: "; printf("%.0f",num); cout<<endl;
}
// EJERCICIO 6
// Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
// en binario.
void convertToBinary(int x){//funcion recursiva
  if(x>1) 
    convertToBinary(x/2);
  cout<<x%2;
}
// EJERCICIO 7
// Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
// divisor del otro.
void ejercicio7(){
  int a,b;
  cout<<"Ingrese un numero: "; cin>>a;
  cout<<"Ingrese un numero: "; cin>>b;
  if(a==0 && b==0){
    cout<<"Los numeros ingresados son ceros"<<endl;
    return;
  }
  if(a%b==0){
    cout<<b<<" es divisor de "<<a<<endl;
  }else if (b%a==0){
    cout<<a<<" es divisor de "<<b<<endl;
  }else cout<<"Ni "<<a<<" ni "<<b<<" son divisores"<<endl;
}
// EJERCICIO 8
// Escribir un programa que calcule la media de x cantidad números introducidos por el
// teclado.
void media(int x){
  int* _array = new int[x]; 
  double suma=0;
  for(int i=0; i<x; i++){
    cout<<"Ingrese un valor: "; 
    cin>>*(_array+i);
  }
  for(int i=0; i<x; i++){ 
      suma += (*(_array+i));
  }
  cout<<"Media = "<<suma/x<<endl;
  delete[]_array;
  _array=nullptr;
}
// EJERCICIO 9
// Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
// negativos.
void sumarSoloNegativos(){
  int array[10], sumaNeg=0;
  for(int i=0; i<10; i++){
    cout<<"Ingrese un numero entero: "; 
    cin>>array[i];
  }
  for(int i=0; i<10; i++){
    if(array[i]<0) 
      sumaNeg+=array[i];
  }
  cout<<"\nLa suma de los negativos es: "<<sumaNeg<<endl;
}
// EJERCICIO 10
// Escribir un programa que almacene la cadena de caracteres contraseña en una variable,
// pregunte al usuario por la contraseña hasta que introduzca la contraseña correcta.
void contrasena(){
  string password = "contrasena", passwordinput;
  cout<<"Ingrese la contrasena: ";fflush(stdin); getline(cin,passwordinput);fflush(stdin);
  while(passwordinput != password){//la contraseña correcta es "contrasena"
    cout<<"Ingrese la contrasena correcta: "; cin>>passwordinput;
  }
  cout<<"Contrasena correcta!!!"<<endl;
}

void MenuDeOpciones(){
  int op,val;
  string cadena;
  do{
    cout<<"------------LABORATORIO 1------------"<<endl;
    for(int i=1; i<=10; i++){
      cout<<"EJERCICIO "<<i<<endl;
    }
    cout<<"\n\nIngrese una opcion [1-10] ==> ";
    cin>>op;
    switch(op){
      case 1: productoDeAmbos(); break;
      case 2: crearCorreoUnsa(); break;
      case 3: soliciteHora(); break;
      case 4: hora(); break;//Hora actual //era hora()
      case 5: cout<<"Ingrese una cadena de caracteres: "; fflush(stdin);
              getline(cin,cadena); fflush(stdin); //vacia buffer
              saveFloat(cadena); cout<<endl;break;
      case 6: cout<<"Ingrese un valor entre 100 y 999: "; cin>>val; convertToBinary(val); cout<<endl; break;
      case 7: ejercicio7(); break;
      case 8: cout<<"Cuantos valores va ingresar: "; cin>>val; media(val); break;
      case 9: sumarSoloNegativos(); break;
      case 10: contrasena(); break;
    }
    cout<<"Presione Enter para continuar...";
    cin.get(); cin.get();//pausa el sistema momentaneamente
    limpiarConsola();
  }while(op<=10 && op>0);
}

int main(){
  MenuDeOpciones();

  return 0;
}