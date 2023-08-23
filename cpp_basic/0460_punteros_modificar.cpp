#include <iostream>

using namespace std;

int main() {

    // Declarar una variable entera
    int num = 10;

    // Declarar un puntero y asignarle la dirección de memoria de la variable
    int* ptr = &num;

    // Imprimir el valor de la variable y su dirección de memoria utilizando el puntero
    cout << "Valor de la variable: " << *ptr << endl;
    cout << "Dirección de memoria de la variable: " << ptr << endl;

    // Modificar el valor de la variable a través del puntero
    *ptr = 20;

    // Imprimir el nuevo valor de la variable
    cout << "Nuevo valor de la variable: " << num << endl;

    return 0;
}