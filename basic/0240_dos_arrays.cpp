#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    const int SIZE = 5;
    int arr1[SIZE];
    double arr2[SIZE];

    // Generar números aleatorios sin repetición entre 2 y 9
    srand(time(0));                 // inicializar la semilla
    for (int i = 0; i < SIZE; i++) {
        int num;
        bool isDuplicate;
        do {
            num = rand() % 8 + 2;
            isDuplicate = false;
            for (int j = 0; j < i; j++) {
                if (arr1[j] == num) {
                    isDuplicate = true;
                    break;
                }
            }
        } while (isDuplicate);
        arr1[i] = num;
    }

    // Calcular raíz cuadrada de los números del primer arreglo
    for (int i = 0; i < SIZE; i++) {
        arr2[i] = sqrt(arr1[i]);
    }

    // Imprimir los números del primer arreglo y sus raíces cuadradas
    for (int i = 0; i < SIZE; i++) {
        cout << arr1[i] << " -> " << arr2[i] << endl;
    }

    return 0;
}