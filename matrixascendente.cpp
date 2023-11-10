#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int i, j, aux;

    cout << "Programa para ordenar números de forma ascendente en una matriz 3x3" << endl;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Digite un valor para a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    if (a[i][j] < a[x][y]) {
                        aux = a[i][j];
                        a[i][j] = a[x][y];
                        a[x][y] = aux;
                    }
                }
            }
        }
    }

    
    cout << "Matriz ordenada:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
