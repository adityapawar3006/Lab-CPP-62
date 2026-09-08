#include<iostream>
#include<string>
using namespace std;

class Patient{
    private:
     string pname; 
     int pid;   
     int age;   
     string disease; 
     double feePerVisit; //fixed consultation fee, doesnt change per patient type here   idk if i shouldve used const keyword hmmmmmmmmmm
     double totalBill; //this is calculated later, starts at 0 since no visits yet

    public:
    //parameterized constructor. every patient obj gets their own separate values when created
    Patient(string n, int id, int a, string dis, double fee) {
        pname = n;
        pid = id;
        age = a;
        disease = dis;
        feePerVisit = fee;
        totalBill = 0.0;   //initial charge 0, later changes value when passing via parameters
    }

    //this method is useless but question requires it
    void registerPatient() {
        cout << "\nPatient " << pname << " registered successfully.\n" << endl;
    }

    //multiply fees with visits 
    void calculateCharges(int visits) {
        totalBill = feePerVisit * visits;
        cout << "Total charges for " << visits << " visit(s): Rs" << totalBill << endl;
    }

    // displayys all data members, like account statement but for patient
    void display() {
        cout << "\n[Patient Record]" << endl; /// why this line is not printing on first call ??? // but prints on second obj's call???

        cout << "Patient ID: " << pid << endl;
        cout << "Name: " << pname << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Consultation Fee: Rs" << feePerVisit << endl;
        cout << "Total Bill: Rs" << totalBill << endl;
    }
};

int main() {
    Patient p1("Aditya", 501, 34, "Viral Fever", 300.0);
    Patient p2("shivam", 502, 45, "Back Pain", 450.0);

    p1.registerPatient();
    p2.registerPatient();

    p1.calculateCharges(3);   //3 visits for fever
    p2.calculateCharges(1);   //1 visit only

    p1.display();
    p2.display();

    return 0;
}