/*
Definimos la clase Complejo que representa números complejos. 
Sobrecargamos el operador + para permitir la suma de dos objetos Complejo. 
Además, sobrecargamos el operador de flujo de salida << como una función amiga 
para imprimir objetos Complejo. 
En el main(), creamos dos objetos Complejo y los sumamos mediante el operador +. 
Luego, utilizamos el operador << para imprimir los objetos. 
El polimorfismo ocurre cuando se invoca la sobrecarga correspondiente del operador + y 
del operador << para los objetos Complejo.
*/

#include <iostream>
using namespace std;

// Clase complejo
class Complejo {
private:
    double real;
    double imaginario;

public:
    Complejo(double r, double i) : real(r), imaginario(i) {}

    // Sobrecarga del operador +
    Complejo operator+(const Complejo& c) {
        double sumaReal = real + c.real;
        double sumaImaginaria = imaginario + c.imaginario;
        return Complejo(sumaReal, sumaImaginaria);
    }

    // Sobrecarga del operador <<
    friend ostream& operator<<(ostream& os, const Complejo& c) {
        os << c.real << " + " << c.imaginario << "i";
        return os;
    }
};

int main() {
    Complejo c1(2.5, 3.0);
    Complejo c2(1.5, 2.0);
    Complejo c3 = c1 + c2; // Llamada polimórfica a la sobrecarga del operador +

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;

    return 0;
}