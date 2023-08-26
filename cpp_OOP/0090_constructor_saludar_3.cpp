/*
En este caso no vamos a crear un constructor.
Si nos empeñamos en que los atributos sean privados
nos vemos obligados a usar setters y getters
*/

#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    // Método para establecer el nombre
    void SetNombre(const string& n) {
        nombre = n;
    }

    // Método para establecer la edad
    void SetEdad(int e) {
        edad = e;
    }

    // Método para obtener el nombre
    string GetNombre() const {
        return nombre;
    }

    // Método para obtener la edad
    int GetEdad() const {
        return edad;
    }

    // Método Saludar
    void Saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    // Crear un objeto Persona
    Persona persona1;

    // Asignar valores a través de los métodos Set
    persona1.SetNombre("Juan");
    persona1.SetEdad(25);

    // Llamar al método Saludar
    persona1.Saludar();

    return 0;
}
