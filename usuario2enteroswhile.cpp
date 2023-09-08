#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, suma;

    do {
        cout << "Ingrese el primer número: ";
        cin >> numero1;

        cout << "Ingrese el segundo número: ";
        cin >> numero2;

        suma = numero1 + numero2;

        cout << "La suma de los dos números es: " << suma << endl;
    } while (false);

    return 0;
}