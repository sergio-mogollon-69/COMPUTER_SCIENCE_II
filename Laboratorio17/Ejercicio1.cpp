#include <iostream>
#include <string>

template <typename Type>
class Calculadora{
private:
    Type num1;
    Type num2;
public:
    Calculadora(Type n1, Type n2){
      num1 = n1;
      num2 = n2;
    }
    Type suma();
    Type resta();
    Type producto();
    Type division();
};


template <typename Type>
Type Calculadora<Type>::suma() {  
    std::cout << num1 << " - " << num2 << " + " << num1 + num2 << std::endl;
    return num1 + num2; 
}

template <typename Type>
Type Calculadora<Type>::resta() { 
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    return num1 + num2; 
}

template <typename Type>
Type Calculadora<Type>::producto() { 
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    return num1 + num2; 
}
template <typename Type>
Type Calculadora<Type>::division() { 
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
    return num1 + num2; 
}
int Menu(){
    int opcion;
    std::cout << "\t\tCALCULADORA" << std::endl;
    std::cout << "[1] SUMA" << std::endl;
    std::cout << "[2] RESTA" << std::endl;
    std::cout << "[3] MUTIPLICACION" << std::endl;
    std::cout << "[4] DIVISION" << std::endl;
    std::cout << "[5] SALIR" << std::endl;

    std::cin >> opcion;
    return opcion;
}
int main(){
    float a,b;
    std::cout<<"INGRESE UN NUMERO: "; std::cin>>a;
    std::cout<<"INGRESE UN NUMERO: "; std::cin>>b;
    Calculadora<double> calculadora(a,b);
    int opc;
    while(true){
        opc=Menu();
         if(opc==1){
            calculadora.suma();    
        }else if(opc==2){
            calculadora.resta();
        }else if(opc==3){
            calculadora.producto();
        }else if(opc==4){
            calculadora.division();
        }else if(opc==5){
            break;
        }else{
            std::cout<<"Opcion No Valida"<<std::endl;
        }
    } 
    return 0;
}