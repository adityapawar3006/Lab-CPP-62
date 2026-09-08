#include <iostream>
using namespace std;

class Factors
{
    int numerator1, denominator1;
    int numerator2, denominator2;

public:
    void getdata()
    {
        cout << "Enter numerator 1: ";
        cin >> numerator1;

        cout << "Enter denominator 1: ";
        cin >> denominator1;

        cout << "Enter numerator 2: ";
        cin >> numerator2;

        cout << "Enter denominator 2: ";
        cin >> denominator2;
    }

    void add()
    {
        int numerator, denominator;

        numerator = (numerator1 * denominator2) +
                    (numerator2 * denominator1);

        denominator = denominator1 * denominator2;

        cout << "\nAddition = "
             << numerator << "/" << denominator << endl;
    }
    void substract()
    {
        int numerator, denominator;

        numerator = (numerator1 * denominator2) -
                    (numerator2 * denominator1);

        denominator = denominator1 * denominator2;

        cout << "\nSubstraction = "
             << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Factors f;

    f.getdata();
    f.add();
    f.substract();
    
    return 0;
}