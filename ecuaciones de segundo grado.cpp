#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;
    
    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        
        cout << "Las soluciones son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "La solución doble es: x = " << x << endl;
    } else {
        cout << "La ecuación no tiene soluciones reales." << endl;
    }

    return 0;
}
