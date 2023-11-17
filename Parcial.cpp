//Script for haking the NASA 
// Simon dice: Tenemos una matriz F 3 x 4 que se descarga en un vector B, el vector B se carga en dos partes: columna 1 y dos; el vector C se carga con la fila 1, la fila 2 y por ultimo la fila 0 (En orden)
// El vector D (6 cajones) debe sumar los vectores A y B
// La matriz E (4 x 4) debe descargar los 8 numeros pares que encuentre en el vector H, y los 8 impares que encuentre en el vector W
// Matriz Z (4 x 4) debera cargar el vector X con los primeros 4 numeros multiplos de 5, y el Vector Y con los primeros 4 numeros multiplos de 9, Finalmente un vector U debera cargar los dos vectores anteriores

#include <iostream>
using namespace std;

int main() {
    int F[3][4], E[4][4], Z[4][4];
    int b[6], c[12], d[6], h[8] = {0}, w[8] = {0}, x[4], y[4], u[8];
    int i, j;

    // Matriz F
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Digite un valor para la Matriz F: ";
            cin >> F[i][j];
        }
    }

   
    j = 0; // Columna 1 de la matriz F
    for (i = 0; i < 3; i++) {
        b[i] = F[i][j];
    }

    j = 2; // Columna 3 de la matriz F
    for (i = 3; i < 6; i++) {
        b[i] = F[i - 3][j];
    }

    // Arreglo C Matriz F
    i = 1;
    for (j = 0; j < 4; j++) {
        c[j] = F[i][j];
    }

    i = 2;
    for (j = 4; j < 8; j++) {
        c[j] = F[i][j - 4];
    }

    i = 0;
    for (j = 8; j < 12; j++) {
        c[j] = F[i][j - 8];
    }

    // Arreglo D Matriz F
    for (i = 0; i < 6; i++) {
        d[i] = b[i] + c[i];
    }

    // Matriz E
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Digite un valor para la Matriz E: ";
            cin >> E[i][j];
        }
    }

    int count_pares = 0, count_impares = 0;

    // Vectores H y W
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (E[i][j] % 2 == 0 && count_pares < 8) {
                h[count_pares] = E[i][j];
                count_pares++;
            } else if (E[i][j] % 2 != 0 && count_impares < 8) {
                w[count_impares] = E[i][j];
                count_impares++;
            }
        }
    }
	
	//Matriz Z
	
		for (i = 0; i < 4; i++) {
	        for (j = 0; j < 4; j++) {
	            cout << "Digite un valor para la Matriz Z: ";
	            cin >> Z[i][j];
	        }
    	}
		
		
		//Vectores X y Y
		
		int count_mul5 = 0, count_mul9 = 0;

    // Vectores H y W
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (Z[i][j] % 5 == 0 && count_mul5 < 4) {
                x[count_mul5] = Z[i][j];
                count_mul5++;
            } else if (Z[i][j] % 9 == 0 && count_mul9 < 4) {
                y[count_mul9] = Z[i][j];
                count_mul5++;
            }
        }
    }
		
		//Arreglo U
		
		
    


    for (j = 4; j < 8; j++) {
        c[j] = F[i][j - 4];
    }
		
		
		
		
		
		
		
			// Impresión de la matriz F
		cout << "Matriz F:" << endl;
		for (i = 0; i < 3; i++) {
		    for (j = 0; j < 4; j++)
		        cout << F[i][j] << "  ";
		    cout <<"\n";
		}
		
		// Impresión del vector B
		cout << "Vector B:" << endl;
		for (i = 0; i < 6; i++)
		    cout << b[i] << "  ";
		cout << endl;
		
		// Impresión del vector C
		cout << "Vector C:" << endl;
		for (j = 0; j < 12; j++)
		    cout << c[j] << "  ";
		cout << endl;
		
		// Impresión del vector D
		cout << "Vector D:" << endl;
		for (i = 0; i < 6; i++)
		    cout << d[i] << "  ";
		cout << endl;
		
		// Impresión de la matriz E
		cout << "Matriz E:" << endl;
		for (i = 0; i < 4; i++) {
		    for (j = 0; j < 4; j++)
		        cout << E[i][j] << "    ";
		    cout <<"\n";
		}
		
		// Impresión del vector H
		cout << "Vector H:" << endl;
		for (j = 0; j < 8; j++)
		    cout << h[j] << "    ";
		cout << endl;
		
		// Impresión del vector W
		cout << "Vector W:" << endl;
		for (j = 0; j < 8; j++)
		    cout << w[j] << "    ";
		
		//Impresion Matriz Z
		cout << "Matriz Z:" << endl;
		for (i = 0; i < 4; i++) {
		    for (j = 0; j < 4; j++)
		        cout << [i][j] << "    ";
		    cout <<"\n";
		}
		
		// Impresión del vector x
		cout << "Vector X:" << endl;
		for (j = 0; j < 8; j++)
		    cout << X[j] << "    ";
		cout << endl;
		
		// Impresión del vector y
		cout << "Vector Y:" << endl;
		for (j = 0; j < 8; j++)
		    cout << Y[j] << "    ";
		
		return 0;
		
	}

