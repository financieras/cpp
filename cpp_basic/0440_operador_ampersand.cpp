#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";

  cout << food << endl;
  cout << &food << endl;    // podemos obtener la dirección de memoria de una variable usando el operador &
  
  return 0;
}