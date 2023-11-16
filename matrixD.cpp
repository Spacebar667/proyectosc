#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int w[4][4];
    int h[4][4];
    int b[4];
    int c[4];
    int y[4];
    int z[4];
    int n[4] = {0};
    int m[4] = {0};
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Ingrese un valor para la primera matriz: ";
            cin >> a[i][j];
        }
    }

    cout << "\n";

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Ingrese un valor para la segunda matriz: ";
            cin >> w[i][j];
        }
    }
    
    cout << "\n";

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Ingrese un valor para la tercera matriz: ";
            cin >> h[i][j];
        }
    }

    for (j = 0; j < 4; j++) {
        b[j] = a[2][j];
    }

    for (j = 0; j < 4; j++) {
        c[j] = a[1][j];
    }

    for (j = 0; j < 4; j++) {
        y[j] = w[j][1]; 
    }

    for (j = 0; j < 4; j++) {
        z[j] = w[j][3];
    }

    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << h[i][j] << " ";
            if (h[i][j] % 2 == 0){
                n[j] = h[i][j];
            }
            else {
                m[j] = h[i][j];
            }
        }
        cout << endl;
    }

    
    cout << "Primera Matriz que ingreso: " << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << a[i][j] << "  ";
        }
        cout << " \n ";
    }

    cout << "Segunda Matriz que ingreso: " << endl;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << w[i][j] << "  ";
        }
        cout << " \n ";
    }

    cout << "Tercera Matriz que ingreso: " << endl;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << h[i][j] << "  ";
        }
        cout << " \n ";
    }

    cout << "Matriz resultante (b): " << endl;
    cout << " \n  ";
    for (j = 0; j < 4; j++)
        cout << b[j] << "  ";

    cout << " \n ";
    cout << "Matriz resultante (c): " << endl;
    cout << " \n  ";
    for (j = 0; j < 4; j++)
        cout << c[j] << "  ";

    cout << " \n ";
    cout << "Matriz resultante (y): " << endl;
    cout << " \n  ";
    for (j = 0; j < 4; j++)
        cout << y[j] << "  ";

    cout << " \n ";
    cout << "Matriz resultante (z): " << endl;
    cout << " \n  ";
    for (j = 0; j < 4; j++)
        cout << z[j] << "  ";
        
	cout << " \n ";
    cout << "Matriz resultante (n): " << endl;
    cout << " \n  ";
    for (j = 0; j < 4; j++)
        cout << n[j] << "  ";
        
	cout << " \n ";
    cout << "Matriz resultante (m): " << endl;
    cout << " \n  ";
    for (j = 0; j < 4; j++)
        cout << m[j] << "  ";

    return 0;
}
