#include<iostream>

using namespace std;

class Pokemon
{
private:
    int salud, ataque, velocidad,Nsalud,Nvelocidad,Nataque;
    string NombreAtaque;
public:

    int RecibirDano(int salud, string NombreAtaque){
        

       Nsalud=(salud-2);
        cout<<"Recibiste"<<NombreAtaque<<endl;
        return Nsalud;
    }
    
    int AumentarSalud(int salud,string NombreAtaque){
        Nsalud=(salud+5);
        cout<<"Te has regenerado +5 pts "<<endl;
        return Nsalud;
    }

    

};