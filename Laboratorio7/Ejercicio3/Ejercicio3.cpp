#include <iostream>
#include "ProductoBancario.h"
#include "ProductoBancario.cpp"
#include "Cuenta.h"
#include "Prestamo.h"
#include "CuentaJoven.h"
#include "Hipoteca.h"
#include "Cuenta.cpp"
#include "Prestamo.cpp"
#include "CuentaJoven.cpp"
#include "Hipoteca.cpp"
using namespace std;

int main(){
  CuentaJoven CuentaJoven1(1200.5,8);
  Hipoteca Hipot(6);
  CuentaJoven1.imprimir();
  Hipot.imprimir();
  cin.get();
  return 0;
}