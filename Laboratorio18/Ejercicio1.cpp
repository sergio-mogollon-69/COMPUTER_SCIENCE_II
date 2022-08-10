#include <iostream>
#include <string>

template<int N>
struct SumaDigitos{
  enum{
    value = SumaDigitos<N/10>::value + N%10
  };
};

template<> struct SumaDigitos<0>{
  enum { value = 0 };
};
template<> struct SumaDigitos<1>{
  enum { value = 1 };
};
template<> struct SumaDigitos<2>{
  enum { value = 2 };
};
template<> struct SumaDigitos<3>{
  enum { value = 3 };
};
template<> struct SumaDigitos<4>{
  enum { value = 4 };
};
template<> struct SumaDigitos<5>{
  enum { value = 5 };
};
template<> struct SumaDigitos<6>{
  enum { value = 6 };
};
template<> struct SumaDigitos<7>{
  enum { value = 7 };
};
template<> struct SumaDigitos<8>{
  enum { value = 8 };
};
template<> struct SumaDigitos<9>{
  enum { value = 9 };
};
/*
int sumardigitos(int num){
  if (num<10){
    return num;
  }
  return sumardigitos(num/10)+(num%10); 
}
*/

int main(){
  int suma; 
  suma = SumaDigitos<12345>::value;
  std::cout<<"Suma de digitos de 12345:"<<suma<<std::endl;
  suma = SumaDigitos<9916>::value;
  std::cout<<"Suma de digitos de 9916:"<<suma<<std::endl;
  suma = SumaDigitos<879136>::value;
  std::cout<<"Suma de digitos de 879136:"<<suma<<std::endl;
  return 0;
}

