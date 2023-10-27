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
    Entrenador* entrenador = new Entrenador(0,0);
    Enemigo* enemigo = new Enemigo(160,0);
    

    Arma* arma = new Arma();
    Bala* bala = new Bala(0,1);


    list<Dibujo*> dibujos;
    dibujos.push_back(entrenador);
    dibujos.push_back(enemigo);
    dibujos.push_back(bala);

    list<Actualizable*> actualizables;
    actualizables.push_back(entrenador);
    actualizables.push_back(enemigo);
    actualizables.push_back(bala);



   while(true)
   {
        
        int key = getch();
        if (key == 'q'|| key == 'Q')
            break;
       
        if(key == 'a' || key == KEY_LEFT){
            entrenador->DesplazarIzquierda();
        }
        if(key == 'd' || key == KEY_RIGHT){
            entrenador->DesplazarDerecha();
        }
        if(key == 'w' || key == KEY_UP){
            entrenador->DesplazarArriba();
        }
        if(key == 's' || key == KEY_DOWN){
            entrenador->DesplazarAbajo();
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
