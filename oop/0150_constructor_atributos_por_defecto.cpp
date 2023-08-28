/*
Otra forma de definir de manera implícita un constructor por defecto 
puede ser obligandolo a tomar como valores para sus variables 
los que se le asignen a dichas variables directamente en su declaración. 
Para lograr esto es necesario utilizar el operador de asignación = y 
la palabra reservada default en la declaración del constructor por defecto. 
Con este procedimiento se le comunica al compilador de C++ que no se va a definir un constructor 
sino que se va a utilizar el constructor por defecto que implementaría por si mismo el compilador.
*/


#include<iostream>
using namespace std;

class FooClass{
	int x = 1, y = 2, z = 3; //Valores asignados a las variables en la declaración
public:
	FooClass() = default; //Obligando al constructor a tomar los valores de la declaración de las variables
	FooClass(const FooClass&) = default;  //Se va a utilizar el constructor por copia que implementa el compilador
	void printVars();
};

// ¡No hay definición del constructor!

void FooClass::printVars(){
	cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main(){
	FooClass fooObj1;
	fooObj1.printVars();
	return 0;
}

/*
Compilar y ejecutar con g++ -std=c++11 archivo.cpp
para evitar los warnings que se producen con la versión que tengo instalada ahora que es la 14.

clear && g++ -std=c++11 0150_constructor_atributos_por_defecto.cpp && ./a.out

*/