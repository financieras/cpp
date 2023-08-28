/*
La clase FooClass tiene un constructor con una lista de inicialización y 
valores por defecto para los parámetros a, b y c. 
Si se llama al constructor sin argumentos, 
se utilizarán los valores por defecto 1, 2 y 3 para los parámetros a, b y c, respectivamente. 
Si se llama al constructor con argumentos, 
se utilizarán los valores proporcionados en lugar de los valores por defecto.
*/


#include<iostream>
using namespace std;

class FooClass{
    int x, y, z;
public:
    FooClass(int a = 1, int b = 2, int c = 3):x(a), y(b), z(c){}
    void printVars();
};

void FooClass::printVars(){
    cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}

int main(){
    FooClass fooObj1; 			//Inicialización con valores por defecto
    FooClass fooObj2(7, 8, 9); 	//Inicialización con parámetros de entrada explícitos
    fooObj1.printVars();
    fooObj2.printVars();
    return 0;
}