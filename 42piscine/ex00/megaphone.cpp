#include <iostream>
#include <cctype> // para usar toupper

using namespace std;

int main(int argc, char **argv) {
    // Comprobamos si no se pasaron argumentos (solo el nombre del programa cuenta como argumento)
    if (argc == 1) {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    } else {
        // Iteramos a través de los argumentos, comenzando desde el segundo argumento (índice 1)
        for (int i = 1; i < argc; ++i) {
            // Iteramos a través de los caracteres del argumento actual
            for (int j = 0; argv[i][j] != '\0'; ++j) {
                // Convertimos el carácter a mayúscula utilizando toupper
                char c = toupper(argv[i][j]);
                // Imprimimos el carácter convertido
                cout << c;
            }
        }
        // Imprimimos un salto de línea al final de cada conjunto de caracteres convertidos
        cout << endl;
    }
    
    return 0;
}
