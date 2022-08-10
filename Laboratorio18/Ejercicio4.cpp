#include <iostream>
#include <string>

std::string digito = "0123456789ABCDEF";

template <int base>
void convierteAbase16(int num){
	static_assert(base <= 16);
	if (num) {
		convierteAbase16<base>(num / base);
		std::cout << digito[num % base];
	}
}

int main(){
	std::cout<<"383 = "; convierteAbase16<16>(383);
  std::cout<<std::endl;
  std::cout<<"159 = "; convierteAbase16<16>(159);
  std::cout<<std::endl;
  std::cout<<"499 = "; convierteAbase16<16>(499);
  std::cout<<std::endl;
}
