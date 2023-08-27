// main.cpp

#include "header.h"

int main() {
    int num1 = 5;
    int num2 = 7;
    
    int result = sum(num1, num2);
    
    cout << "Sum: " << result << endl;
    
    return 0;
}


/*
g++ -c implementation.cpp -o implementation.o
g++ main.cpp implementation.o -o programa
./programa
*/

/*
En una sola línea:
g++ main.cpp implementation.cpp && ./a.out
*/