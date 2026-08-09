#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a << " is largest";
    else if (b > a)
        cout << b << " is largest";
    else
        cout << "Both are equal";
    return 0;
}