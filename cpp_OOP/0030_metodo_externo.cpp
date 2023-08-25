/*
Los métodos son funciones que pertenecen a la clase.
Hay dos formas de definir funciones que pertenecen a una clase:
    1. Definición de clase interna
    2. Definición de clase externa
En el siguiente ejemplo, definimos el método fuera de su clase
*/

#include <iostream>
using namespace std;

class Startup {
  public:
    string nombre;
    int fundacionAnio;

    void presentarStartup();  // declaración del método
};

// Método definido fuera de la clase
void Startup::presentarStartup() {
    cout << "Bienvenidos a " << nombre << "!\n";
    cout << "Fundada en " << fundacionAnio << "\n";
}

int main() {
  Startup miStartup;

  miStartup.nombre = "TechInnovate";
  miStartup.fundacionAnio = 2023;

  miStartup.presentarStartup();

  return 0;
}
