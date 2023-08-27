/*
Sin usar la librería string, convertir e imprimir una palabra todo en mayúsculas
*/

#include <iostream>

// al decir vanilla queremos decir sin usar la librería string

using namespace std;

int main() {
    // Declaración e inicialización de un string
    char palabra[] = "Hola";

    // Obtener la longitud del string
    int longitud = sizeof(palabra) - 1;

    // Convertir todos los caracteres a mayúsculas
    for (int i = 0; i < longitud; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] = palabra[i] - 32;
        }
    }

    // Imprimir el string convertido a mayúsculas
    cout << "Palabra en mayúsculas: " << palabra << endl;

    return 0;
}
