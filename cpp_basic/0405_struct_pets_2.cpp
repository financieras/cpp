/*
Si no queremos usar la librería string tenemos que usar cstring para poder usar
la función strcpy 
*/

/*
La función strcpy de la biblioteca <cstring> en C++ se utiliza para copiar una cadena de caracteres (cadena C) desde una ubicación de memoria fuente a una ubicación de memoria destino. Esta función toma dos argumentos: el primero es el puntero a la ubicación de memoria destino (donde se copiará la cadena) y el segundo es el puntero a la ubicación de memoria fuente (desde donde se copiará la cadena). La copia se realiza hasta que se encuentra el carácter nulo '\0' que indica el final de la cadena.

Es importante tener en cuenta que strcpy no realiza comprobaciones de límites y no es seguro si la cadena de origen es más larga que la cadena de destino, ya que podría causar desbordamientos de búfer y comportamientos no deseados. En C++, se recomienda utilizar alternativas más seguras como std::string para manipular cadenas de caracteres.
*/



#include <iostream>
#include <cstring>  // Incluimos esta biblioteca para usar strcpy

using namespace std;

// Definición de la estructura
struct Pet {
    char nombre[50];
    char tipo[50];
    float peso;
    char genero;    // una sola letra: M/H
};

int main() {
    // Creación de instancias de la estructura
    Pet mascota1;
    strcpy(mascota1.nombre, "Luna");  // Usamos strcpy para copiar el nombre
    strcpy(mascota1.tipo, "Gato");    // Usamos strcpy para copiar el tipo
    mascota1.peso = 4.2;
    mascota1.genero = 'H';            // Usamos comillas simples para caracteres

    Pet mascota2;
    strcpy(mascota2.nombre, "Max");   // Usamos strcpy para copiar el nombre
    strcpy(mascota2.tipo, "Perro");   // Usamos strcpy para copiar el tipo
    mascota2.peso = 10.5;
    mascota2.genero = 'M';            // Usamos comillas simples para caracteres

    // Imprimir información de las mascotas
    cout << "Mascota 1:\n";
    cout << "Nombre: " << mascota1.nombre << "\n";
    cout << "Tipo: " << mascota1.tipo << "\n";
    cout << "Peso: " << mascota1.peso << " kg\n";
    cout << "Género: " << (mascota1.genero == 'M' ? "Macho" : "Hembra") << "\n\n";

    cout << "Mascota 2:\n";
    cout << "Nombre: " << mascota2.nombre << "\n";
    cout << "Tipo: " << mascota2.tipo << "\n";
    cout << "Peso: " << mascota2.peso << " kg\n";
    cout << "Género: " << (mascota2.genero == 'M' ? "Macho" : "Hembra") << "\n";

    return 0;
}