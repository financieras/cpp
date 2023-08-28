#include<iostream>
using namespace std;

class Vehiculo{
    int largo, ancho, alto;
    public:
        Vehiculo(); //Constructor por defecto
        void imprimeDimensiones();
};

Vehiculo::Vehiculo(){
    largo = 4000;
    ancho = 1800;
    alto = 1500;
}

void Vehiculo::imprimeDimensiones(){
    cout<<"largo:\t"<<largo<<"\nancho:\t"<<ancho<<"\nalto:\t"<<alto<<endl;
}

int main(){
    Vehiculo vehiculo1; //Inicialización por defecto
    vehiculo1.imprimeDimensiones();
    return 0;
}