#include <iostream>
using namespace std;

// Declaración de la función mensaje
void cuadrado(int a = 10);  // valor por defecto de la variable

int main() {
    cuadrado(3);  // si no se pone argumento se trabajará con el valor por defecto
    return 0;
}

// Definición de la función mensaje
// Es una función de tipo void que no retorna nada
void cuadrado(int num) {
    cout << num * num << endl;
}
