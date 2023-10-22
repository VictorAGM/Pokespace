#include<iostream>

using namespace std;

class Pokemon
{
private:
    int salud, ataque, velocidad,Nsalud,Nvelocidad,Nataque;

public:
    

    int RecibirDaño(int salud, int ataque){
        

       Nsalud=(salud-ataque);

        return Nsalud;
    }
    
    int AumentarSalud(int salud,int HabilidadSalud){
        Nsalud=(salud+HabilidadSalud);

        
        return Nsalud;
    }

    

};