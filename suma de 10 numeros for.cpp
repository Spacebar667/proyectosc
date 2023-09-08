#include <iostream>
using namespace std;

int main (){

    int suma = 0;

    for (int i=0; i<10; i++)
    {
        int resultado;
        cout <<"Ingrese un numero: ";
        cin>> resultado;
        suma = suma + resultado;
    }

    cout <<"La suma de los 10 numeros es: "<<suma<<endl;

     return 0;
}