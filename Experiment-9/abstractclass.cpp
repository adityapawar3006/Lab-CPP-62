#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts" << endl;
    }

    void stop() override {
        cout << "Car stops" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts" << endl;
    }

    void stop() override {
        cout << "Bike stops" << endl;
    }
};

int main() {
    Car c;
    Bike b;
    Vehicle *v;

    v = &c;
    v->start();
    v->stop();

    v = &b;
    v->start();
    v->stop();

    return 0;
}