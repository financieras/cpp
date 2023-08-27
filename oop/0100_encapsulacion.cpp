/*
La clase "Employee" encapsula el atributo "salary" al declararlo como privado y 
proporciona métodos públicos para establecer y obtener su valor.
Los famosos setter y getter.
*/

#include <iostream>

using namespace std; // Se utiliza el espacio de nombres std para evitar tener que escribir "std::" antes de las funciones y objetos de la biblioteca estándar de C++

class Employee {
private:
    int salary; // Atributo privado para almacenar el salario

public:
    Employee(int initialSalary) {
        salary = initialSalary; // Constructor que inicializa el salario al crear un objeto Employee
    }

    void setSalary(int newSalary) {
        salary = newSalary; // Método público para establecer el salario
    }

    void increaseSalary(int amount) {
        salary += amount; // Método público para aumentar el salario en una cantidad específica
    }

    int getSalary() {
        return salary; // Método público para obtener el salario actual
    }
};

int main() {
    Employee trabajador1(50000); // Crear un objeto Employee con un salario inicial de 50000
    cout << "Salario inicial: " << trabajador1.getSalary() << endl; // Imprimir el salario inicial del trabajador
    trabajador1.increaseSalary(8000); // Aumentar el salario en 8000
    cout << "Salario después del aumento: " << trabajador1.getSalary() << endl; // Imprimir el salario actualizado después del aumento
    return 0;
}
