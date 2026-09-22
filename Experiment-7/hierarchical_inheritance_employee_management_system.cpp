#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployeeDetails() {
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nEmployee Name: " << employeeName;
        cout << "\nDepartment: " << department;
    }
};

class TeachingStaff : public Employee {
private:
    string subject;
    string qualification;

public:
    void getTeachingDetails() {
        getEmployeeDetails();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingDetails() {
        displayEmployeeDetails();

        cout << "\nSubject: " << subject;
        cout << "\nQualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee {
private:
    string designation;
    int workingHours;

public:
    void getNonTeachingDetails() {
        getEmployeeDetails();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingDetails() {
        displayEmployeeDetails();

        cout << "\nDesignation: " << designation;
        cout << "\nWorking Hours: " << workingHours << endl;
    }
};

int main() {
    TeachingStaff teacher;
    NonTeachingStaff staff;

    cout << "\nEnter Teaching Staff Details\n";
    teacher.getTeachingDetails();

    cout << "\nEnter Non-Teaching Staff Details\n";
    staff.getNonTeachingDetails();

    cout << "\nTeaching Staff Details";
    teacher.displayTeachingDetails();

    cout << "\nNon-Teaching Staff Details";
    staff.displayNonTeachingDetails();

    return 0;
}