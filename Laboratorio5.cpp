#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
//directivas de preprocesador
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
// Asignar valores a dos variables enteras, intercambie estos valores almacenados
// usando solo punteros a enteros
void intercambiar1(int &x,int &y){ //opcion1: usando referencias
  int aux;
  aux=x;
  x=y;
  y=aux;
}
void intercambiar2(int *a, int *b) { //opcion2: usando solo punteros a enteros
  int aux = *a;
  *a = *b;
  *b = aux;
}
void ejercicio1(){
  int a=100, b=200;
  cout<<"ANTES: \t\ta = "<<a<<"\tb = "<<b<<endl;
  intercambiar2(&a,&b); //usando la opcion 2
  cout<<"DESPUES: \ta = "<<a<<"\tb = "<<b<<endl;
}

// EJERCICIO 2
// Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
// de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
// por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los 
// punteros. Repita este proceso de asignación y retiro de memoria dentro de un for de
// 1 000 000 veces.
void ejercicio2(){
  int n,num,num2; 
  float prodPunto = 0;
  srand(time(nullptr)); //semilla para generar el numero aleatorio
  for(int i=0; i<1000000; i++){ //se ejecutara 1 000 000 de veces
    cout<<"\nIngrese tamanio del array: "; cin>>n;
    float* vector1 = new float[n];
    float* vector2 = new float[n];
    for(int i=0; i<n; i++){
      num = 1+rand()%(10);
      num2 = 1+rand()%(10);
      vector1[i] = num;
      vector2[i] = num2;
    }
    cout<<"VECTOR 1: ";
    for(int i=0; i<n; i++)
      cout<<vector1[i]<<" ";
    cout<<"\nVECTOR 2: ";
    for(int i=0; i<n; i++)
      cout<<vector2[i]<<" ";
    for(int i=0; i<n; i++){
      prodPunto += (vector1[i]*vector2[i]);
    }
    cout<<"\nPRODUCTO PUNTO: "<<prodPunto<<endl;
    delete []vector1; vector1=nullptr;
    delete []vector2; vector2=nullptr;
    prodPunto=0; //reiniciamos la variable
  }
}

// EJERCICIO 3
// Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
// insertar y eliminar un elemento. En la función insertar se debe asegurar que los
// números insertados estén en orden creciente. Simule el proceso con 10000 números
// aleatorios sin que el programa falle
struct Nodo_E3{ // Nodo_E3 solo funcionara para el ejercicio 3
  int num;
  Nodo_E3* sig; 
};
void insertNodoOrdenado(Nodo_E3*& head, int dato){
  Nodo_E3* newNodo = new Nodo_E3();//creamos nuevo nodo
  newNodo->num = dato;
  Nodo_E3* aux1 = head;
  Nodo_E3* aux2;
  while((aux1 != nullptr)&&(aux1->num < dato)){
    aux2=aux1;
    aux1=aux1->sig;
  }
  if(head == aux1) head = newNodo; //si es que el nodo esta vacio
  else aux2->sig = newNodo;
  newNodo->sig = aux1;
}

void deleteNodo(Nodo_E3*& head, int dato){
  if( head != nullptr){
    Nodo_E3* aux_borrar;
    Nodo_E3* anterior = nullptr;
    aux_borrar = head;
    while((aux_borrar != nullptr) && (aux_borrar->num != dato)){
      anterior = aux_borrar;
      aux_borrar = aux_borrar->sig;
    }
    if (aux_borrar == nullptr) {
      cout<<"El nodo no existe";
    }else if(anterior == nullptr){
      head = head->sig;
      delete aux_borrar;
    }else{
      anterior->sig = aux_borrar->sig;
      delete aux_borrar;
    }
  }
}

void printListE3(Nodo_E3* head){ //recorre la lista enlazada hasta llegar a null
  while(head != nullptr){
    cout<<head->num<<" -> ";
    head=head->sig;
  }
}
void ejercicio3(){
  Nodo_E3* head = nullptr; //creamos el head de la lista
  //int valor;
  srand(time(nullptr)); //semilla para el rand (numeros)
  int opc,n,x;
  do{
    cout<<"\n------------OPERACIONES------------"<<endl;
    cout<<"[1] INSERTAR 10 000 ELEMENTOS\n[2] ELIMINAR ELEMENTO\n[3] SALIR\n";
    cout<<"\nINGRESE LA OPERACION A REALIZAR ==> ";
    cin>>opc;
    switch(opc){
      case 1: for(int i=1; i<=10000; i++) // 10000 numeros
                insertNodoOrdenado(head,rand());
              printListE3(head);
              break;
      case 2: cout<<"Cuantos datos quiere eliminar? "; cin>>x;
              for(int i=1; i<=x; i++){
                cout<<"Ingrese el dato a eliminar: "; cin>>n; deleteNodo(head,n); 
              }
              printListE3(head); break;
      case 3: return;
    }
    cout<<"\nPresione Enter para continuar...";
    cin.get();
  }while(opc<=3 && opc>0);
}

// EJERCICIO 4
// Construya una lista enlazada que almacene tanto números como cadenas de texto
// utilizando punteros void. Incluya una función de búsqueda de muestre un dato
// almacenado además del tipo de dato que se encuentra almacenado (int, float, char,...)
struct Nodo_E4{
  int Int = 0; //dato int
  string String= " "; //dato string
  float Float= 0; //dato float
  char Char=' '; //dato char
  string infoType; // inforamcion del tipo de dato
  void* ptrvoid; // puntero void que puede apuntar a cualquiera de los elementos;
  void* ptrinfo = &infoType; //puntero void inicializado apuntando a infoType
  Nodo_E4* sig;
};

void insertNodoTailE4_int(Nodo_E4*& head, int dato, string _cadena){
  Nodo_E4* newNodo = new Nodo_E4();
  newNodo->ptrvoid=&(newNodo->Int); //apuntamos a direccion de Int
  *(int*)newNodo->ptrvoid = dato; //*(int*) para trabajar el void como int
  newNodo->ptrvoid=&(newNodo->infoType); //apuntamos a direccion de infoType
  *(string*)newNodo->ptrvoid = _cadena; //*(string*) para trabajar el void como string
  newNodo->sig = nullptr;
  if(head == nullptr){ //para saber si la lista esta vacia
    head=newNodo;
    return;
  }
  Nodo_E4* last = head; //se ubica en el head
  while(last->sig != nullptr)// recorre la lista hasta el final para ubicar el nodo tail
    last=last->sig;
  last->sig = newNodo; //insertamos el nodo
}
void insertNodoTailE4_str(Nodo_E4*& head, string dato, string _cadena){
  Nodo_E4* newNodo = new Nodo_E4();
  newNodo->ptrvoid=&(newNodo->String); //apuntamos a direccion de String
  *(string*)newNodo->ptrvoid = dato; //*(int*) para trabajar el void como string
  newNodo->ptrvoid=&(newNodo->infoType); //apuntamos a direccion de infoType
  *(string*)newNodo->ptrvoid = _cadena; //*(string*) para trabajar el void como string
  newNodo->sig = nullptr;
  if(head == nullptr){
    head=newNodo;
    return;
  }
  Nodo_E4* last = head;
  while(last->sig != nullptr)// recorre la lista hasta el final
    last=last->sig;
  last->sig = newNodo;
}
void insertNodoTailE4_float(Nodo_E4*& head, float dato, string _cadena){
  Nodo_E4* newNodo = new Nodo_E4();
  newNodo->ptrvoid = &(newNodo->Float); //apuntamos a direccion de Float
  *(float*)newNodo->ptrvoid = dato; //*(int*) para trabajar el void como float
  newNodo->ptrvoid = &(newNodo->infoType); //apuntamos a direccion de infoType
  *(string*)newNodo->ptrvoid = _cadena; //*(string*) para trabajar el void como string
  newNodo->sig = nullptr;
  if(head == nullptr){
    head=newNodo;
    return;
  }
  Nodo_E4* last = head;
  while(last->sig != nullptr)// recorre la lista hasta el final
    last=last->sig;
  last->sig = newNodo;
}
void insertNodoTailE4_char(Nodo_E4*& head, char dato, string _cadena){
  Nodo_E4* newNodo = new Nodo_E4();
  newNodo->ptrvoid=&(newNodo->Char); //apuntamos a direccion de Char
  *(char*)newNodo->ptrvoid = dato; //*(int*) para trabajar el void como char
  newNodo->ptrvoid=&(newNodo->infoType); //apuntamos a direccion de infoType
  *(string*)newNodo->ptrvoid = _cadena; //*(string*) para trabajar el void como string
  newNodo->sig = nullptr;
  if(head == nullptr){
    head=newNodo;
    return;
  }
  Nodo_E4* last = head;
  while(last->sig != nullptr)// recorre la lista hasta el final
    last=last->sig;
  last->sig = newNodo;
}

void buscarNodo_int(Nodo_E4* head, int dato){
  Nodo_E4* actual = new Nodo_E4();
  actual = head;
  while(actual != nullptr){ //recorremos la lista
    actual->ptrvoid = &(actual->Int);
    if(*(int*)actual->ptrvoid == dato){
      cout<<"Dato: "<<*(int*)actual->ptrvoid<<endl;
      actual->ptrvoid = &(actual->infoType);
      cout<<"Tipo: "<<*(string*)actual->ptrvoid<<endl;
    }
    actual = actual->sig; //va al sig nodo
  }
}
void buscarNodo_str(Nodo_E4* head, string dato){
  Nodo_E4* actual = new Nodo_E4();
  actual = head;
  while(actual != nullptr){
    actual->ptrvoid = &(actual->String);
    if((*(string*)actual->ptrvoid == dato)){
      cout<<"Dato: "<<*(string*)actual->ptrvoid<<endl;
      actual->ptrvoid = &(actual->infoType);
      cout<<"Tipo: "<<*(string*)actual->ptrvoid<<endl;
    }
    actual = actual->sig; //va al sig nodo
  }
}
void buscarNodo_float(Nodo_E4* head, float dato){
  Nodo_E4* actual = new Nodo_E4();
  actual = head;
  while(actual != nullptr){
    actual->ptrvoid = &(actual->Float);
    if((*(float*)actual->ptrvoid == dato)){
      cout<<"Dato: "<<*(float*)actual->ptrvoid<<endl;
      actual->ptrvoid = &(actual->infoType);
      cout<<"Tipo: "<<*(string*)actual->ptrvoid<<endl;
    }
    actual = actual->sig; //va al sig nodo
  }
}
void buscarNodo_char(Nodo_E4* head, char dato){
  Nodo_E4* actual = new Nodo_E4();
  actual = head;
  while(actual != nullptr){
    actual->ptrvoid = &(actual->Char);
    if((*(char*)actual->ptrvoid == dato)){
      cout<<"Dato: "<<*(char*)actual->ptrvoid<<endl;
      actual->ptrvoid = &(actual->infoType);
      cout<<"Tipo: "<<*(string*)actual->ptrvoid<<endl;
    }
    actual = actual->sig; //va al sig nodo
  }
}
void printListE4(Nodo_E4* head){ //recorre la lista enlazada hasta llegar a null
  cout<<"LISTA ENLAZADA: "<<endl;
  while(head != nullptr){
    if(*(string*)head->ptrinfo == "int"){
      head->ptrvoid = &(head->Int);
      cout<<"["<<*(int*)head->ptrvoid<<":";
    }else if(*(string*)head->ptrinfo == "string"){
      head->ptrvoid = &(head->String);
      cout<<"["<<*(string*)head->ptrvoid<<":";
    }else if(*(string*)head->ptrinfo == "float"){
      head->ptrvoid = &(head->Float);
      cout<<"["<<*(float*)head->ptrvoid<<":";
    }else if(*(string*)head->ptrinfo == "char"){
      head->ptrvoid = &(head->Char);
      cout<<"["<<*(char*)head->ptrvoid<<":";
    }
    //tambien se puede usar el mismo puntero void para mostrar infoType
    //head->ptrvoid = &(head->infoType);
    cout<<*(string*)head->ptrinfo<<"] -> ";
    head=head->sig;
  }
}

void ejercicio4(){
  Nodo_E4* head = nullptr; //creamos el head de la lista
  int num; float num2;
  string cadena="int";
  int opc,n,x;
  string palabras[7] = {"lunes","laptop","naranja","silla","vaso","eucalipto","mesa"};
  string tipoDeDato;
  do{
    cout<<"\n------------OPERACIONES------------"<<endl;
    cout<<"[1] INSERTAR ELEMENTOS ALEATORIOS\n[2] BUSCAR ELEMENTO\n[3] SALIR\n";
    cout<<"\nINGRESE LA OPERACION A REALIZAR ==> ";
    cin>>opc;
    int buscarInt; string buscarStr; float buscarFloat; char buscarChar;
    switch(opc){
      case 1: 
        srand(time(nullptr));
        insertNodoTailE4_float(head,18.9,"float");
        insertNodoTailE4_char(head,'z',"char");
        insertNodoTailE4_int(head,100,"int");
        insertNodoTailE4_str(head,"programacion","string");
        for(int i=0; i<=6; i++){
          num=97+rand()%(122); //int aleatorio
          num2=100+rand()%(200); //float aleatorio
          insertNodoTailE4_int(head,num,"int");
          insertNodoTailE4_char(head,char(num),"char");
          insertNodoTailE4_str(head,palabras[i],"string");
          insertNodoTailE4_float(head,num2/10,"float");
        }
        printListE4(head);
        break;
      case 2:
        cout << "\nINGRESE EL TIPO DE DATO A BUSCAR EN LA LISTA (int-float-string-char): ";
        cin >> tipoDeDato;
        if (tipoDeDato == "int"){
          cout << "\nINGRESE EL DATO A BUSCAR EN LA LISTA: "; cin>>buscarInt;
          buscarNodo_int(head, buscarInt);
        }else if (tipoDeDato == "string"){
          cout << "\nINGRESE EL DATO A BUSCAR EN LA LISTA: "; cin>>buscarStr;
          buscarNodo_str(head, buscarStr);
        }else if (tipoDeDato == "float"){
          cout << "\nINGRESE EL DATO A BUSCAR EN LA LISTA: "; cin>>buscarFloat;
          buscarNodo_float(head, buscarFloat);
        }else if (tipoDeDato == "char"){
          cout << "\nINGRESE EL DATO A BUSCAR EN LA LISTA: "; cin>>buscarChar;
          buscarNodo_char(head, buscarChar);
        }
      case 3: return;
    }
    cout<<"\nPresione Enter para continuar...";
    cin.get();
  }while(opc<=3 && opc>0);
}

// EJERCICIO 5
// Implemente su propia función de concatenación de cadenas de texto especial (¡no es
// la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
// caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
// puntero. La función no retorna ningún valor

void concatenacionEspecial(char* caracter1, char* caracter2, int size1, int size2){
  int sizeFin = size1+size2;
  int x=0; //iterador secundario
  char* concat = new char[sizeFin]; 
  for(int i=0; i<size2; i++)
    concat[i] = caracter2[i];
  for(int i=size2; i<sizeFin; i++)
    concat[i] = caracter1[x++];
  //imprime la concatenacion
  for(int i=0; i<sizeFin; i++)
    cout<<concat[i];
}

void ejercicio5(){
  int n,m;
  string cadena1,cadena2;
  cout<<"Ingrese cadena 1: "; cin>>cadena1;
  n = cadena1.length();
  cout<<"Ingrese cadena 2: "; cin>>cadena2;
  m = cadena2.length();
  char* palabra1 = new char[n];
  char* palabra2 = new char[m];
  for(int i=0; i<n; i++)
    palabra1[i]=cadena1[i];
  for(int i=0; i<m; i++)
    palabra2[i]=cadena2[i];
  cout<<"\nCONCATENACION ESPECIAL: ";
  concatenacionEspecial(palabra1,palabra2,n,m);
  delete []palabra1; palabra1=nullptr;//vaciar memoria
  delete []palabra2; palabra2=nullptr;//vaciar memoria
}

// EJERCICIO 6
// Utilizando punteros a funciones, implemente las funciones:
// a. void sumar (int a, int b);
// b. void restar (int a, int b);
// c. void multiplicar (int a, int b);
// d. void dividir (int a, int b);
// Cree un vector de punteros a funciones e implemente un programa que permita la
// invocación de cada función, pero a través del puntero.
void sumar(int a, int b){
  cout<<a+b<<endl;
}
void restar(int a, int b){
  cout<<a-b<<endl; 
}
void multiplicar(int a, int b){
  cout<<a*b<<endl;
}
void dividir(int a, int b){
  cout<<a/b<<endl;
}
void ejercicio6(){
  void (*pointerSumar)(int,int)=sumar; //punteros a funciones
  void (*pointerRestar)(int,int)=restar;
  void (*pointerMultiplicar)(int,int)=multiplicar;
  void (*pointerDividir)(int,int)=dividir;
  void (*operaciones[4])(int,int)={sumar,restar,multiplicar,dividir}; //array de punteros a funciones
  int opc,a,b;
  do{
    cout<<"------------OPERACIONES------------"<<endl;
    cout<<"\nINGRESE PRIMER NUMERO: "; cin>>a;
    cout<<"INGRESE SEGUNDO NUMERO: "; cin>>b;
    cout<<"\t---[MENU]---\n";
    cout<<"[1] SUMA\n[2] RESTA\n[3] MULTIPLICACION\n[4] DIVISION\n[5] SALIR\n";
    cout<<"\nINGRESE LA OPERACION A REALIZAR ==> ";
    cin>>opc;
    switch(opc){
      case 1: cout<<"\nLA SUMA ES: "; (*operaciones[opc-1])(a,b); break;
      case 2: cout<<"\nLA RESTA ES: "; (*operaciones[opc-1])(a,b); break;
      case 3: cout<<"\nLA MULTIPLICACION ES: "; (*operaciones[opc-1])(a,b); break;
      case 4: cout<<"\nLA DIVISION ES: "; (*operaciones[opc-1])(a,b); break;
      case 5: return;
    }
    cout<<"\nPresione Enter para continuar...";
    cin.get(); cin.get();
  }while(opc<=5 && opc>0);
}


void MenuDeOpciones(){
  int op;
  do{
    cout<<"------------LABORATORIO 5------------"<<endl;
    for(int i=1; i<=6; i++){
      cout<<"EJERCICIO "<<i<<endl;
    }
    cout<<"\n\nIngrese una opcion [1-6] ==> ";
    cin>>op;
    switch(op){
      case 1: ejercicio1(); break;
      case 2: ejercicio2(); break;
      case 3: ejercicio3(); break;
      case 4: ejercicio4(); break;
      case 5: ejercicio5(); break;
      case 6: ejercicio6(); break;
    }
    cout<<"\nPresione Enter para continuar...";
    cin.get(); cin.get();//pausa el sistema momentaneamente
    limpiarConsola();
  }while(op<=6 && op>0);
}
int main(){
  MenuDeOpciones();
  return 0;
}