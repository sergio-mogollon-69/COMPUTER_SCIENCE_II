//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Header Array.h
#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
using namespace std;

template<class Type>
class Array{
  private:
    Type* _array;
    int size;
  public:
    Array(int);
    ~Array();
    void insertArray();
    void mostrarArray();
    Type* getArray();
};

#endif