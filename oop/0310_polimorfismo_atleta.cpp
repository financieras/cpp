/*
El polimorfismo permite que los objetos de diferentes clases se comporten de manera similar. 
En este ejemplo, la clase hija Corredor hereda de la clase padre Atleta. 
La clase hija tiene sus propios atributos (edad y genero) y su propio método Saludo(). 
Sin embargo, también llama al método Saludo() de la clase padre usando Atleta::Saludo();. 
Esto es un ejemplo de polimorfismo. 
La clase hija Corredor se comporta como la clase padre Atleta, pero también tiene su propio comportamiento único. 
El polimorfismo permite que los objetos de diferentes clases se comporten de manera similar, 
lo que puede ser útil para simplificar el código y hacerlo más fácil de mantener.
*/


#include <iostream>
using namespace std;

// Clase padre
class Atleta{
    // Estos son los atributos
    public:
        string nombre;
        float peso;
    // Estos son los métodos y el constructor
    public:
        Atleta(string, float);
        void Saludo();
};

// Constructor de la clase padre Atleta
Atleta::Atleta(string _nombre, float _peso){
    nombre = _nombre;
    peso = _peso;
}

// Método Saludo de la clase padre Atleta
void Atleta::Saludo(){
    cout<<"Soy "<<nombre<<" atleta que pesa "<<peso<<" Kg.\n";
}

// Clase hija
class Corredor : public Atleta{
    public:
        int edad;
        char genero;
    public:
        Corredor(string, float, int, char);
        void Saludo();
};

// Constructor de la clase hija Corredor
Corredor::Corredor(string _nombre, float _peso, int _edad, char _genero) : Atleta(_nombre, _peso){
    edad = _edad;
    genero = _genero;
}

// Método Saludo de la clase hija Corredor
void Corredor::Saludo(){
    Atleta::Saludo(); // Llamada al método Saludo() de la clase padre
    cout<<"Soy runner de género "<<genero<<" y tengo "<<edad<<" años."<<endl;
}

int main(){
    // Creación de un objeto de la clase hija Corredor
    Corredor corredor1("María", 55, 24, 'F');
    corredor1.Saludo(); // Llamada al método Saludo() de la clase hija
    
    return 0;
}