#include <iostream>

using namespace std;

int main() {
    // Declaración e inicialización de una matriz de enteros
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Acceso y modificación de elementos de la matriz
    cout << "Elemento en la posición (0, 0): " << matriz[0][0] << endl;
    matriz[1][2] = 10;
    cout << "Elemento en la posición (1, 2) después de la modificación: " << matriz[1][2] << endl;

    // Recorriendo la matriz con bucles for
    cout << "\nRecorriendo la matriz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento en la posición (" << i << ", " << j << "): " << matriz[i][j] << endl;
        }
    }

    return 0;
}
