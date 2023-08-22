/*
La función a_mayusculas() se encarga de convertir todos los caracteres de un string a mayúsculas.
Se utiliza un bucle while para recorrer cada carácter del string hasta encontrar el carácter nulo '\0'
que indica el final del string.
*/

#include <iostream>

using namespace std;

void a_mayusculas(char* palabra) {
    int i = 0;
    while (palabra[i] != '\0') {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] = palabra[i] - 32;
        }
        i++;
    }
}

int main() {
    char palabra[] = "Hola";

    a_mayusculas(palabra);

    cout << "Palabra en mayúsculas: " << palabra << endl;

    return 0;
}
