//  SERGIO DANIEL MOGOLLON CACERES CUI 20210689
//  Archivo Cabecera Nodo.h
#ifndef NODO_H
#define NODO_H

class Nodo{
  private:
    int dato;
    Nodo* sig;
  public:
    Nodo(int);
    ~Nodo();
    void setDato(int);
    int getDato() const;
    void setPtrSig(Nodo*);
    Nodo* getPtrSig() const;
};

#endif
