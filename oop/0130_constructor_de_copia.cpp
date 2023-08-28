/*
Constructor de copia: 
Es un constructor que tiene como parámetro de entrada una referencia a otro objeto de la misma clase, 
por tanto las variables del objeto que se está creando se inicializan con los valores de las variables del objeto que se pasa como parámetro. 
Por esa misma razón se conoce como constructor de copia, 
porque copia los valores de un objeto existente para incializar otro objeto. 
En la declaración del constructor el parámetro de entrada debe tener calificación const para evitar modificaciones en el objeto que se está copiando.
*/


#include<iostream>
using namespace std;

class Vehiculo{
    int largo, ancho, alto;
    public:
        Vehiculo(int, int, int);
        Vehiculo(const Vehiculo&); //Constructor de copia
        void imprimeDimensiones();
};

Vehiculo::Vehiculo(int l, int a, int h){
    largo = l;
    ancho = a;
    alto = h;
}

Vehiculo::Vehiculo(const Vehiculo& obj){
    largo = obj.largo;
    ancho = obj.ancho;
    alto = obj.alto;
}

void Vehiculo::imprimeDimensiones(){
    cout<<"largo: "<<largo<<", ancho: "<<ancho<<", alto: "<<alto<<endl;
}

int main(){
    Vehiculo vehiculo1(5000, 1850, 1720); //Inicialización con parámetros de entrada
    Vehiculo vehiculoCopia(vehiculo1); //Inicialización de vehiculoCopia con los valores de vehiculo1
    vehiculoCopia.imprimeDimensiones();
    return 0;
}
