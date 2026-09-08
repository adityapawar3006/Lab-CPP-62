#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Accept a time value from the user
    void inputTime() {
        cout << "  Hours: ";
        cin >> hours;
        cout << "  Minutes: ";
        cin >> minutes;
        cout << "  Seconds: ";
        cin >> seconds;
    }

    // Add this time to another Time object, return the sum as a new Time
    Time addTime(const Time &t2) const {
        int h = hours + t2.hours;
        int m = minutes + t2.minutes;
        int s = seconds + t2.seconds;

        // Carry seconds -> minutes
        if (s >= 60) {
            m += s / 60;
            s %= 60;
        }
        // Carry minutes -> hours
        if (m >= 60) {
            h += m / 60;
            m %= 60;
        }

        return Time(h, m, s);
    }

    // Display in HH:MM:SS format, zero-padded
    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.inputTime();

    cout << "Enter second time:\n";
    t2.inputTime();

    Time result = t1.addTime(t2);

    cout << "\nFirst Time : ";
    t1.display();
    cout << "Second Time: ";
    t2.display();
    cout << "Sum Time   : ";
    result.display();

    return 0;
}