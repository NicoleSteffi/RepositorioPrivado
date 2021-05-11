#include <iostream>

using namespace std;

/*Confeccionar un programa que calcule la intersección de dos rectas:
y1 = m1 * x + b1
y2 = m2 * x + b2
Realizar un adecuado análisis del problema, entendiendo los posibles
resultados que se puedan generar. Tener en cuenta en ambos casos
seleccionar los tipos de datos más adecuados */

int main()
{
    float m1,b1,m2,b2,X,Y;

    cout << "[CALCULE LA INTERSECCION DE DOS RECTAS]" << endl;
    cout << "Valores de la 1ra recta" << endl;
    cout << "M1: ";
    cin >> m1;
    cout << "B1: ";
    cin >> b1;
    cout << "Valores de la 2da recta" << endl;
    cout << "M2: ";
    cin >> m2;
    cout << "B2: ";
    cin >> b2;

    if (m1 == m2)
    {
        cout << "[Las rectas son paralelas]" << endl;
    }
    else
    {
        X = (b2-b1)/(m1-m2);
        Y = m2*X+b2;

        cout << "El punto de interseccion es: " << "("<<X<<";"<<Y<<")"<< endl;
    }


    return 0;
}
