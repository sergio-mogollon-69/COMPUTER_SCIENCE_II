#include "ClaseDisco.h"

ClaseDisco::ClaseDisco(string _titulo,string _autor,string _formato,string _duracion,int _numCanciones,string _genero):
  ClaseMultimedia(_titulo,_autor,_formato,_duracion){
    numeroCanciones = _numCanciones;
    genero = _genero;
}

ClaseDisco::~ClaseDisco(){
}
// setters
void ClaseDisco::setNumCanciones(int _numCanciones){
  numeroCanciones = _numCanciones;
}
void ClaseDisco::setGenero(string _genero){
  genero = _genero;
}
// getters
int ClaseDisco::getNumCanciones(){
  return  numeroCanciones;
}
string ClaseDisco::getGenero(){
  return genero;
}
// metodos
void ClaseDisco::infoDisco(){
  cout<<"\nTITULO: "<<titulo<<"\nAUTOR: "<<autor<<endl;
  cout<<"FORMATO: "<<formato<<"\nDURACION: "<<duracion<<endl;
  cout<<"NUMERO DE CANCIONES: "<<numeroCanciones<<"\nGENERO: "<<genero<<endl;
}