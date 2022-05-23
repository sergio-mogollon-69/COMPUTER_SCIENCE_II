//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "Ave.h"
#include "Ave.cpp"
#include "Gallina.h"
#include "Gallina.cpp"
#include "Ganzo.h"
#include "Ganzo.cpp"
#include "Pato.h"
#include "Pato.cpp"
using namespace std;

int main(){
  Ave ave1(5.5,40.5,"marron");
  Gallina gallina1(6.5,35.4,"negra");
  Ganzo ganzo1(6.2,38.4,"crema");
  Pato pato1(7.5,37.1,"blanco");  
  ave1.infoAve();
  gallina1.infoAve();
  ganzo1.infoAve();
  pato1.infoAve();
  gallina1.cacarear();
  ganzo1.graznar();
  pato1.graznar();
  ganzo1.Nadar();
  pato1.Nadar();
  return 0;
}