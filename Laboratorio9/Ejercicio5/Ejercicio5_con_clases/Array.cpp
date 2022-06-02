//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Array.cpp
#include "Array.h"

template<class Type>
Array<Type>::Array(int _size){
  size = _size;
  _array = new Type[_size];
}
template<class Type>
Array<Type>::~Array(){
  delete[]_array;
  _array=nullptr;
}
template<class Type>
void Array<Type>::insertArray(){
  cout<<"COMENZANDO A LLENAR EL ARRAY..."<<endl;
  for (int i=0; i<size; i++){
    cout<<"Array["<<i<<"]: ";
    cin>>*(_array+i);
  }
}
template<class Type>
void Array<Type>::mostrarArray(){
  for (int i=0; i<size; i++){
    cout<<*(_array+i)<<"  ";
  }
  cout<<endl;
}
template<class Type>
Type* Array<Type>::getArray(){
  return _array;
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
void ordenarAscendentemente(Type* _array, int ini, int fin){// 3 parametros que SOLICITA EL PROBLEMA
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
void ordenarDescendentemente(Type* _array, int ini, int fin){// 3 parametros que SOLICITA EL PROBLEMA
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