#include <iostream>
using namespace std;

int main() {
    float perimetro, radio, area;
    const double PI = 3.141592;

    cout << " Escriba el radio del circulo: ";
    cin >> radio;

    perimetro = 2 * PI * radio; 
    
    area = PI * radio * radio; 

    cout << " El perimetro del circulo es: " <<perimetro << endl;
    cout << " El area del circulo es: " <<area << perimetro <<endl; 

    return 0;
}