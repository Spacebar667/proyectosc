#include <iostream>
using namespace std;

int main (){
    float notateoria, notapracticas, notaproblemas, notadefinitiva;

    cout <<"Ingrese la nota de teoria: ";
    cin>> notateoria;

    cout <<"Ingrese la nota de las practicas: ";
    cin>> notapracticas;

    cout <<"Ingrese la nota de los problemas: ";
    cin>> notaproblemas;

    notadefinitiva = (0.3 * notateoria) + (0.3 * notapracticas) + (0.4 * notaproblemas);

    cout<< "La nota definitiva es: "<<notadefinitiva<<endl;

    return 0;
}