//Area and perimeter of a rectangle
#include <iostream>
using namespace std;
int main() {
    float length, breadth;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    cout << "Area = " << length * breadth << endl;
    cout << "Perimeter = " << 2 * (length + breadth);
    return 0;
}