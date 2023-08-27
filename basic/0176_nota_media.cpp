#include <iostream>

using namespace std;

int main() {
    int numAsignaturas;
    double nota, sumaNotas = 0.0;

    cout << "Ingrese el número de asignaturas: ";
    cin >> numAsignaturas;

    // Solicitar notas y calcular la suma de las notas
    for (int i = 1; i <= numAsignaturas; i++) {
        cout << "Ingrese la nota de la asignatura " << i << ": ";
        cin >> nota;

        sumaNotas += nota;
    }

    // Calcular la nota media
    double notaMedia = sumaNotas / numAsignaturas;

    // Mostrar la nota media
    cout << "La nota media de las " << numAsignaturas << " asignaturas es: " << notaMedia << endl;

    return 0;
}