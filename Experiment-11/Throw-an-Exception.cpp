#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    try
    {
        if (n < 0)
            throw "Negative number is not allowed!";

        cout << "Number: " << n << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}