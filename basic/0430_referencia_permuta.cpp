#include <iostream>

using namespace std;

// Función para intercambiar dos números enteros
void permutar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Antes del intercambio:   num1 = " << num1 << ", num2 = " << num2 << endl;

    // Llamamos a la función de intercambio utilizando referencias
    permutar(num1, num2);

    cout << "Después del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}