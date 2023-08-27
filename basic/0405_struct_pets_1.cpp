#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura
struct Pet {
    string nombre;
    string tipo;
    float peso;
    string genero;
};

int main() {
    // Creación de instancias de la estructura
    Pet mascota1;
    mascota1.nombre = "Luna";
    mascota1.tipo = "Gato";
    mascota1.peso = 4.2;
    mascota1.genero = "Hembra";

    Pet mascota2;
    mascota2.nombre = "Max";
    mascota2.tipo = "Perro";
    mascota2.peso = 10.5;
    mascota2.genero = "Macho";

    // Imprimir información de las mascotas
    cout << "Mascota 1:\n";
    cout << "Nombre: " << mascota1.nombre << "\n";
    cout << "Tipo: " << mascota1.tipo << "\n";
    cout << "Peso: " << mascota1.peso << " kg\n";
    cout << "Género: " << mascota1.genero << "\n\n";

    cout << "Mascota 2:\n";
    cout << "Nombre: " << mascota2.nombre << "\n";
    cout << "Tipo: " << mascota2.tipo << "\n";
    cout << "Peso: " << mascota2.peso << " kg\n";
    cout << "Género: " << mascota2.genero << "\n";

    return 0;
}
