//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Rectangulo.cpp
#include "Rectangulo.h"

Rectangulo::Rectangulo(char* _nombreForma,string _color,int X,int Y,int Z,float LM,float lm):
Forma(_nombreForma,_color,X,Y,Z){
  Lmayor = LM;
  Lmenor = lm;
}

Rectangulo::~Rectangulo(){}

void Rectangulo::imprimir(){
  Forma::imprimir();
  cout<<"LADO MAYOR: "<<Lmayor<<"\nLADO MENOR: "<<Lmenor<<endl;
  cout<<"AREA: "<<calcularArea()<<"\nPERIMETRO: "<<calcularPerimetro()<<endl;
}

float Rectangulo::calcularArea(){
  return Lmayor*Lmenor;
}
float Rectangulo::calcularPerimetro(){
  return 2*(Lmayor+Lmenor);
}
void Rectangulo::cambiarTamanio(float factEscala){
  Lmayor *= (factEscala*factEscala); //cambio en el Lmaypr y Lmenor debe dar el doble del area anterior
  Lmenor /= (factEscala);
  cout<<"\nSE CAMBIO EL TAMANIO CON UNA ESCALA DE: "<<factEscala<<"!!!\n";
}