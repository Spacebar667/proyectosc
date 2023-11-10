#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int b[4][4];
    int suma [4][4];

    cout << "Programa para la suma de dos matrices 4x4" << endl;

    cout << "Ingrese los valores de la primera matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite un valor para la primera matriz en la posicion [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Ingrese los valores de la segunda matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite un valor para la segunda matriz en la posicion [" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    for (int i=0; i <4; i++){
        for (int j=0; j <4; j++){
            suma[i][j] = a[i][j] + b [i][j];
        }
    }

    cout << "Primera matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Segunda matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout  << "Matriz resultante de la suma" << endl;

    for (int i=0; i <4; i++){
        for (int j= 0; j <4; j++){
            cout  << suma[i][j]  << " ";
        }
        cout  << endl;
    }

    return 0;
}
