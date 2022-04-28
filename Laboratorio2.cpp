//AUTOR: SERGIO DANIEL MOGOLLON CACERES
#include <iostream>
#include <string>
using namespace std;

#ifdef _WIN32
  #include<windows.h>
#endif  
void limpiarConsola(){
  #ifdef _WIN32 //condicional para limpiar la consola dependiendo del sistema operativo
    system("cls");
  #else
    system("clear");
  #endif
}

// EJERCICIO 1
// Sumar todos los enteros pares desde 2 hasta 100.
int sumarTodos(int a, int b){// en main se pone sumarTodos(2,100)
  cout<<"Suma de pares de 2-100"<<endl;
  int suma=0;
  for(int i=a; i<=b; i+=2){//incluye a=2 y b=100
    suma+=i;
  }
  return suma;
}
// EJERCICIO 2
// Calcule los primeros 50 números primos y muestre el resultado en pantalla.
bool esPrimo(int n){
  bool band;
  if(n!=1 && n!=0){
    for(int i=2; i<=n; i++){
      if(n%i ==0){
        if(n==i){
          band=true;
        }else{
          band=false;
          return band;
        }
      }
    }
  }else band=false;
  return band;
}
void primerosNumPrimos(int n){ //en main primerosNumPrimos(50);
  cout<<"Primeros "<<n<<" numeros primos"<<endl;
  int primos[50], contador=0;
  for(int i=0; i<50; i++){
    contador++;
    while(esPrimo(contador)==false){//contador sera el numero primo
      contador++;
    }
    primos[i]=contador;
  }
  for(int i=0; i<50; i++){
    cout<<primos[i]<<" "; //imprime los numeros primos
  }
}
// EJERCICIO 3
// Escribir un programa que visualice en pantalla los números múltiplos de 5
// comprendidos entre 1 y 100.
void multiplos5(int a, int b){
  cout<<"Multiplos de 5 entre "<<a<<" y "<<b<<endl;
  for(int i=a; i<=b; i++){//excluimos 100
    if(i%5 ==0 && i!=b) cout<<i<<" ";
  }
}
//EJERCICIO 4
// Escriba un código que solicite ingresar dos números x y y, tal que x < y. Muestre
// todos los números primos que se encuentren entre el rango de valores, de no
// encontrarse, mostrar el primo más cercano a x o y.
void primosEntre(){//usara la funcion esPrimo() declarada arriba
  int x,y,len=0;
  cout<<"Ingrese un valor (x): "; cin>>x;
  cout<<"Ingrese un valor mayor que el anterior (y): "; cin>>y;
  if(x>y){
    cout<<"\tx debe ser menor que y"<<endl;
    return;
  }
  int* _array = new int[y-x];
  for(int i=x; i<=y; i++){
    if(esPrimo(i) && i!=y && i!=x){//se excluyen x y y
      *(_array+(len++)) = i;
      cout<<i<<" ";
    }
  }
  int aumento=1;
  while(len==0){
    if(esPrimo(x+aumento) || esPrimo(x-aumento) || esPrimo(y+aumento) || esPrimo(y-aumento)){
      if(esPrimo(x-aumento)) {
        *(_array+0) = x-aumento;
        cout<<"El primo mas cercano a "<<x<<" es: "<<x-aumento<<" a "<<aumento<<" pasos"<<endl;
      }else if(esPrimo(x+aumento)){
        *(_array+0) = x+aumento;
        cout<<"El primo mas cercano a "<<x<<" es: "<<x+aumento<<" a "<<aumento<<" pasos"<<endl;
      }else if(esPrimo(y-aumento)){
        *(_array+0) = y-aumento;
        cout<<"El primo mas cercano a "<<y<<" es: "<<y-aumento<<" a "<<aumento<<" pasos"<<endl;
      }else{
        *(_array+0) = y+aumento;
        cout<<"El primo mas cercano a "<<y<<" es: "<<y+aumento<<" a "<<aumento<<" pasos"<<endl;
      }
      len++;
      break;
    }
    aumento++;
  }
  cout<<endl;
  delete[]_array; _array=nullptr; //vaciar memoria de new
}
// EJERCICIO 5
// Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
// media de los números leídos.
int getMin(int* array, int size){//valor minimo de un array
  int min = *(array+0);//array[0];
  for(int i=1;i<size;i++){
    if(*(array+i)<min)
      min = (*(array+i));//array[i]
  }
  return min;
}
int getMax(int* array,int size){//valor maximo de un array
  int max = *(array+0);//array[0];
  for(int i=1;i<size;i++){
    if(*(array+i)>max)
      max = (*(array+i));//array[i]
  }
  return max;
}
void ejercicio5(int n){
  int* _array = new int[n];
  double suma=0;
  for(int i=0; i<n; i++){
    cout<<"Ingrese un numero: "; cin>>*(_array+i);
  }
  for(int i=0; i<n; i++){
    suma += (*(_array+i));
  }
  cout<<"El mayor es: "<<getMax(_array,n)<<endl;
  cout<<"El menor es: "<<getMin(_array,n)<<endl;
  cout<<"La media es: "<<suma/n<<endl;
  delete[]_array; _array=nullptr;
}
// EJERCICIO 6
// Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
// sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
// los dos anteriores a él.
int fibonacci(int x){//funcion recursiva finaliza cuando llega al caso base
  if(x==0)
    return 0;
  else if((x==1) || (x==2))
    return 1;
  else 
    return fibonacci(x-1)+fibonacci(x-2);
}
void serieFibonacci(int x){
  for(int i=0; i<x; i++){
    cout<<fibonacci(i)<<" ";
  }
  cout<<endl;
}
// EJERCICIO 7
// Calcula el promedio de 3 notas para n estudiantes.
void promedio3DeNalumnos(int n){
  for(int x=0; x<n; x++){
    double suma=0, aux;
    for(int i=1; i<=3; i++){
      while(true){
        cout<<"Ingrese nota "<<i<<": "; cin>>aux; 
        if(aux>=0 && aux<=20) break;//comprueba que la nota sea de 0-20
      }
      suma+=aux;
    }
    cout<<"El promedio de las tres notas es: "<<suma/3.0<<endl;
  }
}
// EJERCICIO 8
// Escribir un programa que genere la tabla de multiplicar de un número introducido por
// el teclado.
void tablaMultiplicar(int x){
  cout<<"Tabla de multiplicar del "<<x<<endl;
  for(int i=1; i<=24; i++){
      cout<<i<<" x "<<x<<" = "<<i*x<<endl;
  }
}
//EJERCICIO 9
// Escribir un programa que pida al usuario un número entero y muestre por pantalla un
// triángulo rectángulo como el de más abajo, de altura el número introducido.
void crearTriangulo(){
  int n;
  cout<<"Ingrese un numero entero: "; cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++)
      cout<<"*";
    cout<<endl;
  }
}
// EJERCICIO 10
// Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
// una a una las letras de la palabra introducida empezando por la última.
void palabraAlReves(){
  string palabra;
  cout<<"Ingrese una palabra: ";
  cin>>palabra;
  for(int i=palabra.length()-1; i>=0; i--){
    cout<<palabra[i]<<endl;
  }
}

void MenuDeOpciones(){
  int op,val;
  string cadena;
  do{
    cout<<"------------LABORATORIO 2------------"<<endl;
    for(int i=1; i<=10; i++){
      cout<<"EJERCICIO "<<i<<endl;
    }
    cout<<"\n\nIngrese una opcion [1-10] ==> ";
    cin>>op;
    switch(op){
      case 1: cout<<sumarTodos(2,100)<<endl; break;
      case 2: primerosNumPrimos(50); cout<<endl; break;
      case 3: multiplos5(1,100); break;
      case 4: primosEntre(); break;
      case 5: cout<<"Cuantos valores va ingresar: "; cin>>val; ejercicio5(val); break;
      case 6: cout<<"Cuantos valores Fibonacci desea: "; cin>>val; serieFibonacci(val); break;
      case 7: cout<<"Cuantos estudiantes seran: "; cin>>val; promedio3DeNalumnos(val); break;
      case 8: cout<<"Ingrese un valor: "; cin>>val; tablaMultiplicar(val); break;
      case 9: crearTriangulo(); break;
      case 10: palabraAlReves(); break;
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