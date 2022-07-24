#include <iostream>
#include <vector>
using namespace std;

struct Componente{
    std::string nombre;
    std::string color;
    Componente(){}
    Componente(std::string nombre,std::string color){
        this->nombre = nombre;
        this->color = color;
    }
    friend ostream& operator<<(ostream& consola, const Componente& estructura);
};
ostream &operator<<(ostream &os, const Componente &componente){
    os<<"[Componente: "<<componente.nombre<<" - Color: "<<componente.color<<"]";
    return os;
}
class Product1{
  public:
    std::vector<Componente> parts;
    void ListParts()const{
        std::cout<<"| Partes del producto |"<<std::endl;
        for(size_t i=0; i<parts.size();i++){
            std::cout<<parts[i]<<"\n";
        }
        std::cout<<"\n";
    }
};
class Builder{
    public:
        virtual ~Builder(){}
        virtual void ProducirCuerpo(std::string,std::string) const = 0;
        virtual void ProducirPuerta(std::string,std::string) const = 0;
        virtual void ProducirLLanta(std::string,std::string) const = 0;
        virtual void ProducirTimon(std::string,std::string) const = 0;
        virtual void ProducirAsiento(std::string,std::string) const = 0;
        virtual void ProducirMotor(std::string,std::string) const = 0;
        virtual void ProducirEspejo(std::string,std::string) const = 0;
        virtual void ProducirVidrio(std::string,std::string) const = 0;
        virtual void Producir4Puertas(std::string) const = 0;
        virtual void Producir4Llantas(std::string) const = 0;
};
class AutomovilBuilder : public Builder{
    private:
        Product1* product;
    public:
        AutomovilBuilder(){
            this->Reset();
        }
        ~AutomovilBuilder(){
            delete product;
        }
        void Reset(){
            this->product= new Product1();
        }
        virtual void ProducirCuerpo(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        }
        void ProducirPuerta(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void ProducirLLanta(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void ProducirTimon(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void ProducirAsiento(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void ProducirMotor(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void ProducirEspejo(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void ProducirVidrio(std::string componente,std::string color)const override{
            Componente temp(componente,color);
            this->product->parts.push_back(temp);
        };
        void Producir4Puertas(std::string color)const override{
                Componente temp1("Puerta 1",color);
                this->product->parts.push_back(temp1);
                Componente temp2("Puerta 2",color);
                this->product->parts.push_back(temp2);
                Componente temp3("Puerta 3",color);
                this->product->parts.push_back(temp3);
                Componente temp4("Puerta 4",color);
                this->product->parts.push_back(temp4);
        }
        void Producir4Llantas(std::string color)const override{
                Componente temp1("Llanta 1",color);
                this->product->parts.push_back(temp1);
                Componente temp2("Llanta 2",color);
                this->product->parts.push_back(temp2);
                Componente temp3("Llanta 3",color);
                this->product->parts.push_back(temp3);
                Componente temp4("Llanta 4",color);
                this->product->parts.push_back(temp4);
        }
        Product1* GetProduct() {
            Product1* result= this->product;
            this->Reset();
            return result;
        }
};
class Director{
    private:
        Builder* builder;
    public:
        void set_builder(Builder* builder){
            this->builder=builder;
        }
        void BuildAutomovilStandard(){
            this->builder->ProducirMotor("Motor","Negro");
            this->builder->ProducirAsiento("Asiento","Azul");
            this->builder->ProducirCuerpo("Cuerpo","Gris");
            this->builder->ProducirEspejo("Espejo 1","Plateado");
            this->builder->ProducirEspejo("Espejo 2","Plateado");
            this->builder->Producir4Llantas("Negro");
            this->builder->ProducirVidrio("Vidrio Izquierdo","Transparente");
            this->builder->ProducirVidrio("Vidrio Derecho","Transparente");
            this->builder->ProducirVidrio("Vidrio Frontal","Transparente");
        }
        void BuildCamioneta(){
            this->builder->ProducirMotor("Motor","Plomo");
            this->builder->ProducirCuerpo("Cuerpo","Gris");
            this->builder->ProducirEspejo("Espejo 1","Plateado");
            this->builder->ProducirEspejo("Espejo 2","Plateado");
            this->builder->ProducirAsiento("Asiento1","Rojo");
            this->builder->ProducirAsiento("Asiento2","Rojo");
            this->builder->ProducirPuerta("Puerta 1","Rojo");
            this->builder->ProducirPuerta("Puerta 2","Rojo");
            this->builder->Producir4Llantas("Negro");
            this->builder->ProducirVidrio("Vidrio Izquierdo","Transparente");
            this->builder->ProducirVidrio("Vidrio Derecho","Transparente");
            this->builder->ProducirVidrio("Vidrio Frontal","Transparente");
        }
};

void ClientCode(Director& director) {
    AutomovilBuilder* builder = new AutomovilBuilder();
    Product1* p;
    director.set_builder(builder);
    while (true){
        int op,op2;
        std::string nombreComponente,color; 
        cout<<"-----------| MENU DE OPCIONES |-----------"<<endl;
        cout<<"[1] Ensamblaje Personalizado"<<endl;
        cout<<"[2] Ensamblaje de un automovil standard"<<endl;
        cout<<"[3] Ensamblaje de una camioneta"<<endl;
        cout<<"[4] Salir"<<endl;
        cout<<"\nIngrese opcion => "; cin>>op;
        if(op==1){
            builder->ProducirCuerpo("Cuerpo","Plomo"); //esqueleto del automovil por defecto
            while(true){
                cout<<"-----------| MENU DE ENSAMBLADO |-----------"<<endl;
                cout<<"[1] Puerta"<<endl;
                cout<<"[2] Llanta"<<endl;
                cout<<"[3] Timon"<<endl;
                cout<<"[4] Asientos"<<endl;
                cout<<"[5] Motor"<<endl;
                cout<<"[6] Espejos"<<endl;
                cout<<"[7] Vidrios"<<endl;
                cout<<"[8] 4 Puertas"<<endl;
                cout<<"[9] 4 Llantas"<<endl;
                cout<<"[10] Salir (Al salir se mostraran los resultados del ensamblaje)"<<endl;
                cout<<"\nIngrese opcion => "; cin>>op2;
                if(op2==1){
                    cout<<"Ingrese Color de puerta: "; cin>>color;
                    builder->ProducirPuerta("Puerta",color);
                }else if(op2==2){
                    cout<<"Ingrese Color de llanta: "; cin>>color;
                    builder->ProducirVidrio("Vidrio",color);
                }else if(op2==3){
                    cout<<"Ingrese Color de timon: "; cin>>color;
                    builder->ProducirTimon("Timon",color);
                }else if(op2==4){
                    cout<<"Ingrese Color de asiento: "; cin>>color;
                    builder->ProducirAsiento("Asiento",color);
                }else if(op2==5){
                    cout<<"Ingrese Color de motor: "; cin>>color;
                    builder->ProducirMotor("Motor",color);
                }else if(op2==6){
                    cout<<"Ingrese Color de espejo: "; cin>>color;
                    builder->ProducirEspejo("Espejo",color);
                }else if(op2==7){
                    cout<<"Ingrese Color de vidrio: "; cin>>color;
                    builder->ProducirVidrio("Vidrio",color);
                }else if(op2==8){
                    cout<<"Ingrese Color de las puertas: "; cin>>color;
                    builder->Producir4Puertas(color);
                }else if(op2==9){
                    cout<<"Ingrese Color de las llantas: "; cin>>color;
                    builder->Producir4Llantas(color);
                }else{
                    break;
                }
            }
            std::cout << "Resultado de ensamblaje personalizado:\n"; 
            p = builder->GetProduct();
            p->ListParts();
            delete p;
        }else if(op==2){
            std::cout << "Ensamblaje de un automovil standard:\n"; 
            director.BuildAutomovilStandard();
            p = builder->GetProduct();
            p->ListParts();
            delete p;
        }else if(op==3){
            std::cout << "Ensamblaje de una camioneta:\n"; 
            director.BuildCamioneta();
            p = builder->GetProduct();
            p->ListParts();
            delete p;
        }else{
            break;
        }
    }
    delete p;
    delete builder;
}

int main(){
    Director* director = new Director();
    ClientCode(*director);
    delete director;
    //system("pause");
    return 0;
}