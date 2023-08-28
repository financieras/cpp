/*
En este ejemplo, se define un constructor personalizado para la clase Vehiculo que 
acepta tres parámetros enteros opcionales: l, a y h. 
Si no se proporcionan valores para estos parámetros al crear un objeto de la clase Vehiculo, 
se utilizarán los valores predeterminados de 4000, 1800 y 1500 para las variables largo, ancho y alto, respectivamente.
*/

#include<iostream>
using namespace std;

class Vehiculo{
    int largo, ancho, alto;
    public:
        Vehiculo(int l = 4000, int a = 1800, int h = 1500); //Constructor personalizado
        void imprimeDimensiones();
};

Vehiculo::Vehiculo(int l, int a, int h){
    largo = l;
    ancho = a;
    alto = h;
}

void Vehiculo::imprimeDimensiones(){
    cout<<"largo:\t"<<largo<<"\nancho:\t"<<ancho<<"\nalto:\t"<<alto<<endl;
}

int main(){
    //Vehiculo vehiculo1; //Inicialización por defecto
    Vehiculo vehiculo1;
    vehiculo1.imprimeDimensiones();
    return 0;
}