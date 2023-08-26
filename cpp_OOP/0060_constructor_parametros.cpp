/*
Los constructores también pueden tomar parámetros (al igual que las funciones normales), 
lo que puede resultar útil para establecer valores iniciales para los atributos.
*/

#include <iostream>
using namespace std;

class Coche {      // La clase
  public:          // Especificador de acceso
    string marca;  // Atributo
    string modelo; // Atributo
    int año;       // Atributo
    Coche(string _marca, string _modelo, int _año) {  // Constructor con parámetros
      marca = _marca;
      modelo = _modelo;
      año = _año;
    }
};

int main() {
  // Crear objetos Coche y llamar al constructor con diferentes valores
  Coche auto1("Toyota", "Yaris", 1999);
  Coche auto2("Volkswagen", "ID.3", 2020);

  // Imprimir valores
  cout << auto1.marca << " " << auto1.modelo << " " << auto1.año << "\n";
  cout << auto2.marca << " " << auto2.modelo << " " << auto2.año << "\n";
  return 0;
}
