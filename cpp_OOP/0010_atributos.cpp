#include <iostream>
#include <string>
using namespace std;

class Atleta {
  public:
    string nombre;
    int edad;

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << "\n";
        cout << "Edad: " << edad << " años\n";
    }
};

int main() {
  Atleta carl_lewis;

  carl_lewis.nombre = "Carl Lewis";
  carl_lewis.edad = 23;

  carl_lewis.mostrarInformacion();

  return 0;
}
