#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Establecer el número de filas y columnas
    int row = 4;
    int col = 5;

    // Declaración de la matriz
    int matriz[row][col];

    // Generar números aleatorios y rellenar la matriz
    srand(time(0));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matriz[i][j] = rand() % 90 + 10; // Números aleatorios de dos dígitos
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Calcular la suma de todos los elementos de la matriz
    int suma = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            suma += matriz[i][j];
        }
    }

    // Imprimir la suma
    cout << "\nLa suma de todos los elementos de la matriz es: " << suma << endl;

    return 0;
}
