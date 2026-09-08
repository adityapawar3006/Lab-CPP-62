#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
private:
    string mobileNumber;
    string customerName;
    float balance;
    string currentPlan;
    int validityDays;

public:
    // Default constructor
    MobileRecharge() {
        mobileNumber = "0000000000";
        customerName = "Unknown";
        balance = 0.0;
        currentPlan = "None";
        validityDays = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    MobileRecharge(string number, string name) {
        mobileNumber = number;
        customerName = name;
        balance = 0.0;
        currentPlan = "None";
        validityDays = 0;
        cout << "Account created for " << customerName << endl;
    }

    // Recharge the account
    void recharge(float amount, string plan, int days) {
        if (amount <= 0) {
            cout << "Invalid recharge amount!" << endl;
            return;
        }
        balance += amount;
        currentPlan = plan;
        validityDays = days;
        cout << "Recharge of Rs. " << amount << " successful. Plan: "
             << plan << " activated for " << days << " days." << endl;
    }

    // Deduct balance (e.g., for calls, SMS, data usage)
    void deductBalance(float amount, string reason) {
        if (amount > balance) {
            cout << "Insufficient balance for " << reason << "!" << endl;
            return;
        }
        balance -= amount;
        cout << "Rs. " << amount << " deducted for " << reason
             << ". Remaining balance: Rs. " << balance << endl;
    }

    // Display account details
    void display() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Mobile Number  : " << mobileNumber << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "Current Plan   : " << currentPlan << endl;
        cout << "Validity       : " << validityDays << " days" << endl;
        cout << "Balance        : Rs. " << balance << endl;
        cout << "----------------------------" << endl;
    }

    // Destructor
    ~MobileRecharge() {
        cout << "Destructor called for account: " << mobileNumber << endl;
    }
};

int main() {
    cout << "--- Creating Account 1 (Default Constructor) ---" << endl;
    MobileRecharge acc1;
    acc1.display();

    cout << "\n--- Creating Account 2 (Parameterized Constructor) ---" << endl;
    MobileRecharge acc2("9876543210", "Suresh Patil");
    acc2.display();

    cout << "\n--- Recharging Account 2 ---" << endl;
    acc2.recharge(299, "Unlimited Calls + 1.5GB/day", 28);
    acc2.display();

    cout << "\n--- Deducting Balance from Account 2 ---" << endl;
    acc2.deductBalance(50, "extra data pack");
    acc2.display();

    cout << "\n--- Trying to deduct more than available balance ---" << endl;
    acc2.deductBalance(500, "international call");

    cout << "\n--- End of main(), destructors will now be invoked ---" << endl;
    return 0;
}