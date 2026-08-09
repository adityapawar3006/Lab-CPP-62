//Area and circumference of a circle
#include <iostream>
using namespace std;
int main() {
    float radius;
    const float PI = 3.14159;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area = " << PI * radius * radius << endl;
    cout << "Circumference = " << 2 * PI * radius;
    return 0;
}