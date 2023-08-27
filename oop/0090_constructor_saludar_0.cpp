/*
Un ejemplo de la creación de un constructor y un método Saludo()
Se inicializa el constructor
Se crean dos objetos (persona1 y persona2) usando métodos diferentes
*/

#include <iostream>
#include <string>

using namespace std;

class Persona {
public:             // estos son los atributos
    string nombre;
    int edad;
public:             // este es el constructor y los métodos
    Persona(string, int);
    void Saludo();

};

// inicialización del constructor
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Persona::Saludo(){
    cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
}

int main(){
    Persona persona1 = Persona("Juan", 25);     // una forma de crear un objeto
    persona1.Saludo();

    Persona persona2("Vega", 18);               // otra forma más breve de crearlo
    persona2.Saludo();

    return 0;
}

/*
La inicialización del constructor también se puede hacer de forma alternativa en una sola línea:

Persona::Persona(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}


*/