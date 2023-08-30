#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Crear un archivo de texto y queda abierto
    ofstream miArchivoEscritura("nombre_archivo.txt");

    // Verificar si el archivo se abrió correctamente
    if (!miArchivoEscritura) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    // Escribir en el archivo
    miArchivoEscritura << "¡Los archivos pueden ser complicados, pero también son divertidos!" << endl;
    miArchivoEscritura << "Y con esto finalizamos nuestro texto. Bye bye." << endl;

    // Cerrar el archivo
    miArchivoEscritura.close();
    /*
    El uso de close() es necesario para cerrar el archivo antes de cambiar entre 
    los modos de escritura (dado por ofstream) y lectura (dadopor ifstream).
    */

    // Leer desde el archivo de texto
    string miTexto;
    ifstream miArchivoLectura("nombre_archivo.txt");

    // Verificar si el archivo se abrió correctamente
    if (!miArchivoLectura) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    // Utilizar un bucle while junto con la función getline() para leer el archivo línea por línea
    while (getline(miArchivoLectura, miTexto)) {
        // Mostrar el texto del archivo
        cout << miTexto << endl;
    }

    // Cerrar el archivo
    miArchivoLectura.close();

    return 0;
}