#include <iostream>
#include <string>

std::string digito = "01";

template <int base>
void convierte_a_binario(int valor){
	static_assert(base <= 2);
	if (valor){
		convierte_a_binario<base>(valor / base);
		std::cout << digito[valor % base];
	}
}

int main(){
	std::cout<<"156 = "; convierte_a_binario<2>(156);
	std::cout<<std::endl;
	std::cout<<"209 = "; convierte_a_binario<2>(209);
	std::cout<<std::endl;
}