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
template<typename Type>
Type min(Type* array, int size){//retorna valor minimo de un array
  Type min = array[0];
  for(int i=1;i<size;i++){
    if(array[i]<min)
      min = array[i];
  }
  return min;
}
template<typename Type>
Type max(Type* array,int size){//retorna valor maximo de un array
  Type max = array[0];
  for(int i=1;i<size;i++){
    if(array[i]>max)
      max = array[i];
  }
  return max;
}

int main(){
  int* ArrayEntero = createArray<int>(5);
  float* ArrayFloat = createArray<float>(5);

  insertArray<int>(ArrayEntero,5);
  cout<<"ARRAY DE INT'S => ";
  mostrarArray<int>(ArrayEntero,5);
  cout<<"EL VALOR MINIMO DEL ARRAY ES: "<<min<int>(ArrayEntero,5)<<endl;
  cout<<"EL VALOR MAXIMO DEL ARRAY ES: "<<max<int>(ArrayEntero,5)<<endl;
  
  insertArray<float>(ArrayFloat,5);
  cout<<"ARRAY DE FLOAT'S => ";
  mostrarArray<float>(ArrayFloat,5);
  cout<<"EL VALOR MAXIMO DEL ARRAY ES: "<<min<float>(ArrayFloat,5)<<endl;
  cout<<"EL VALOR MAXIMO DEL ARRAY ES: "<<max<float>(ArrayFloat,5)<<endl;

  deleteMemoryArray<int>(ArrayEntero);
  deleteMemoryArray<float>(ArrayFloat);
  cin.get();
  return 0;
}