//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Principal
#include <iostream>
#include "ClaseMultimedia.h"
#include "ClaseMultimedia.cpp"
#include "ClaseDisco.h"
#include "ClaseDisco.cpp"
using namespace std;

int main(){
  ClaseMultimedia multimedia1("multimedia_1","Sergio","mp4","30");
  ClaseDisco disco1("disco_1","Daniel","mp3","18",15,"rock");
  multimedia1.infoMultimedia();
  disco1.infoDisco();
  cin.get();
  return 0;
}