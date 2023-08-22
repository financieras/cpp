/*
Se declara un arreglo de enteros arr con 5 elementos. 
Luego, se declara un puntero ptr de tipo int* y
 se le asigna la dirección de memoria del primer elemento del arreglo arr
 utilizando el nombre del arreglo sin el operador de referencia &. 
 Para acceder a los elementos del arreglo a través del puntero, 
 se utiliza el operador de desreferencia *. 
 En cada iteración del bucle for, se imprime el valor apuntado por el puntero y
 se incrementa el puntero para apuntar al siguiente elemento del arreglo.
*/


#include <iostream>

using namespace std;

int main() {

    // Declarar un arreglo de enteros
    int arr[] = {1, 2, 3, 4, 5};

    // Declarar un puntero y asignarle la dirección de memoria del primer elemento del arreglo
    int* ptr = arr;

    // Imprimir los elementos del arreglo utilizando el puntero
    cout << "Elementos del arreglo:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    return 0;
}
