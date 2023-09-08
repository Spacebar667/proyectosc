#include  <iostream>    
using namespace std;

int main ()
{
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    cout<<"Programa para hacer la suma de dos numeros enteros"<<endl;

    for (int i=0; i<2;i++)
    {
        cout <<"Ingrese primer numero: ";
        cin>>numero1;

        cout <<"Ingrese segundo numero: ";
        cin>>numero2;

        resultado = numero1 + numero2;

        cout <<"El resultado de la suma de los dos numeros es: "<<resultado;

        return 0;
    } 
}