#include <iostream>

using namespace std;

/*Realizar un programa que lea una velocidad en km/hr y la transforme a
mts/seg.. El programa debe solicitar por pantalla un valor num�rico, el luego
el usuario debe ingresar un valor, finalmente el programa debe mostrar por
pantalla el resultado de la conversi�n.*/


int main()
{
    float Tran,Vel;

    cout << "[CONVERSI�N DE km/hr A mts/seg]" << endl;
    cout << "Ingrese un valor correspondiente a una velocidad" << endl;
    cin >> Vel;

    Tran = (Vel*1000)/(3600);

    cout << Vel << "km/hr son ---> " << Tran << "mts/seg" << endl;


    return 0;
}
