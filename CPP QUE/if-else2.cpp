//largest of three numbers
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " is largest";
    else if (b >= a && b >= c)
        cout << b << " is largest";
    else
        cout << c << " is largest";
    return 0;
}