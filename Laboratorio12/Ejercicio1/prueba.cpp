#include <iostream>
using namespace std;

int len(char* arr){
  int longitud = 0;
  while(*arr != '\0'){
    arr++;
    longitud++;
  }
  return longitud;
}
int len2(char* c){
  char* aux = c;
  while(*aux++ != '\0');
  return aux-c-1;
}


int main(){  
  char cadena[] = "hola";
  char* ptr = &cadena[0];
  cout<<len2(cadena)<<endl;
  return 0;
}