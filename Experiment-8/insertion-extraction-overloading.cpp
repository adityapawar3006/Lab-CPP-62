// C++ program to overload the insertion (<<) and extraction (>>) operators
// for a user-defined class using friend functions.
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    // Default constructor
    Distance() : feet(0), inch(0) {}

    // Parameterized constructor
    Distance(int f, int i) : feet(f), inch(i) {}

    // Overloading extraction operator (>>) to accept input directly, e.g. cin >> d;
    // Declared as a friend so it can access private members and take
    // istream as the left-hand operand.
    friend istream& operator>>(istream &in, Distance &d);

    // Overloading insertion operator (<<) to display output directly, e.g. cout << d;
    friend ostream& operator<<(ostream &out, const Distance &d);
};

// Definition of overloaded extraction operator
istream& operator>>(istream &in, Distance &d) {
    cout << "Enter feet: ";
    in >> d.feet;
    cout << "Enter inches: ";
    in >> d.inch;
    return in; // returning the stream allows chaining, e.g. cin >> d1 >> d2;
}

// Definition of overloaded insertion operator
ostream& operator<<(ostream &out, const Distance &d) {
    out << d.feet << "\'" << d.inch << "\"";
    return out; // returning the stream allows chaining, e.g. cout << d1 << d2;
}

int main() {
    Distance d1, d2;

    // Using overloaded >> operator directly on objects
    cout << "----- Enter First Distance -----\n";
    cin >> d1;
    cout << "----- Enter Second Distance -----\n";
    cin >> d2;

    // Using overloaded << operator directly on objects
    cout << "\nFirst Distance : " << d1 << endl;
    cout << "Second Distance: " << d2 << endl;

    return 0;
}