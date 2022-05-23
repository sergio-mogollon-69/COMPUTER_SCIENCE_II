//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Color.cpp
#include "Color.h"

Color::Color(){}
Color::~Color(){}

void Color::setColor(int _R,int _G,int _B){
  R = _R;
  G = _G;
  B = _B;
  if(R==255 && G==255 && B==255)  color = "blanco";
  if(R==0 && G==0 && B==0)  color = "negro";
  if(R==255 && G==0 && B==0)  color = "rojo";
  if(R==0 && G==255 && B==0)  color = "verde";
  if(R==0 && G==0 && B==255)  color = "azul";
  if(R==255 && G==255 && B==0)  color = "amarillo";
  if(R==0 && G==255 && B==255)  color = "celeste";
  if(R==255 && G==0 && B==255)  color = "rosa";
  if(R==255 && G==127 && B==0)  color = "anaranjado";
  if(R==106 && G==255 && B==0)  color = "verde claro";
  if(R<0 || G<0 || B<0)   cout<<"DEBE INGRESAR CANTIDADES ENTRE 0 Y 255";
}

string Color::getColor(){
  return color;
}
