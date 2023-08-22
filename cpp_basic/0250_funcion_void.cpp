#include <iostream>
using namespace std;

// Declaración de la función mensaje
void mensaje();

int main() {
    mensaje();  // Llamada a la función mensaje
    return 0;
}

// Definición de la función mensaje
// Es una función de tipo void que no retorna nada
void mensaje() {
    cout << "Hola mundo!" << endl;
}
