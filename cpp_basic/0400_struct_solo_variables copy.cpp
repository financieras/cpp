#include <iostream>

using namespace std;

struct Persona {
    int edad;
    char nombre[50];
    float altura;
};

int main() {
    Persona persona1;
    persona1.edad = 25;
    strcpy(persona1.nombre, "Juan");
    persona1.altura = 1.75;

    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Altura: " << persona1.altura << " metros" << endl;

    return 0;
}
