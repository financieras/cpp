/*
La clase base Figura es una clase abstracta que define una función virtual pura llamada dibujar().
Las clases derivadas Circulo y Cuadrado implementan esta función de manera diferente. 
En el main(), creamos un arreglo de punteros a Figura y 
asignamos objetos de las clases derivadas a esos punteros. 
Luego, utilizamos un bucle para llamar a la función dibujar() en cada objeto. 
Debido a que la función dibujar() es virtual, 
se invoca la implementación correspondiente de cada clase derivada, 
lo que demuestra el polimorfismo.
*/

#include <iostream>
using namespace std;

// Clase base abstracta
class Figura {
public:
    virtual void dibujar() = 0; // Función virtual pura
};

// Clase derivada
class Circulo : public Figura {
public:
    void dibujar() {
        cout << "Dibujando un círculo." << endl;
    }
};

// Clase derivada
class Cuadrado : public Figura {
public:
    void dibujar() {
        cout << "Dibujando un cuadrado." << endl;
    }
};

int main() {
    Figura* figuras[2];
    figuras[0] = new Circulo();
    figuras[1] = new Cuadrado();

    for (int i = 0; i < 2; i++) {
        figuras[i]->dibujar(); // Llamada polimórfica a la función dibujar()
    }

    return 0;
}