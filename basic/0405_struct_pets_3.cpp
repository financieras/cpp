/*
Con este enfoque, puedes capturar los datos ingresados por el usuario directamente 
en los arreglos de caracteres de la estructura Pet sin la necesidad de usar strcpy 
o la biblioteca <cstring>.

Si obtienes los datos directamente del usuario usando cin.getline() 
para las cadenas de caracteres, no necesitarás la biblioteca <cstring>
*/

#include <iostream>

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

    cout << "Ingrese el nombre de la mascota 1: ";
    cin.getline(mascota1.nombre, 50);

    cout << "Ingrese el tipo de la mascota 1: ";
    cin.getline(mascota1.tipo, 50);

    cout << "Ingrese el peso de la mascota 1 (kg): ";
    cin >> mascota1.peso;

    cout << "Ingrese el género de la mascota 1 (M/H): ";
    cin >> mascota1.genero;

    cin.ignore(); // Para consumir el salto de línea en el buffer

    Pet mascota2;

    cout << "Ingrese el nombre de la mascota 2: ";
    cin.getline(mascota2.nombre, 50);

    cout << "Ingrese el tipo de la mascota 2: ";
    cin.getline(mascota2.tipo, 50);

    cout << "Ingrese el peso de la mascota 2 (kg): ";
    cin >> mascota2.peso;

    cout << "Ingrese el género de la mascota 2 (M/H): ";
    cin >> mascota2.genero;

    cin.ignore(); // Para consumir el salto de línea en el buffer

    // Imprimir información de las mascotas
    cout << "\nMascota 1:\n";
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