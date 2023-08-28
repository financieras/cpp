/*
Constructor parametrizado: 
Es un constructor que tiene parámetros de entrada que se utilizan luego en la inicialización de las variables de clase.
*/

#include<iostream>
using namespace std;

class Vehiculo{
	int largo, ancho, alto;
	public:
	Vehiculo(int, int, int);    //Constructor parametrizado
	void imprimeDimensiones();
};

Vehiculo::Vehiculo(int l, int a, int h){
	largo = l;
	ancho = a;
	alto = h;
}

void Vehiculo::imprimeDimensiones(){
	cout<<"largo: "<< largo <<", ancho: "<< ancho <<", alto: " << alto <<endl;
}

int main(){
	Vehiculo vehiculo1(4700,1800,1700); //Inicialización con parámetros de entrada
	vehiculo1.imprimeDimensiones();
	return 0;
}