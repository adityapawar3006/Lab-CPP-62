//Swap two numbers without using a third variable
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: " << a << " " << b;
    return 0;
}