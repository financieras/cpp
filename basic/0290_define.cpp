#include <iostream>

// Definición de una macro usando #define
#define PI 3.14159
#define CUADRADO(x) x*x
#define CIRCLE_AREA(r) (PI * CUADRADO(r))

using namespace std;

int main() {
    double radius = 5.0;
    double area = CIRCLE_AREA(radius);

    cout << "Sabiendo que el radio es " << radius;
    cout << "\ny su cuadrado es " << CUADRADO(radius) << "\npodemos calcular el";
    cout << "\nÁrea del círculo: " << area << endl;

    return 0;
}
