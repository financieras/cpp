/*
Los métodos son funciones que pertenecen a la clase.
Hay dos formas de definir funciones que pertenecen a una clase:
    1. Definición de clase interna
    2. Definición de clase externa
En el siguiente ejemplo, definimos el método dentro de su clase
*/

#include <iostream>
using namespace std;

class Startup {
  public:
    string nombre;
    int fundacionAnio;

    // Método definido dentro de la clase
    void presentarStartup() {
        cout << "Bienvenidos a " << nombre << "!\n";
        cout << "Fundada en " << fundacionAnio << "\n";
    }
};

int main() {
  Startup miStartup;

  miStartup.nombre = "TechInnovate";
  miStartup.fundacionAnio = 2023;

  miStartup.presentarStartup();

  return 0;
}
