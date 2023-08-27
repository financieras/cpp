#include <iostream>
using namespace std;

// Declaración de la función mensaje
void mensaje(string saludo = "Hola mundo!");  // valor por defecto de la variable

int main() {
    mensaje("Hola");  // si no se pone argumento se imprimirá el valor por defecto
    return 0;
}

// Definición de la función mensaje
// Es una función de tipo void que no retorna nada
void mensaje(string mi_texto) {
    cout << mi_texto << endl;
}
