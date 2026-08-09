//first n natural numbers using a while loop
#include <iostream>
using namespace std;
int main() {
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    return 0;
}