#include <iostream>
#include <string>

template<int N>
struct fibonacci{
  enum{ 
    value = (fibonacci<N-1>::value) + (fibonacci<N-2>::value) 
  };
};

template<>
struct fibonacci<0>{
  enum { value = 0 };
};
template<>
struct fibonacci<1>{
  enum { value = 1 };
};
template<>
struct fibonacci<2>{
  enum { value = 1 };
};

/*
// Funcion Recursiva
int fibonacci(int x){//funcion recursiva finaliza cuando llega al caso base
  if(x==0)
    return 0;
  else if((x==1) || (x==2))
    return 1;
  else 
    return fibonacci(x-1)+fibonacci(x-2);
}
*/

int main(){
  int fibo;
  fibo = fibonacci<0>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<1>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<2>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<3>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<4>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<5>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<6>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<7>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<8>::value;
  std::cout<<fibo<<"  ";
  fibo = fibonacci<9>::value;
  std::cout<<fibo<<"  ";
  return 0;
}