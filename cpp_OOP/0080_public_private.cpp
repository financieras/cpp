#include <iostream>
using namespace std;

class MyClass {
	int x;	 // si no se especifica por defecto el atributo es private
  public:    // Public access specifier
    int a;   // Public attribute
    int b;
  private:   // Private access specifier
    int c;   // Private attribute
};

int main() {
  MyClass myObj;  // instanciamos el objeto
  myObj.a = 10;   // Allowed (a is public)
  myObj.b = 20;   // Allowed (b is public)
  //myObj.c = 5;  // Not allowed (c is private)
  
  // Imprimimos
  cout << myObj.a << endl;
  cout << myObj.b << endl;
  //cout << myObj.c << endl;	// daría error por ser private
  return 0;
}
