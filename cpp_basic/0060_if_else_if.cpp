#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else if (edad == 17) {
        cout << "Ya falta poco para ser mayor de edad" << endl;
    } else {
        cout << "Eres menor de edad" << endl;
    }

    return 0;
}
