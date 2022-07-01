#include <iostream>
using namespace std;

class Tienda{
  private:
    int filas;
    string** ptrTienda;
    //metodos privados
    string** createMatriz(int,int);
    void iniciarMatriz();
    void instanciarTabla();
    void deleteMemoryMatriz(string**,int);
    void mostrarMatriz(string**,int,int);
  public:
    Tienda();
    ~Tienda();
    void darDeAltaUnProducto(string,string,string,string);
    void darDeBajaUnProducto(string); //codigo
    void buscarProductoPorCodigo(string); //codigo
    void buscarProductoPorNombre(string); //nombre
    void modificarNombre(string);//nombre
    void modificarPrecio(string);//precio
    void modificarStock(string);//stock
    void mostrarProductos();
};

Tienda::Tienda(){
  this->filas = 0;
  this->instanciarTabla();
}
Tienda::~Tienda(){
  for(int i=0; i<(this->filas); i++){
    delete[] ptrTienda[i];
  }
  delete[] ptrTienda;
  ptrTienda = nullptr;
  cout<<"Memoria Liberada..."<<endl;
}

string** Tienda::createMatriz(int f,int c){
  string **_matriz = new string*[f];
  for(int i=0; i<f; i++){
    _matriz[i] = new string[c];
  }
  return _matriz;
}
void Tienda::iniciarMatriz(){
  *(*(ptrTienda+(0))+0) = "Codigo";
  *(*(ptrTienda+(0))+1) = "Nombre    ";
  *(*(ptrTienda+(0))+2) = "Precio";
  *(*(ptrTienda+(0))+3) = "Stock";
  *(*(ptrTienda+(0))+4) = "Estado";
}
void Tienda::mostrarMatriz(string** _matriz, int f, int c){
  for(int i=0; i<f; i++){
    for(int j=0; j<c; j++){
      cout<<*(*(_matriz+i)+j)<<"\t";
    }
    cout<<endl;
  }
  cout<<endl;
}
void Tienda::deleteMemoryMatriz(string** _matriz, int f){
  for(int i=0; i<f; i++){
    delete[] _matriz[i];
  }
  delete[] _matriz;
  _matriz = nullptr;
}

void Tienda::instanciarTabla(){
  (this->filas)++;
  this->ptrTienda = createMatriz(1,5);
  iniciarMatriz();
}

void Tienda::darDeAltaUnProducto(string codigo,string nombre,string precio,string stock){
  string** matrizTemp = createMatriz(this->filas,5);
  for(int i=0; i<filas; i++){
    for(int j=0; j<5; j++){
      *(*(matrizTemp+i)+j) = *(*(ptrTienda+i)+j);
    }
  }
  deleteMemoryMatriz(ptrTienda,filas);
  (this->filas)++;
  this->ptrTienda = createMatriz(this->filas,5);
  for(int i=0; i<filas-1; i++){
    for(int j=0; j<5; j++){
      *(*(ptrTienda+i)+j) = *(*(matrizTemp+i)+j);
    }
  }
  *(*(ptrTienda+(filas-1))+0) = codigo;
  *(*(ptrTienda+(filas-1))+1) = nombre;
  *(*(ptrTienda+(filas-1))+2) = precio;
  *(*(ptrTienda+(filas-1))+3) = stock;
  *(*(ptrTienda+(filas-1))+4) = "Activo";
  mostrarMatriz(ptrTienda,this->filas,5);
}

void Tienda::darDeBajaUnProducto(string codigo){
  for(int i=1; i<filas; i++){
    if(*(*(ptrTienda+i)+0)==codigo){
      *(*(ptrTienda+i)+4) = "Desactivo";
      *(*(ptrTienda+i)+3) = "0";
      return;
    }
  }
}
void Tienda::buscarProductoPorCodigo(string codigo){
  for(int i=1; i<filas; i++){
    if(*(*(ptrTienda+i)+0)==codigo){
      cout<<"Producto encontrado!!!"<<endl;
      for(int j=0; j<5; j++){
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      }
      cout<<endl;
      return;
    }
  }
  cout<<"Producto no encontrado!!!"<<endl;
}

void Tienda::buscarProductoPorNombre(string nombre){
  for(int i=1; i<filas; i++){
    if(*(*(ptrTienda+i)+1)==nombre){
      cout<<"Producto encontrado!!!"<<endl;
      for(int j=0; j<5; j++){
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      }
      cout<<endl;
      return;
    }
  }
  cout<<"Producto no encontrado!!!"<<endl;
}
void Tienda::modificarNombre(string codigo){
  string nombrenuevo;
  for(int i=1; i<filas; i++){
    if(*(*(ptrTienda+i)+0)==codigo){
      cout<<"Producto Encontrado: "<<endl;
      for(int j=0; j<5; j++)
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      cout<<"\nIngrese nuevo nombre de producto: "; cin>>nombrenuevo;
      *(*(ptrTienda+i)+1) = nombrenuevo;
      cout<<"Producto Modificado: "<<endl;
      for(int j=0; j<5; j++)
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      cout<<endl;
      return;
    }
  }
  cout<<"Producto no encontrado no se realizaron modificaciones!!!"<<endl;
}
void Tienda::modificarPrecio(string codigo){
  string precionuevo;
  for(int i=1; i<filas; i++){
    if(*(*(ptrTienda+i)+0)==codigo){
      cout<<"Producto Encontrado: "<<endl;
      for(int j=0; j<5; j++)
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      cout<<"\nIngrese nuevo precio de producto: "; cin>>precionuevo;
      *(*(ptrTienda+i)+2) = precionuevo;
      cout<<"Precio de producto Modificado: "<<endl;
      for(int j=0; j<5; j++)
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      cout<<endl;
      return;
    }
  }
  cout<<"Producto no encontrado no se realizaron modificaciones!!!"<<endl;
}
void Tienda::mostrarProductos(){
  mostrarMatriz(ptrTienda,filas,5);
}

void Tienda::modificarStock(string codigo){
  string stocknuevo;
  for(int i=1; i<filas; i++){
    if(*(*(ptrTienda+i)+0)==codigo){
      cout<<"Producto Encontrado: "<<endl;
      for(int j=0; j<5; j++)
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      cout<<"\nActualice stock de producto: "; cin>>stocknuevo;
      *(*(ptrTienda+i)+3) = stocknuevo;
      cout<<"Stock de producto Modificado: "<<endl;
      for(int j=0; j<5; j++)
        cout<<*(*(ptrTienda+i)+j)<<"\t";
      cout<<endl;
      return;
    }
  }
  cout<<"Producto no encontrado no se realizaron modificaciones!!!"<<endl;
}

int main(){
  int op,val;
  string codigo,nombre,precio,stock;
  Tienda tienda;
  tienda.darDeAltaUnProducto("100","camisa_peru","45.00","90");
  tienda.darDeAltaUnProducto("110","pantalon_10","56.00","80");
  tienda.darDeAltaUnProducto("120","bermudas_xx","38.00","55");
  tienda.darDeAltaUnProducto("130","polo_zzzzzz","45.00","90");
  tienda.darDeAltaUnProducto("140","camisa_4545","48.00","80");
  tienda.darDeAltaUnProducto("150","medias_tttt","25.00","72");
  tienda.darDeAltaUnProducto("160","polera_xxxx","65.00","42");
  tienda.darDeAltaUnProducto("170","chaleco_123","39.00","73");
  tienda.darDeAltaUnProducto("180","polo_123456","44.00","95");
  // tienda.darDeAltaUnProducto("190","camiseta_99","29.00","99");
  do{
    cout<<"------------LABORATORIO 14 (TIENDA) ------------"<<endl;
    cout<<"[1] Mostrar Productos"<<endl;
    cout<<"[2] Dar de alta un producto nuevo"<<endl;
    cout<<"[3] Dar de baja un producto"<<endl;
    cout<<"[4] Buscar un producto por nombre"<<endl;
    cout<<"[5] Buscar un producto por codigo"<<endl;
    cout<<"[6] Modificar nombre de un producto"<<endl;
    cout<<"[7] Modificar precio de un producto"<<endl;
    cout<<"[8] Modificar cantidad(stock) de un producto"<<endl;
    cout<<"[9] Salir"<<endl;
    cout<<"\nIngrese una opcion [1-9] ==> ";
    cin>>op;
    if(op==1){
      tienda.mostrarProductos();
    }else if(op==2){
      cout<<"INGRESE CODIGO: "; cin>>codigo;
      cout<<"INGRESE NOMBRE DEL PRODUCTO: "; cin>>nombre;
      cout<<"INGRESE PRECIO: "; cin>>precio;
      cout<<"INGRESE STOCK: "; cin>>stock;
      tienda.darDeAltaUnProducto(codigo,nombre,precio,stock);
      cout<<"PRODUCTO REGISTRADO EXITOSAMENTE !!!"<<endl;
    }else if(op==3){
      tienda.mostrarProductos(); cout<<endl;
      cout<<"INGRESE CODIGO: "; cin>>codigo;
      tienda.darDeBajaUnProducto(codigo);
    }else if (op==4){
      tienda.mostrarProductos(); cout<<endl;
      cout<<"INGRESE NOMBRE DE PRODUCTO: "; cin>>nombre;
      tienda.buscarProductoPorNombre(nombre);
    }else if (op==5){
      tienda.mostrarProductos(); cout<<endl;
      cout<<"INGRESE CODIGO: "; cin>>codigo;
      tienda.buscarProductoPorCodigo(codigo);
    }else if (op==6){
      tienda.mostrarProductos(); cout<<endl;
      cout<<"INGRESE CODIGO DEL PRODUCTO A MODIFICAR: "; cin>>codigo;
      tienda.modificarNombre(codigo);;
    }else if (op==7){
      tienda.mostrarProductos(); cout<<endl;
      cout<<"INGRESE CODIGO DEL PRODUCTO A MODIFICAR: "; cin>>codigo;
      tienda.modificarPrecio(codigo);
    }else if (op==8){
      tienda.mostrarProductos(); cout<<endl;
      cout<<"INGRESE CODIGO DEL PRODUCTO A MODIFICAR: "; cin>>codigo;
      tienda.modificarStock(codigo);
    }
    cout<<"Presione Enter para continuar...";
    cin.get(); cin.get();//pausa el sistema momentaneamente
    system("cls");
  }while(op<=8 && op>0);
  return 0;
}