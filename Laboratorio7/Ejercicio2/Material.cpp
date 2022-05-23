//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Material.cpp
#include "Material.h"

Material::Material(){}
Material::~Material(){}

void Material::setMaterial(string _material){
  material = _material;
}
string Material::getMaterial(){
  return material;
}