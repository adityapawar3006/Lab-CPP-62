#include <iostream>
#include <fstream>
#include <exception>
using namespace std;

// CONCEPT 1: ENCAPSULATION
// Account class combines data members and member functions.
class Account {
protected:
    int accountNumber;
    string name;
    double balance;

public:
    // CONCEPT 2: CONSTRUCTOR
    // Initializes account details.
    Account(int a, string n, double b) {
        accountNumber = a;
        name = n;
        balance = b;
    }

    // CONCEPT 3: POLYMORPHISM
    // Virtual functions allow runtime polymorphism.
    virtual void deposit(double amount) {
        if (amount <= 0)
            throw "Invalid deposit amount!";
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= 0 || amount > balance)
            throw "Invalid withdrawal amount!";
        balance -= amount;
    }

    virtual void display() {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    virtual ~Account() {}
};

// CONCEPT 4: INHERITANCE
// SavingsAccount inherits from Account.
class SavingsAccount : public Account {
public:
    SavingsAccount(int a, string n, double b)
        : Account(a, n, b) {}

    // POLYMORPHISM: Overriding the display() function.
    void display() override {
        cout << "\nSavings Account";
        Account::display();
    }
};

// INHERITANCE
// CheckingAccount inherits from Account.
class CheckingAccount : public Account {
public:
    CheckingAccount(int a, string n, double b)
        : Account(a, n, b) {}

    // POLYMORPHISM: Overriding the display() function.
    void display() override {
        cout << "\nChecking Account";
        Account::display();
    }
};

int main() {
    int type, acc;
    string name;
    double balance, amount;

    cout << "1. Savings Account\n2. Checking Account\n";
    cout << "Enter account type: ";
    cin >> type;

    cout << "Enter account number: ";
    cin >> acc;

    cout << "Enter account holder name: ";
    cin >> name;

    cout << "Enter initial balance: ";
    cin >> balance;

    try {
        // CONCEPT 5: EXCEPTION HANDLING
        // Throws an exception for a negative balance.
        if (balance < 0)
            throw "Initial balance cannot be negative!";

        Account *a;

        // POLYMORPHISM: Base-class pointer refers to derived objects.
        if (type == 1)
            a = new SavingsAccount(acc, name, balance);
        else if (type == 2)
            a = new CheckingAccount(acc, name, balance);
        else
            throw "Invalid account type!";

        int choice;

        do {
            cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            try {
                switch (choice) {
                case 1:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    a->deposit(amount);
                    cout << "Amount deposited successfully.\n";
                    break;

                case 2:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    a->withdraw(amount);
                    cout << "Amount withdrawn successfully.\n";
                    break;

                case 3:
                    // Runtime polymorphism calls the derived display().
                    a->display();
                    break;

                case 4:
                    break;

                default:
                    cout << "Invalid choice!\n";
                }
            }
            catch (const char *msg) {
                // Handles deposit and withdrawal exceptions.
                cout << msg << endl;
            }

        } while (choice != 4);

        // CONCEPT 6: FILE HANDLING
        // Appends account details to account.txt.
        ofstream fout("account.txt", ios::app);

        if (!fout)
            throw "Unable to open file!";

        fout << acc << " " << name << " " << balance << endl;
        fout.close();

        cout << "\nAccount details saved to file.\n";

        delete a;
    }
    catch (const char *msg) {
        // Handles account creation and file-related exceptions.
        cout << msg << endl;
    }

    return 0;
}