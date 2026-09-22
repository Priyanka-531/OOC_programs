#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle\n";
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of vehicle\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This vehicle is a Car\n";
    }
};
class Bus: public Vehicle, public Fare{
public:
Bus(){cout<<"this Vehicle is Bus with fare\n";}
};
int main(){
  Bus obj2;
return 0;
}
