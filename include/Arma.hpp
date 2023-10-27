#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>
using namespace std;

class Arma : public Dibujo
{
private:
    int numeroDisparos;
public:
    Arma() : Dibujo("Pokebola")
    {
        this->numeroDisparos = 5;
    }
    ~Arma() {}
    void Actualizar(){

    }
    void Recargar(){
        this->numeroDisparos = 5;
    }
    void Disparar(){
        if(this->numeroDisparos >0){
            this->numeroDisparos -=1;
        }
    }
};