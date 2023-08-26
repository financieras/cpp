#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string n, int e) : nombre(n), edad(e) {}

    // Método Saludar
    void Saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    // Crear un objeto Persona usando el constructor
    Persona persona1("Juan", 25);

    // Llamar al método Saludar
    persona1.Saludar();

    return 0;
}

/*
El constructor también puede ser así:
Persona(const string& n, int e) : nombre(n), edad(e) {}

Respecto al uso del símbolo & en el constructor de la clase Persona, 
está indicando que el parámetro n es una referencia constante a una cadena (const string& n).
Esto significa que el constructor acepta una referencia a un objeto de tipo string
 (en este caso, el nombre que se pasa al constructor). 
 La referencia constante permite pasar el valor del nombre al constructor 
 sin realizar una copia completa del objeto string, 
 lo que puede ser más eficiente en términos de rendimiento. 
 Además, al ser una referencia constante, asegura que 
 el valor del nombre no será modificado dentro del constructor.
*/