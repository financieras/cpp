/*
Uso de punteros de punteros para trabajar con matrices de forma dinámica.
La ventaja de usar punteros de punteros radica en la capacidad de crear matrices de tamaño dinámico en tiempo de ejecución. 
Esto permite que la matriz se ajuste a las necesidades del programa y evita la asignación de memoria estática
que puede desperdiciar memoria si no se utiliza completamente.
*/

#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    
    cout << "Ingrese el número de filas: ";
    cin >> rows;
    
    cout << "Ingrese el número de columnas: ";
    cin >> cols;
    
    // Crear un puntero de punteros para la matriz
    int** matrix = new int*[rows];
    
    // Reservar memoria para cada fila
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    
    // Llenar la matriz con valores ascendentes
    int counter = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = counter++;
        }
    }
    
    // Imprimir la matriz
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Liberar la memoria reservada para la matriz
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}