#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";     // Una variable de tipo string
  string *ptr = &food;       // Un puntero que almacena la dirección de 'food'
  // el tipo de puntero debe coincidir con el tipo de variable con la que está trabajando

  // Imprimimos el valor de 'food'
  cout << food << "\n";

  // Imprimimos la dirección de memoria de 'food'
  cout << &food << "\n";

  // Imprimimos la dirección de memoria de 'food' usando el puntero
  cout << ptr << "\n";
  
  // Imprimimos el valor apuntado por el puntero (contenido de 'food')
  cout << *ptr << "\n";
  
  return 0;
}