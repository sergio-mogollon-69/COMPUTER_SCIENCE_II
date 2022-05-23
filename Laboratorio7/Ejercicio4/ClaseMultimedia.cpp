#include "ClaseMultimedia.h"

ClaseMultimedia::ClaseMultimedia(string _titulo,string _autor,string _formato,string _duracion){
  titulo = _titulo;
  autor = _autor;
  formato = _formato;
  duracion = _duracion;
}
ClaseMultimedia::~ClaseMultimedia(){
}
// setters
void ClaseMultimedia::setTitulo(string _titulo){
  titulo = _titulo;
}
void ClaseMultimedia::setAutor(string _autor){
  autor = _autor;
}
void ClaseMultimedia::setFormato(string _formato){
  formato = _formato;
}
void ClaseMultimedia::setDuracion(string _duracion){
  duracion = _duracion;
}
// getters
string ClaseMultimedia::getTitulo(){
  return titulo;
}
string ClaseMultimedia::getAutor(){
  return autor;
}
string ClaseMultimedia::getFormato(){
  return formato;
}
string ClaseMultimedia::getDuracion(){
  return duracion;
}
// metodos
void ClaseMultimedia::infoMultimedia(){
  cout<<"\nTITULO: "<<titulo<<"\nAUTOR: "<<autor<<endl;
  cout<<"FORMATO: "<<formato<<"\nDURACION: "<<duracion<<endl;
}