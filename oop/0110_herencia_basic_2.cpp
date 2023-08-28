/*
Un ejemplo básico de herencia en C++. 
En este caso, la clase Coche hereda de la clase Vehiculo. 
La clase Vehiculo es la clase base y la clase Coche es la clase derivada. 
La clase derivada hereda los miembros de la clase base y puede agregar nuevos miembros o modificar los heredados. 
En este caso, la clase Coche no agrega nuevos miembros ni modifica los heredados.
Los miembros de una clase son los atributos y métodos que la clase contiene. 
En este ejemplo, la clase Vehiculo tiene un atributo llamado marca y un método llamado hacerSonarBocina. 
La clase Coche hereda estos miembros de la clase Vehiculo. 
Si la clase Coche quisiera agregar nuevos miembros o modificar los miembros heredados, podría hacerlo.
*/

#include <iostream>
#include <string>
using namespace std;

// Clase base
class Vehiculo {
public:
    string marca;
    
    Vehiculo() : marca("Ford") {}   // Constructor predeterminado

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
    // Crear un objeto de la clase Coche
    Coche miCoche;
    
    // Llamar al método hacerSonarBocina de la clase base
    miCoche.hacerSonarBocina();
    
    // Imprimir la marca y el modelo del coche
    cout << miCoche.marca + " " + miCoche.modelo << endl;
    
    return 0;
}