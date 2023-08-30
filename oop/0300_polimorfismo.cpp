/*
Polimorfismo significa "muchas formas" y 
ocurre cuando tenemos muchas clases que están relacionadas entre sí por herencia.

La herencia nos permite heredar atributos y métodos de otra clase. 
El polimorfismo utiliza esos métodos para realizar diferentes tareas. 
Esto nos permite realizar una misma acción de diferentes maneras.

Por ejemplo, piense en una clase base llamada Animal que tiene un método llamado animalSound(). 
Las clases derivadas de animales podrían ser cerdos, gatos, perros, pájaros, y 
también tienen su propia implementación de un sonido animal 
(el cerdo gruñe y el gato maúlla, etc.)
*/


#include <iostream>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};


int main(){

    Animal myAnimal;
    myAnimal.animalSound();

    Pig myPig;
    myPig.animalSound();

    Dog myDog;
    myDog.animalSound();

    return 0;
}