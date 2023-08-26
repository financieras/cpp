/*
El constructor tiene el mismo nombre que la clase, 
siempre es público y no tiene ningún valor de retorno.
*/



#include <iostream>
using namespace std;

class Saludo {     	// La Clase
  public:           // Se especifica el tipo de acceso
    Saludo() {     	// Constructor
      cout << "Hello World!\n";
    }
};

int main() {
  Saludo hola_1;	// Se crea un objeto que llama al constructor
  return 0;
}