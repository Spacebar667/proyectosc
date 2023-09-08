#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{
    float peso;
    float altura;
    float resultado;

    cout <<"Programa para calcular el indice y masa corporal"<<endl;

    cout <<"Ingrese su peso en (kg): ";
    cin >> peso;

    cout <<"Ingrese su altura: ";
    cin >> altura;

    resultado = (peso / pow (altura,2));

    cout <<"Su Indice corporal es el siguiente: "<<setprecision(4)<<resultado<<" kg/m^2";

    return 0;
}