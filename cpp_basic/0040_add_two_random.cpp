#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));     // Initialize random number generator

    // Generar dos números aleatorios enteros en el rango de 1 a 10
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;

    // Sumar los dos números
    int suma = num1 + num2;

    // Mostrar los números generados y la suma
    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;
    cout << "La suma de los dos números es: " << suma << endl;

    return 0;
}

// c++ add_two_random.cpp && ./a.out