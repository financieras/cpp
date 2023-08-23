/*
Una variable de referencia en  C++ es una "referencia" a una variable existente y se crea con el operador &
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";	// food variable
  string &meal = food;		// reference to food

  cout << food << "\n";		// Output Pizza
  cout << meal << "\n";		// Output Pizza
  return 0;
}


/*
En este ejemplo, se declara una variable food de tipo string con el valor "Pizza". 
Luego, se crea una referencia llamada meal que se enlaza con la variable food. 
Esto significa que meal es otra forma de referirse a la misma variable que food.

Cuando se imprime el valor de food y meal, ambos producen el mismo resultado, que es "Pizza", 
porque en realidad están apuntando a la misma ubicación de memoria que almacena el valor "Pizza".

Este ejemplo ilustra cómo una referencia puede usarse para acceder y manipular una variable original 
sin necesidad de crear una copia separada, ya que meal simplemente es otra etiqueta para la misma variable food.
*/