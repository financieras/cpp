#include <iostream>

using namespace std;

int main() {
    // Declaración e inicialización de un array de enteros
    int numeros[] = {10, 20, 30, 40, 50};

    // Obtener la longitud del array
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    // Recorrer el array utilizando un bucle while
    int i = 0;
    while (i < longitud) {
        cout << "Elemento en la posición " << i << ": " << numeros[i] << endl;
        i++;
    }

    return 0;
}