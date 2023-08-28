/*
Tenemos una clase base llamada Animal que tiene un atributo nombre y un método emitirSonido(). 
Luego, tenemos una clase derivada llamada Perro, que hereda de Animal y 
agrega un atributo raza además de sobreescribir el método emitirSonido().

En el main, creamos un objeto de la clase Perro llamado miPerro y pasamos valores para el nombre y la raza. 
Luego, mostramos el nombre del perro y llamamos al método emitirSonido(). 
A pesar de que Perro tiene su propia versión de emitirSonido(), 
cuando se llama desde miPerro, se usa la versión de la clase derivada.

Esto demuestra cómo la herencia permite que una clase derivada herede atributos y comportamientos de la clase base,
y cómo puede personalizar esos atributos y comportamientos según sus necesidades.
*/

#include <iostream>
#include <string>
using namespace std;

// Clase base: Animal
class Animal {
public:
    string nombre;

    Animal(string n) : nombre(n) {}

    void emitirSonido() {
        cout << "El animal emite un sonido." << endl;
    }
};

// Clase derivada: Perro, hereda de Animal
class Perro : public Animal {
public:
    string raza;

    Perro(string n, string r) : Animal(n), raza(r) {}

    void emitirSonido() {
        cout << "El perro ladra: ¡Guau guau!" << endl;
    }
};

int main() {
    // Crear un objeto de la clase Perro
    Perro miPerro("Firulais", "Labrador");

    // Acceder a miembro heredado de la clase base
    cout << "Nombre del perro: " << miPerro.nombre << endl;

    // Llamar al método de la clase base
    miPerro.emitirSonido();  // Llamada a la función de la clase derivada

    return 0;
}
