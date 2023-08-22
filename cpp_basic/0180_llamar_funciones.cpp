#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROW = 4; // Número de filas de la matriz
const int COL = 5; // Número de columnas de la matriz

// Función para generar la matriz con números aleatorios
void generarMatriz(int matriz[ROW][COL]) {
    srand(time(0));
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = rand() % 90 + 10; // Números aleatorios de dos dígitos
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int matriz[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para sumar los elementos de la matriz
int sumarMatriz(int matriz[ROW][COL]) {
    int suma = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            suma += matriz[i][j];
        }
    }
    return suma;
}

int main() {
    // Declaración de la matriz
    int matriz[ROW][COL];

    generarMatriz(matriz);
    imprimirMatriz(matriz);

    int suma = sumarMatriz(matriz);

    cout << "\nLa suma de todos los elementos de la matriz es: " << suma << endl;

    return 0;
}
