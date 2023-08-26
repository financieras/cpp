/*
Al igual que las funciones, los constructores también se pueden definir fuera de la clase. 
Primero, declare el constructor dentro de la clase y 
luego defínalo fuera de la clase especificando el nombre de la clase,
 seguido del :: operador de resolución de alcance, 
 seguido del nombre del constructor (que es el mismo que el de la clase):
*/

#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string _brand, string model, int year); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string _brand, string _model, int _year) {
  brand = _brand;
  model = _model;
  year = _year;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car auto1("Toyota", "Yaris", 1999);
  Car auto2("Volkswagen", "ID.3", 2020);

  // Print values
  cout << auto1.brand << " " << auto1.model << " " << auto1.year << "\n";
  cout << auto2.brand << " " << auto2.model << " " << auto2.year << "\n";
  return 0;
}