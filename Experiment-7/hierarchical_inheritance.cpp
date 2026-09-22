#include<iostream>
using namespace std;
class Vehicle {
public:
Vehicle() { cout << "This is a Vehicle\n"; }
};
// first subclass
class Car : public Vehicle {
public:
Car() { cout << "This Vehicle is Car\n"; }
};
// second subclass
class Bus : public Vehicle {
public:
Bus() { cout << "This Vehicle is Bus\n"; }
};
// main function
int main()
{
// Creating object of subclass will
// invoke the constructor of base class.
Car obj1;
Bus obj2;
return 0;
}