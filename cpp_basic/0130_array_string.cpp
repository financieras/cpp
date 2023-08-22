#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaración e inicialización de un string
    string mensaje = "Hola, mundo!";

    // Acceso y modificación del string
    cout << "Mensaje original: " << mensaje << endl;
    mensaje += " ¡Bienvenidos a C++!";
    cout << "Mensaje modificado: " << mensaje << endl;

    // Obtener la longitud del string
    cout << "Longitud del mensaje: " << mensaje.length() << endl;

    // Acceso a caracteres individuales del string
    cout << "Primer carácter del mensaje: " << mensaje[0] << endl;
    cout << "Último carácter del mensaje: " << mensaje[mensaje.length() - 1] << endl;

    return 0;
}
