#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
class Mascota

{
private:
    string nombre;

public:
    Mascota(/* args */) {
        cout<<"Ha nacido una mascota"<<endl;
        this->nombre = "Caramelo" ;

    }
    ~Mascota() {
        cout<<"Me voy"<<endl;

    }
    void DecirNombre(){
        cout<<"Mi Nombre es:"<<this->nombre<<endl;
    }
    void Comer()
    {
        cout << "Estoy comiendo" << endl;
    }
    void Iniciar(){
        cout<<"Ha nacido una mascota"<<endl;
        this->nombre = "Caramelo" ;
    }

    void Destruir(){
        cout<<"adios"<<endl;
    }

};