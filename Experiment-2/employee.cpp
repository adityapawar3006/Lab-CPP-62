#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;
    string department;
    int age;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Age: ";
        cin >> age;

        cout << "Enter Employee Salary: ";
        cin >> salary;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayData()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
    
};

int main()
{
    Employee e;

    e.getData();
    e.displayData();

    return 0;
}