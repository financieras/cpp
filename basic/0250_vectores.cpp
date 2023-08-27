#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Crear un vector dinámico de enteros
    vector<int> vec;

    // Agregar elementos al vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Acceder a los elementos del vector
    cout << "Elementos del vector:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Modificar un elemento del vector
    vec[1] = 25;

    // Imprimir el vector modificado
    cout << "\nVector modificado:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Eliminar el último elemento del vector
    vec.pop_back();

    // Imprimir el vector después de eliminar un elemento
    cout << "\nVector después de eliminar un elemento:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}