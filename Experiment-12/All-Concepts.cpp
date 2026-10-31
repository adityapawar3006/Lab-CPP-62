#include <iostream>
#include <string>

using namespace std;

// base class representing a general bank account
class account {
private:
    // kept private so outside code can't mess with the balance directly
    int account_number;
    string holder_name;

protected:
    // protected so child classes can update the balance during withdrawals
    double balance;
    double total_deposits;
    double total_withdrawals;

public:
    account(int acc_no, string name, double initial_balance) {
        account_number = acc_no;
        holder_name = name;
        balance = initial_balance;
        total_deposits = 0;
        total_withdrawals = 0;
    }

    // adds money to the account after checking if the amount is valid
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "invalid deposit amount." << endl;
            return;
        }
        balance += amount;
        total_deposits += amount;
        cout << "deposited: " << amount << " | new balance: " << balance << endl;
    }

    // virtual function lets child classes apply their own withdrawal rules
    virtual void withdraw(double amount) {
        if (amount <= 0) {
            cout << "invalid withdrawal amount." << endl;
            return;
        }
        if (amount > balance) {
            cout << "insufficient balance." << endl;
            return;
        }
        balance -= amount;
        total_withdrawals += amount;
        cout << "withdrawn: " << amount << " | remaining balance: " << balance << endl;
    }

    // prints out the current status and transaction summary
    void show_statement() {
        cout << "\n--- account statement ---" << endl;
        cout << "account no : " << account_number << endl;
        cout << "holder     : " << holder_name << endl;
        cout << "deposits   : " << total_deposits << endl;
        cout << "withdrawals: " << total_withdrawals << endl;
        cout << "balance    : " << balance << endl;
        cout << "-------------------------\n" << endl;
    }
};

// inherits from account and enforces a minimum balance rule
class savings_account : public account {
private:
    double min_balance;

public:
    savings_account(int acc_no, string name, double initial_balance)
        : account(acc_no, name, initial_balance) {
        min_balance = 500.0; // must keep at least 500 in savings
    }

    // overrides base withdraw to make sure minimum balance is maintained
    void withdraw(double amount) override {
        if (amount <= 0) {
            cout << "invalid withdrawal amount." << endl;
            return;
        }
        if (balance - amount < min_balance) {
            cout << "cannot withdraw. savings account requires a minimum balance of " << min_balance << endl;
            return;
        }
        balance -= amount;
        total_withdrawals += amount;
        cout << "withdrawn from savings: " << amount << " | remaining balance: " << balance << endl;
    }
};

// inherits from account and applies a small fee per withdrawal
class checking_account : public account {
private:
    double transaction_fee;

public:
    checking_account(int acc_no, string name, double initial_balance)
        : account(acc_no, name, initial_balance) {
        transaction_fee = 10.0; // flat fee of 10 per withdrawal
    }

    // overrides base withdraw to include the transaction fee
    void withdraw(double amount) override {
        if (amount <= 0) {
            cout << "invalid withdrawal amount." << endl;
            return;
        }
        if (amount + transaction_fee > balance) {
            cout << "insufficient balance to cover withdrawal and transaction fee." << endl;
            return;
        }
        balance -= (amount + transaction_fee);
        total_withdrawals += amount;
        cout << "withdrawn from checking: " << amount << " (fee: " << transaction_fee << ") | remaining balance: " << balance << endl;
    }
};

int main() {
    // testing savings account
    cout << "creating savings account..." << endl;
    savings_account sav(101, "Aditya", 2000.0);
    sav.deposit(500.0);
    sav.withdraw(2100.0); // fails due to minimum balance rule
    sav.withdraw(1000.0); // succeeds
    sav.show_statement();

    // testing checking account using a base class pointer to show polymorphism
    cout << "creating checking account..." << endl;
    account* chk = new checking_account(102, "Dhananjay", 1500.0);
    chk->deposit(300.0);
    chk->withdraw(500.0); // deducts 500 + 10 fee
    chk->show_statement();

    delete chk;
    return 0;
}