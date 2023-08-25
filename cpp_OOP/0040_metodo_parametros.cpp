#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car miCoche;
  cout << miCoche.speed(200) << endl;
  return 0;
}