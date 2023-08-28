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
    //Estos son los atributos
    public:
        string nombre;
        float peso;
    // Estos son los métodos y el constructor
    public:
        Atleta(string, float);
        void Saludo();
};

Atleta::Atleta(string _nombre, float _peso){
    nombre = _nombre;
    peso = _peso;
}

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

Corredor::Corredor(string _nombre, float _peso, int _edad, char _genero) : Atleta(_nombre, _peso){
    edad = _edad;
    genero = _genero;
}

void Corredor::Saludo(){
    Atleta::Saludo();
    cout<<"Soy runer de género "<<genero<<" y tengo "<<edad<<" años."<<endl;
}

int main(){

    Corredor pokemon1("María", 55, 24, 'F');
    pokemon1.Saludo();

    return 0;
}