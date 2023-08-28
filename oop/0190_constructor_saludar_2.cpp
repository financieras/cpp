/*
En este caso no vamos a crear un constructor.
Hemos tenido que poner los atributos como públicos para evitar errores
*/

#include <iostream>
#include <string>

using namespace std;

class Persona {

public:
    string nombre;
    int edad;
    // Método Saludar
    void Saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    // Crear un objeto Persona
    Persona persona1;

    // Asignar valores a los miembros
    persona1.nombre = "Juan";
    persona1.edad = 25;

    // Llamar al método Saludar
    persona1.Saludar();

    return 0;
}
