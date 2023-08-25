#include <iostream>
using namespace std;

class Saluda {     	// La Clase
  public:           // Se especifica el tipo de acceso
    Saluda() {     	// Constructor
      cout << "Hello World!\n";
    }
};

int main() {
  Saluda saludo_1;	// Se crea un objeto que llama al constructor
  return 0;
}