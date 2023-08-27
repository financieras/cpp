#include <iostream>

using namespace std;

struct Persona {
    int edad;
    char nombre[50];
    float altura;

    void mostrarDetalles() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Altura: " << altura << " metros" << endl;
    }
};

int main() {
    Persona persona1;
    persona1.edad = 25;
    strcpy(persona1.nombre, "Juan");
    persona1.altura = 1.75;

    persona1.mostrarDetalles();

    return 0;
}

/*
El uso de strcpy es necesario cuando se asigna un valor literal a un arreglo de caracteres en C++,
como se muestra en la línea
strcpy(persona1.nombre, "Juan");

En el ejemplo se usa strcpy para copiar la cadena "Juan" en el arreglo de caracteres nombre.
*/