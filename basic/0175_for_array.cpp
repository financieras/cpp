#include <iostream>

using namespace std;

int main() {
    int n = 5;      // Número de elementos en el array
    int numeros[n]; // Declaración del array
    int i, a;

    // Entrada de datos: Solicitar al usuario que ingrese valores para el array
    for (i = 0; i < n; i++) {
        cout << "Introduzca un dato: ";
        cin >> a;
        numeros[i] = a; // Almacenar el valor en el array
    }

    cout << endl << "Datos ingresados:" << endl;

    // Salida de datos: Imprimir los valores almacenados en el array
    for (i = 0; i < n; i++) {
        cout << "Elemento en la posición " << i << ": " << numeros[i] << endl;
    }

    return 0;
}