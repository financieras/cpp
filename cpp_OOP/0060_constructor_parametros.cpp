#include <iostream>
using namespace std;

class Coche {      // La clase
  public:          // Especificador de acceso
    string marca;  // Atributo
    string modelo; // Atributo
    int año;       // Atributo
    Coche(string x, string y, int z) {  // Constructor con parámetros
      marca = x;
      modelo = y;
      año = z;
    }
};

int main() {
  // Crear objetos Coche y llamar al constructor con diferentes valores
  Coche cocheObj1("Toyota", "Yaris", 1999);
  Coche cocheObj2("Volkswagen", "ID.3", 2020);

  // Imprimir valores
  cout << cocheObj1.marca << " " << cocheObj1.modelo << " " << cocheObj1.año << "\n";
  cout << cocheObj2.marca << " " << cocheObj2.modelo << " " << cocheObj2.año << "\n";
  return 0;
}
