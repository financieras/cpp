#include <iostream>

using namespace std;

int main(){
    int num = 0;

    while (true){
        cout << "Ingrese un número mayor a 10: " << endl;
        cin >> num;
        if (num > 10){
            break;
        }
    }

    cout << "El número ingresado es " << num << endl;

    return 0;
}