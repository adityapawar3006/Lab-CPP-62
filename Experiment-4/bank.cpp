#include<iostream>
using namespace std;

class SavingAccount{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

    public:
    SavingAccount(string name,int accNumber,double intialBalance,double rate){
        accountHolderName = name;
        accountHolderName = accNumber;
        balance = intialBalance;
        interestRate = rate;
    }
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout << "Deposited:₹" << amount << endl;
        }
    }
    void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance = amount;
            cout << "Withdrawn:₹" << amount << endl;
        }else{
            cout << "Insufficient balance!" << endl;
        }
    }
    void applyInterest(){
        double interest = balance*interestRate/100;
        balance+=interest;
        cout << "Interest Applied:₹"<<interest << endl;
    }
    void display(){
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder:" << accountHolderName << endl;
        cout << "Account Number:" << accountNumber << endl;
        cout << "Balance:₹" << balance << endl;
        cout << "Interest Rate:" << interestRate << endl;
    }
};

class CheckingAccount{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

    public:
    CheckingAccount(string name,int accNumber,double intialBalance,double fee){
        accountHolderName = name;
        accountNumber = accNumber;
        balance = intialBalance;
        transactionFee = fee;
    }
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout << "Deposited:₹" << amount << endl;
        }
    }
    void withdraw(double amount){
        double total = amount + transactionFee;
        if(total <= balance){
            balance = total;
            cout << "Withdrawn:₹"<< amount << "(₹ "<< transactionFee <<"fee applied)"<<endl;
    }else{
        cout << "Insufficient balance for withdrawl + fee!" << endl;
    }
}
void display(){
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder:" << accountHolderName << endl;
        cout << "Account Number:" << accountNumber << endl;
        cout << "Balance:₹" << balance << endl;
        cout << "Transaction Fee:" << transactionFee << endl;
}
};
int main(){
    SavingAccount savings("Alice",1001,5000.0,3.0);
    CheckingAccount checking("Bob",1002,3000.0,20.0);

    savings.display();
    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();
    savings.display();

    checking.display();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();
    return 0;
}