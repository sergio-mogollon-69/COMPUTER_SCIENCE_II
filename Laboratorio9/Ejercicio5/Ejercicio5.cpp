//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include<iostream>
using namespace std;

template<typename Type>
Type* createArray(int size){
    Type* _array = new Type[size];
    return _array;
}
template<typename Type>
void insertArray(Type* _array, int n){
  cout<<"COMENZANDO A LLENAR EL ARRAY..."<<endl;
  for (int i=0; i<n; i++){
    cout<<"Array["<<i<<"]: ";
    cin>>*(_array+i);
  }
}
template<typename Type>
void mostrarArray(Type* _array, int n){
  for (int i=0; i<n; i++){
    cout<<*(_array+i)<<"  ";
  }
  cout<<endl;
}
template<typename Type>
void deleteMemoryArray(Type* _array){
  delete[]_array;
  _array=nullptr;
}

//implementacion de Algoritmo de QUICKSORT
template<typename Type>
void intercambio(Type &x,Type &y){//intercambia los valores de las variables
  Type aux;
  aux = x;
  x = y;
  y = aux;
}

template<typename Type>
void ordenarAscendentemente(Type* _array, int ini, int fin){
  int i, j, cent = (ini + fin) / 2;
  Type piv = _array[cent]; // pivote
  i = ini;
  j = fin;
  do{
    while (_array[i] < piv) i++;
    while (_array[j] > piv) j--;
    if (i <= j) {
      intercambio(_array[i], _array[j]);
      i++;
      j--;
    }
  }while (i <= j);
  if (ini < j)
    ordenarAscendentemente(_array, ini, j); // ordena la sublista izquierda
  if (i < fin)
    ordenarAscendentemente(_array, i, fin); // ordena la sublista derecha
}

template<typename Type>
void ordenarDescendentemente(Type* _array, int ini, int fin){
  int i, j, cent = (ini + fin) / 2;
  Type piv = _array[cent]; // pivote
  i = ini;
  j = fin;
  do{
    while (_array[i] > piv) i++;
    while (_array[j] < piv) j--;
    if (i <= j) {
      intercambio(_array[i], _array[j]);
      i++;
      j--;
    }
  }while (i <= j);
  if (ini < j)
    ordenarDescendentemente(_array, ini, j); // ordena la sublista izquierda
  if (i < fin)
    ordenarDescendentemente(_array, i, fin); // ordena la sublista derecha
}


int main(){
  int* ArrayEntero = createArray<int>(9);
  float* ArrayFloat = createArray<float>(9);

  insertArray<int>(ArrayEntero,9);
  cout<<"ARRAY DE INT'S => ";
  mostrarArray<int>(ArrayEntero,9);
  ordenarAscendentemente<int>(ArrayEntero,0,8);
  cout<<"ARRAY DESPUES DE ORDENARLO ASCENDENTEMENTE => ";
  mostrarArray<int>(ArrayEntero,9);
  ordenarDescendentemente<int>(ArrayEntero,0,8);
  cout<<"ARRAY DESPUES DE ORDENARLO DESCENDENTEMENTE => ";
  mostrarArray<int>(ArrayEntero,9);

  insertArray<float>(ArrayFloat,5);
  cout<<"ARRAY DE FLOAT'S => ";
  mostrarArray<float>(ArrayFloat,5);
  ordenarAscendentemente<float>(ArrayFloat,0,4);
  cout<<"ARRAY DESPUES DE ORDENARLO ASCENDENTEMENTE => ";
  mostrarArray<float>(ArrayFloat,5);
  ordenarDescendentemente<float>(ArrayFloat,0,4);
  cout<<"ARRAY DESPUES DE ORDENARLO DESCENDENTEMENTE => ";
  mostrarArray<float>(ArrayFloat,5);

  deleteMemoryArray<int>(ArrayEntero);
  deleteMemoryArray<float>(ArrayFloat);
  cin.get();
  return 0;
}