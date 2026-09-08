#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    float basicSalary;
    float hra; // house rent allowance
    float da; // dearness allowance ???
public:
    //constructor
    Employee(int id, string name, float basic, float hraVal, float daVal) {
        empId = id;
        empName = name;
        basicSalary = basic;
        hra = hraVal;
        da = daVal;
    }
    //calculate gross salary
    float grossSalary() {
        return basicSalary + hra + da;
    }
    //display employee details
    void display() {
        
        cout << "____Employee Details____" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary() << endl;
    }
    //the destructor gets called automatically when emp goes out of scope
    ~Employee() {
        cout << "\nEmployee object for " << empName << " is being destroyed." << endl;
    }
};
int main() {
    int id;
    string name;
    float basic, hra, da;

    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter HRA: ";
    cin >> hra;
    cout << "Enter DA: ";
    cin >> da;
    Employee emp(id, name, basic, hra, da);
    emp.display();
    return 0;
}