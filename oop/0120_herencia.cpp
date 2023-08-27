#include <iostream>
#include <string>

using namespace std;

// Definición de la clase base Persona
class Persona {
public:
    string nombre;
    int edad;

    // Constructor de la clase Persona
    Persona(string, int);

    // Método Saludo de la clase Persona
    void Saludo();
};

// Implementación del constructor de Persona usando lista de inicialización de miembros
Persona::Persona(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}

// Implementación del método Saludo de la clase Persona
void Persona::Saludo() {
    cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
}

// Definición de la clase derivada Estudiante que hereda de Persona
class Estudiante : public Persona {
    public:
        string universidad;     // atributo específico de Estudiante
        char curso;             // atributo específico de Estudiante

        // Constructor de la clase Estudiante
        Estudiante(string, int, string, char);

        // Método Presentacion de la clase Estudiante
        void Presentacion();
};

// Inicialización del constructor de Estudiante usando:
// 1. la inicialización del constructor de Persona y
// 2. los nuevos atributos específicos de la clase Estudiante que son universidad y curso
Estudiante::Estudiante(string _nombre, int _edad, string _universidad, char _curso): Persona(_nombre, _edad){
    universidad = _universidad;
    curso = _curso;
};

// Implementación del método Presentacion de la clase Estudiante
void Estudiante::Presentacion() {
    Saludo();
    cout << nombre << " estudia en la " << universidad << " y está en " << curso <<"º." << endl;
}

int main() {
    // Crear un objeto Persona y llamar al método Saludo
    Persona persona1("Juan", 25);
    persona1.Saludo();

    // Crear un objeto Estudiante y llamar al método Presentacion
    Estudiante estudiante1("María", 20, "URJC", '1');
    estudiante1.Presentacion();

    return 0;
}

/*
Otra forma de inicializar el constructor de la clase Estudiante en una sola línea:

Estudiante::Estudiante(string _nombre, int _edad, string _universidad)
    : Persona(_nombre, _edad), universidad(_universidad), curso(_curso) {}

*/