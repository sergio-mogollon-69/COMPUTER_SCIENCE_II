#include <iostream>
#include <string>

template<int n>
struct factorial{
  enum{
    value = n*factorial<n-1>::value
  };
  
};

template<>
struct factorial<0>{
  enum {value = 1};
};

int main(){
  int x = factorial<4>::value;
  std::cout<<x<<std::endl;
  return 0;
}