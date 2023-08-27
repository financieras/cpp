#include <iostream>
#include <string>
using namespace std;

// Clase base
class Vehiculo {
public: 
    string marca;
    Vehiculo() : marca("Ford") {}
    void hacerSonarBocina() {
        cout << "¡Tut, tut! \n" ;
    }
};

// Clase derivada
class Coche: public Vehiculo {
public: 
    string modelo;
    Coche() : modelo("Mustang") {}
};

int main() {
    Coche miCoche;
    miCoche.hacerSonarBocina();
    cout << miCoche.marca + " " + miCoche.modelo << endl;
    return 0;
}
