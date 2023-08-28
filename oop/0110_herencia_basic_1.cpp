/*
Tenemos una clase base llamada Figura con un atributo tipo y un método mostrarTipo(). 
Luego, tenemos una clase derivada llamada Circulo, que hereda de Figura y agrega un atributo radio.

En el main, creamos un objeto de la clase Circulo llamado miCirculo y le pasamos el valor del radio. 
Mostramos el tipo de figura y luego llamamos al método mostrarTipo() que pertenece a la clase base. 
La herencia permite que la clase derivada acceda a los miembros y métodos de la clase base.
*/


#include <iostream>
#include <string>
using namespace std;

// Clase base: Figura
class Figura {
public:
    string tipo;

    Figura(string t) : tipo(t) {}

    void mostrarTipo() {
        cout << "Esta es una figura de tipo " << tipo << endl;
    }
};

// Clase derivada: Circulo, hereda de Figura
class Circulo : public Figura {
public:
    double radio;

    Circulo(double r) : Figura("Circulo"), radio(r) {}
};

int main() {
    // Crear un objeto de la clase Circulo
    Circulo miCirculo(5.0);

    // Acceder a miembro heredado de la clase base
    cout << "Tipo de figura: " << miCirculo.tipo << endl;

    // Llamar al método de la clase base
    miCirculo.mostrarTipo();  // Llamada a la función de la clase base

    return 0;
}