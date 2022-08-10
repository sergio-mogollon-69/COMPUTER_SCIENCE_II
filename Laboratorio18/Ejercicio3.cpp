#include <iostream>
#include <string>
/*
double potencia(int x, int y){
	if (y==0)
		return 1;
	else
		return x*(potencia(x,y-1));
}
*/

template<typename... Ts>
struct TypeList{ };
using BaseExponente = TypeList<int,int>; //Metaprogramacion: Lista de tipos

template<typename t>
struct Potencia{
  t res;
  Potencia(t x, t y){
    res = potencia(x,y);
  }
  t potencia(t x, t y){
		  return (y==0)? 1 : x*(potencia(x,y-1));
  }
};

int main(){
  Potencia<int> potencia(2,5);
  std::cout<<"Resultado: "<< potencia.res;
  return 0;
}