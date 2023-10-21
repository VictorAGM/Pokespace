#include <iostream>
#include <Mascota.hpp>

using namespace std;

int main(int argc, char const *argv[])
{

    Mascota m1;
    Mascota m2;
    cout << "Inicio del Programa" << endl;
    m1.Comer();
    m2.Comer();

    cout << "Tipos de datos" << endl;
    cout << "int" << sizeof(int) << endl;
    cout << "char" << sizeof(char) << endl;
    cout << "bool" << sizeof(bool) << endl;
    cout << "float" << sizeof(float) << endl;
    cout << "double" << sizeof(double) << endl;
    cout << "Mascota" << sizeof(Mascota) << endl;

    int a = 4;
    cout << "Direcciones de memoria" << endl;
    cout << "tamaño" << sizeof(a) << endl;
    cout << "contenido" << a << endl;
    cout << "direccion" << &a << endl;

    // C Memoria dinamica
    cout << "Mascota en c:" << endl;
    Mascota *mascotaC = (Mascota *)malloc(sizeof(Mascota));

    mascotaC->Iniciar();
    mascotaC->DecirNombre();
    mascotaC->Destruir();
    free(mascotaC);

    // C++
    cout << "Mascota en C++:" << endl;
    Mascota *mascotaCPP = new Mascota();
    mascotaCPP->DecirNombre();
    delete mascotaCPP;

    return 0;
}
