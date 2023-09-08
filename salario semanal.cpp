#include <iostream>
using namespace std;

int main() {
    double salariosemanal,tarifahoraria,numerodehoras;

    cout <<" Ingrese tarifa horaria: ";
    cin >> tarifahoraria;

    cout <<" Ingrese el numero de horas trabajadas: ";
    cin >> numerodehoras;

    salariosemanal = tarifahoraria * numerodehoras * 6; 

    cout << " El salario semanal del trabajador es: " <<salariosemanal <<endl;

    return 0;
    
} 