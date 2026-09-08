#include <iostream>
using namespace std;

class Employee {
public:
    // Overloaded function: Basic Salary only
    float calculateSalary(float basic) {
        return basic;
    }

    // Overloaded function: Basic Salary + HRA
    float calculateSalary(float basic, float hra) {
        return basic + hra;
    }

    // Overloaded function: Basic Salary + HRA + DA
    float calculateSalary(float basic, float hra, float da) {
        return basic + hra + da;
    }
};

int main() {
    Employee emp;

    // Salary using Basic Salary only
    float salary1 = emp.calculateSalary(20000);
    cout << "Salary (Basic only): " << salary1 << endl;

    // Salary using Basic Salary + HRA
    float salary2 = emp.calculateSalary(20000, 5000);
    cout << "Salary (Basic + HRA): " << salary2 << endl;

    // Salary using Basic Salary + HRA + DA
    float salary3 = emp.calculateSalary(20000, 5000, 3000);
    cout << "Salary (Basic + HRA + DA): " << salary3 << endl;

    return 0;
}