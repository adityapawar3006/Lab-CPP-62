#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double breadth;
    double height;
public:
    //default constructor
    Box() {
        length = 1.0;
        breadth = 1.0;
        height = 1.0;
        cout << "\ndefault constructor called" << endl;
    }
    //parameterized constructor
    Box(double l,double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "\nParameterized constructor called" << endl;
    }
    //copy constructor ---> reference to an object of the same class || reads the member variables of the object passed in
    Box(const Box &b) {   // <&> for refrence ||const because copy constructor shouldnt modify the object its copying from ||// b IS box2 — just under a different name
        length = b.length;
        breadth = b.breadth;
        height = b.height;
        cout << "\nCopy constructor called" << endl;
    }
    //calculate volume
    double getvolume() {
        return length * breadth * height;
    }
    //display object information
    void display() {
        cout << "Length: " << length
             << ", Breadth: " << breadth
             << ", Height: " << height
             << ", Volume: " << getvolume() << endl;
    }
    //destructor
    //it will release memory backwards of how program ran. 
    // like if copy constructor was last call it will release copy constr.. then parametrized.. then default. same for objects
    ~Box() {  //program ends 
        cout << "Destructor called for Box (Volume was: " << getvolume() << ")" << endl;
    }
};
int main() {
    //default constructor
    Box box1;
    box1.display();
    //parameterized constructor 
    Box box2(2.0, 3.0, 4.0);
    box2.display();
    //copy constructor 
    Box box3(box2); 
    box3.display();
    return 0;
}