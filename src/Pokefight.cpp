#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <list>
#include <Entrenador.hpp>
#include <Pokebola.hpp>
#include<Arma.hpp>
#include<Enemigo.hpp>


using namespace std;

int main(int argc, char const *argv[])
{


    Ventana ventana;
    Vaca* vaca1 = new Vaca(0,0);
    Enemigo* enemigo = new Enemigo(160,0);
    

    Arma* arma = new Arma();
    Bala* bala = new Bala(0,1);


    list<Dibujo*> dibujos;
    dibujos.push_back(vaca1);
    dibujos.push_back(enemigo);
    dibujos.push_back(bala);

    list<Actualizable*> actualizables;
    actualizables.push_back(vaca1);
    actualizables.push_back(enemigo);
    actualizables.push_back(bala);



   while(true)
   {
        
        int key = getch();
        if (key == 'q'|| key == 'Q')
            break;
       
        if(key == 'a' || key == KEY_LEFT){
            vaca1->DesplazarIzquierda();
        }
        if(key == 'd' || key == KEY_RIGHT){
            vaca1->DesplazarDerecha();
        }
        if(key == 'w' || key == KEY_UP){
            vaca1->DesplazarArriba();
        }
        if(key == 's' || key == KEY_DOWN){
            vaca1->DesplazarAbajo();
        }
        if(key == 'l'){
            arma->Disparar();
        }
        if(key == 'p'){
            bala->CambiarDireccion();
        }

        refresh();
        
         ventana.Actualizar(actualizables);
         ventana.Dibujar(dibujos);
        

    
    }

    


    return 0;

}
