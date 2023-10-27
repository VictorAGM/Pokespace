#pragma once 
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include<Arma.hpp>


class Enemigo : public Dibujo, public Actualizable
{
private:
    Arma* arma;
public:
    Enemigo() : Dibujo("Charizard"){
    }

    Enemigo(int x, int y) : Dibujo(x,y,"Charizard"){
    }
    
    void Actualizar()
    {
       
    }

    ~Enemigo(){}
};

