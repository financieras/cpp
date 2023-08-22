#include <iostream>

using namespace std;

int main() {
    // Declaración e inicialización de un array de enteros
    int numeros[5] = {1, 2, 3, 4, 5};

    // Acceso y modificación de elementos del array
    cout << "Elemento en la posición 0: " << numeros[0] << endl;
    numeros[2] = 30;
    cout << "Elemento en la posición 2 después de la modificación: " << numeros[2] << endl;

    // Recorriendo el array con un bucle for
    cout << "\nRecorriendo el array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento en la posición " << i << ": " << numeros[i] << endl;
    }

    return 0;
}