#include <iostream>
using namespace std;

int main(){
    float base,altura,superficie;

    cout << " Escriba la base del triangulo: ";
    cin>> base;

    cout << " Escriba la altura del triangulo: ";
    cin>> altura;

    superficie = base * altura / 2;

    cout << "La superficie del triangulo es: " <<superficie <<endl;

    return 0;
}