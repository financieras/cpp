/*
En este ejemplo, se define un constructor personalizado para la clase Vehiculo que 
acepta tres parámetros enteros opcionales: l, a y h. 
Si no se proporcionan valores para estos parámetros al crear un objeto de la clase Vehiculo, 
se utilizarán los valores predeterminados de 4000, 1800 y 1500 para las variables largo, ancho y alto, respectivamente.
*/

#include<iostream>
using namespace std;

// Definición de la clase Vehiculo
class Vehiculo{
    // Definición de los atributos privados: largo, ancho y alto
    int largo, ancho, alto;
    public:
        // Constructor de la clase Vehiculo con valores predeterminados
        // Si el usuario no proporciona valores, se utilizarán estos valores predeterminados
        Vehiculo(int l = 4000, int a = 1800, int h = 1500); 
        // Método para imprimir las dimensiones del vehiculo
        void imprimeDimensiones();
};


// Implementación del constructor fuera de la definición de la clase
// Los dos puntos dobles (::) indican que este método pertenece a la clase Vehiculo
Vehiculo::Vehiculo(int l, int a, int h){
    // Inicializar los atributos con los valores proporcionados
    largo = l;
    ancho = a;
    alto = h;
}

// Implementación del método imprimeDimensiones fuera de la definición de la clase
// Los dos puntos dobles (::) indican que este método pertenece a la clase Vehiculo
void Vehiculo::imprimeDimensiones(){
    // Imprimir las dimensiones del vehículo
    cout<<"largo:\t"<<largo<<"\nancho:\t"<<ancho<<"\nalto:\t"<<alto<<endl;
}

int main(){
    // Crear una instancia de Vehiculo con los valores predeterminados
    Vehiculo vehiculo1;
    // Imprimir las dimensiones del vehiculo1
    vehiculo1.imprimeDimensiones();
    return 0;
}

/*
El uso de la doble pareja de dos puntos ::, se utiliza en C++ para 
especificar que el método o variable pertenece a una clase específica. 
En este caso, :: se utiliza para definir los métodos del constructor y el método
imprimeDimensiones fuera del cuerpo de la clase Vehiculo.
*/