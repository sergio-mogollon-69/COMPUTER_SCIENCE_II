#include "iostream"
template <class T>//Uso de plantilla
//Clase Contenedor: que funcionará con el tipo de dato T
class Contenedor {
    T elemento;//atributo
    public:
    Contenedor (T arg) {//constructor con elementos
        elemento=arg;
    }
    T add() {//Función de agregar o sumar +1 a "elemento"
        return ++elemento;
    }
};

template<>
//uso de plantilla especial
/* Clase "Contenedor" para trabajar con elementos de tipo char */
class Contenedor<char> {
    char elemento;
    public:
    Contenedor (char arg){//constructor
        elemento = arg;
    }
    /* En el caso anterior se sumaba +1 al "elemento", en este caso se pasara el dato de tipo CHAR a MAYÚSCULA */
    char uppercase(){
        //Las condicionales estan trabajando con el código ASCII
        if ((elemento >= 'a') && (elemento <= 'z'))//Solo usará el abecedario completo en minúscula, va del 97 al 122
        {
            elemento +='A'-'a';//(97-65)-> elemento -=32--> Esto lo pasa a su mayúscula respectiva en el codigo ASCI
        }
        return elemento;//retorna elemento
    }
};

int main(){
    Contenedor<int> cint(10); //<int> especifica el tipo de dato
    Contenedor<char> cchar('s');//se puede introducir cualquier dato
    //<char> especifica el tipo de dato
    std::cout << cint.add()<<std::endl;//uso de método de clase Contenedor con (template <class T>)
    std::cout << cchar.uppercase() << std::endl;//uso de método de clase Contenedor<char>
    return 0;
}