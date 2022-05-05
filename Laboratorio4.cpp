#include<iostream>
#include<limits>
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
// Escribir un programa donde se pueda ingresar los datos de tres personas, como el
// nombre, apellido, edad y DNI y luego lo muestre por pantalla.
void ejercicio1(){
  string personas[3][4]; //no se pierde memoria
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      if(j==0) {cout<<"Ingrese Nombre: "; fflush(stdin); getline(cin,personas[i][j]);  }
      else if(j==1) {cout<<"Ingrese Apellido: "; fflush(stdin); getline(cin,personas[i][j]);  }
      else if(j==2) {cout<<"Ingrese Edad: "; fflush(stdin); cin>>personas[i][j]; }
      else {cout<<"Ingrese DNI: "; cin>>personas[i][j];}
    }
  }
  //Mostrar datos por consola
  for(int i=0; i<3; i++){
    cout<<"PERSONA "<<i+1<<endl;
    for(int j=0; j<4; j++){
      if(j==0) cout<<"Nombre: "<<personas[i][j]<<endl;
      else if(j==1) cout<<"Apellido: "<<personas[i][j]<<endl;
      else if(j==2) cout<<"Edad: "<<personas[i][j]<<endl;
      else cout<<"DNI: "<<personas[i][j]<<endl;
    }
  }
}
// EJERCICIO 2
// Hacer un array unidimensional que acepte ocho números enteros. Luego le
// pregunte al usuario que ingrese un número a buscar, implementar una función que
// busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
// contrario, retornar falso.
bool buscarEnArray(int num,int array[], int len){
  bool band = false;
  for(int i=0; i<len; i++){
    if(array[i]==num)
      band=true;
  }
  return band;
}
void ejercicio2(){
  int numeros[8]={12,45,14,16,13,17,18,24};
  int val;
  cout<<"Ingrese numero a buscar: "; cin>>val;
  if(buscarEnArray(val,numeros,8)) // val es el valor a vbuscar dentro del array
    cout<<"El numero se encuentra en el array. Resultado Booleano: "<<buscarEnArray(val,numeros,8)<<endl;
  else
    cout<<"El numero no se encuentra en el array. Resultado Booleano: "<<buscarEnArray(val,numeros,8)<<endl;
}

// EJERCICIO 3
// Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
// debe mostrar la suma de todos los números que estén en una fila par.
void ejercicio3(){
  int array[5][3];
  int suma=0;
  for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
      cout<<"Ingrese un numero: "; cin>>array[i][j];
    }
  }
  for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
      if(i%2!=0)//las lineas pares seran cuando i==1 y i==3
        suma+=(array[i][j]);
    }
  }
  for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
      cout<<array[i][j]<<"\t";
    }
    cout<<endl;
  }
  cout<<"SUMA DE LOS ELEMENTOS EN FILAS PARES: "<<suma<<endl;
}
// EJERCICIO 4
// Implementar un programa que rellene un array con los números primos
// comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
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
void ejercicio4(){
  int primos[25]; // hay 25 numeros entre 1 y 100
  int x=0; // contador para recorrer el array de primos
  for(int i=1; i<100; i++){ // del 1 al 100
    if(esPrimo(i))
      primos[x++]=i;
  }
  for(int i=24; i>=0; i--){
    cout<<primos[i]<<" ";
  }
  cout<<endl;
}
// EJERCICIO 5
// Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
// la información a recoger será: nombre del producto, precio, cantidad en stock. La
// tienda dispone de 10 productos distintos. El programa debe ser capaz de:
// a. Dar de alta un producto nuevo.
// b. Buscar un producto por su nombre.
// c. Modificar el stock y precio de un producto dado.
string** createMatriz(int f,int c){
  string **_matriz = new string*[f];
  for(int i=0; i<f; i++){
    _matriz[i] = new string[c];
  }
  return _matriz;
}
void insertMatriz(string** _matriz, int f, int c){
  for(int i=0; i<f; i++){
    for(int j=0; j<c; j++){
      cout<<"Matriz["<<i<<"]["<<j<<"]: ";
      cin>>*(*(_matriz+i)+j);
    }
  }
}
void mostrarMatriz(string** _matriz, int f, int c){
  for(int i=0; i<f; i++){
    for(int j=0; j<c; j++)
      cout<<*(*(_matriz+i)+j)<<"\t";
    cout<<endl;
  }
}
void deleteMemoryMatriz(string** _matriz, int f){
  for(int i=0; i<f; i++){
    delete[] _matriz[i];
  }
  delete[] _matriz;
  _matriz = nullptr;
}
string** darDeAlta2(string** stock, int f){
  int cantidad;
  string** stockNuevo = createMatriz(f+1,3);
  for(int i=0; i<f; i++){
    for(int j=0; j<3; j++)
      stockNuevo[i][j]=stock[i][j];
  }
  cout<<"Ingrese Nombre del nuevo producto: "; fflush(stdin); getline(cin,stock[f][0]);
  cout<<"Ingrese Precio: "; fflush(stdin); getline(cin,stock[f][1]);
  cout<<"Cantidad en stock: "; fflush(stdin); cin>>stock[f][2];
  return stockNuevo;
}

void darDeAlta(string** stock, int f){
  string modificar, temp;
  cout<<"El numero maximo de productos es 10. Intente modificar algun producto"<<endl;
  cout<<"Ingrese el producto que desea modificar: "; fflush(stdin); getline(cin,modificar);
  for(int i=0; i<f; i++){
    if(modificar==stock[i][0]){
      cout<<"Modificar Nombre del Producto: "; fflush(stdin); getline(cin,temp);stock[i][0]=temp;
      cout<<"Modificar Precio: "; fflush(stdin); cin>>temp; stock[i][1]=temp;
      cout<<"Modificar Cantidad en Stock: "; fflush(stdin); cin>>temp; stock[i][2]=temp;
    }else if(i==f-1 && modificar!=stock[i][0]) cout<<"PRODUCTO NO ENCONTRADO"<<endl;
  }
}
void buscarProducto(string** stock,int f){
  string buscar;
  cout<<"Ingrese el producto que desea buscar: "; fflush(stdin); getline(cin,buscar);
  for(int i=0; i<f; i++){
    if(buscar==stock[i][0]){
      cout<<"PRODUCTO: "<<stock[i][0]<<"\t\tPRECIO: "<<stock[i][1]<<"\tSTOCK: "<<stock[i][2]<<endl;
      return;
    }else if(i==f-1 && buscar!=stock[i][0]) cout<<"PRODUCTO NO ENCONTRADO"<<endl;
  }
}
void modificarStock(string** stock, int f){
  string modificar, temp;
  cout<<"Ingrese el producto que desea modificar: "; fflush(stdin); getline(cin,modificar);
  for(int i=0; i<f; i++){
    if(modificar==stock[i][0]){
      cout<<"Modificar Precio: "; cin>>temp; stock[i][1]=temp;
      cout<<"Modificar Cantidad en Stock: "; cin>>temp; stock[i][2]=temp;
    }else if(i==f-1 && modificar!=stock[i][0]) cout<<"PRODUCTO NO ENCONTRADO"<<endl;
  }
}
void ejercicio5(){
  int f=3,c=3;//era f=10
  string** stock = createMatriz(f,c);
  string** stocknuevo;
  int _op;
  for(int i=0; i<f; i++){
    for(int j=0; j<c; j++){
      if(j==0) {cout<<"Ingrese Nombre del producto: "; fflush(stdin); getline(cin,stock[i][j]);  }
      else if(j==1) {cout<<"Ingrese Precio: "; fflush(stdin); getline(cin,stock[i][j]);  }
      else {cout<<"Cantidad en stock: "; fflush(stdin); cin>>stock[i][j]; }
    }
  }
  do{
    cout<<"-------------PRODUCTOS-------------"<<endl;
    for(int i=0; i<f; i++){
      cout<<"PRODUCTO: "<<stock[i][0]<<"\tPRECIO: "<<stock[i][1]<<"\tSTOCK: "<<stock[i][2]<<endl;
    }
    cout<<f<<endl;
    cout<<"------------STOCK------------"<<endl;
    cout<<"[1] Dar de alta un producto nuevo."<<endl;
    cout<<"[2] Buscar un producto por su nombre."<<endl;
    cout<<"[3] Modificar el stock y precio de un producto dado."<<endl;
    cout<<"\nIngrese una opcion [1-3] ==> ";
    cin>>_op;
    switch(_op){
      case 1: darDeAlta(stock,f);/*stocknuevo=darDeAlta(stock,f); 
              deleteMemoryMatriz(stock,f); f++;  
              stock=stocknuevo;*/ break;
      case 2: buscarProducto(stock,f); break;
      case 3: modificarStock(stock,f); break;
      default: break;
    }
    cout<<"Presione Enter para continuar..."<<endl;
    cin.get();
  }while(_op<=3 && _op>0);
  cout<<endl;
}

// EJERCICIO 6
// Escribe un programa que pida nueve números enteros y los almacene en una matriz
// 3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
// fila con mayor suma
void ejercicio6(){
  int matriz[3][3], sumaFila[]={0,0,0};// guarda las sumas por fila
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<"Ingrese numero: "; cin>>matriz[i][j];
      sumaFila[i]+=matriz[i][j];
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<matriz[i][j]<<"\t";
    }
    cout<<" = "<<sumaFila[i]<<endl;
  }
  if(sumaFila[0]>sumaFila[1] && sumaFila[0]>sumaFila[2])
    cout<<"\nLA FILA 1 tiene la mayor suma"<<endl;
  else if(sumaFila[1]>sumaFila[0] && sumaFila[1]>sumaFila[2])
    cout<<"\nLA FILA 2 tiene la mayor suma"<<endl;
  else if(sumaFila[2]>sumaFila[0] && sumaFila[2]>sumaFila[1])
    cout<<"\nLA FILA 3 tiene la mayor suma"<<endl;
}

// EJERCICIO 7
// Escribe un programa, que trabajando mediante funciones, presente un menú al usuario, 
// mueva las columnas a la derecha o izquierda, asimismo mueva las filas para arriba o para abajo.
// op1
void moverColumnasIzq(int matriz[][5]){
  int aux,aux2;
  for(int i=0; i<5 ; i++){
    aux=matriz[i][0];
    for(int j=4; j>=0; j--){  
      aux2=matriz[i][j];
      matriz[i][j]=aux;
      aux=aux2;
    }
  }
}
void moverColumnasDer(int matriz[][5]){
  int aux,aux2;
  for(int i=0; i<5 ; i++){
    aux=matriz[i][4];
    for(int j=0; j<5; j++){  
      aux2=matriz[i][j];
      matriz[i][j]=aux;
      aux=aux2;
    }
  }
}
void moverFilasAbajo(int matriz[][5]){
  int aux, aux2;
  for(int i=0; i<5 ; i++){
    aux=matriz[4][i];
    for(int j=0; j<5; j++){  
      aux2=matriz[j][i];
      matriz[j][i]=aux;
      aux=aux2;
    }
  }
}
void moverFilasArriba(int matriz[][5]){
  int aux,aux2;
  for(int i=0; i<5 ; i++){
    aux=matriz[0][i];
    for(int j=4; j>=0; j--){  
      aux2=matriz[j][i];
      matriz[j][i]=aux;
      aux=aux2;
    }
  }
}
void ejercicio7(){
  int menu[5][5];
  int x=1;
  for(int i=0; i<5; i++){ //llenar matriz con numeros consecutivos
    for(int j=0; j<5; j++){
      menu[i][j]=(x++);
    }
  }
  int op;
  do{
    for(int i=0; i<5; i++){ //mostrar matriz
      for(int j=0; j<5; j++)
        cout<<menu[i][j]<<"\t";
      cout<<endl;
    }
    cout<<"------------Ejercicio 7------------"<<endl;
    cout<<"[1] Mover columnas a la izquierda"<<endl;
    cout<<"[2] Mover columnas a la derecha"<<endl;
    cout<<"[3] Mover filas hacia arriba"<<endl;
    cout<<"[4] Mover filas hacia abajo"<<endl;
    cout<<"\nIngrese una opcion [1-4] ==> ";
    cin>>op;
    switch(op){
      case 1: moverColumnasIzq(menu); break;
      case 2: moverColumnasDer(menu); break;
      case 3: moverFilasArriba(menu); break;
      case 4: moverFilasAbajo(menu); break;
      default: break;
    }
    cin.get(); 
  }while(op<=4 && op>0);
}

void MenuDeOpciones(){
  int op;
  string cadena;
  do{
    cout<<"------------LABORATORIO 4------------"<<endl;
    for(int i=1; i<=7; i++){
      cout<<"EJERCICIO "<<i<<endl;
    }
    cout<<"\n\nIngrese una opcion [1-7] ==> ";
    cin>>op;
    switch(op){
      case 1: ejercicio1(); break;
      case 2: ejercicio2(); break;
      case 3: ejercicio3(); break;
      case 4: ejercicio4(); break;
      case 5: ejercicio5(); break;
      case 6: ejercicio6(); break;
      case 7: ejercicio7(); break;
    }
    cout<<"Presione Enter para continuar...";
    cin.get(); cin.get();//pausa el sistema momentaneamente
    limpiarConsola();
  }while(op<=7 && op>0);
}
int main(){
  MenuDeOpciones();
  return 0;
}