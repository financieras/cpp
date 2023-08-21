#include <iostream>
using namespace std;

// impares entre 10 y 1

int main() {
    for (int i = 10; i >= 1; i--) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
