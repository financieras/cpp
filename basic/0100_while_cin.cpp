#include <iostream>

using namespace std;

int main(){
    int num = 0;
    cout << "Ingrese un número mayor a 10: " << endl;
    cin >> num;

    while (num <= 10){
        cout << "INGRESE UN NÚMERO MAYOR A 10: " << endl;
        cin >> num;
    }

    cout << "El número ingresado es " << num << endl;

    return 0;
}