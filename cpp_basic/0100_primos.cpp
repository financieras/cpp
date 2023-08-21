#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n_max = 100;

    cout << "Los números primos hasta " << n_max << " son:" << endl;

    cout << "2 "; // El primer primo es 2

    for (int i = 3; i <= n_max; i += 2) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}