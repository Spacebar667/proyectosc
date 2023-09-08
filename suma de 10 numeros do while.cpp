#include <iostream>
using namespace std;

int main (){

    int suma = 0;
    int resultado = 0;

    do {
        int numero;
        cout<<"Ingrese un numero: ";
        cin >> numero;
        suma = suma + numero;
        resultado ++;
    }while (resultado <10);

    cout <<"El resultado de la suma de los 10 numeros es: "<<suma<<endl;

    return 0;
}