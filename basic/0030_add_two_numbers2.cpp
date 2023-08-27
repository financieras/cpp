#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";

  // escribir dos enteros separados por un espacio
  cin >> first_number >> second_number;

  // variable sum
  sum = first_number + second_number;

  // imprimir la suma 
  cout << first_number << " + " <<  second_number << " = " << sum << endl;     

  return 0;
}