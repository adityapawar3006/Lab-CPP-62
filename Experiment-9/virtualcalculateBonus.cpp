#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateBonus() {
        return 0;
    }
};

class Manager : public Employee {
public:
    double calculateBonus() override {
        return 50000;
    }
};

class Developer : public Employee {
public:
    double calculateBonus() override {
        return 20000;
    }
};

int main() {
    Manager m;
    Developer d;
    Employee *e;

    e = &m;
    cout << "Manager Bonus: " << e->calculateBonus() << endl;

    e = &d;
    cout << "Developer Bonus: " << e->calculateBonus() << endl;

    return 0;
}