#include <iostream>

// Definición de la estructura del nodo
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Función para insertar un nuevo nodo al final de la lista
void insertarNodo(Nodo** cabeza, int dato) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = nullptr;

    if (*cabeza == nullptr) {
        *cabeza = nuevoNodo;
    } else {
        Nodo* temp = *cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

// Función para mostrar los números ingresados
void mostrarNodos(Nodo* cabeza) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        std::cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    std::cout << std::endl;
}

int main() {
    Nodo* cabeza = nullptr;
    int numero;

    std::cout << "Ingrese números enteros (ingrese 0 para terminar):" << std::endl;

    while (true) {
        std::cin >> numero;
        if (numero == 0) {
            break;
        }
        insertarNodo(&cabeza, numero);
    }

    std::cout << "Números ingresados: ";
    mostrarNodos(cabeza);

    return 0;
}
