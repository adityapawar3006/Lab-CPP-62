#include <iostream>
using namespace std;
class MyClass {
private:
int value;
public:
MyClass(int val)
: value(val)
{
}
bool operator==(const MyClass& other) const
{
return value == other.value;
}
bool operator!=(const MyClass& other) const
{
return !(*this == other);
}
bool operator<(const MyClass& other) const
{
return value < other.value;
}
bool operator>(const MyClass& other) const
{
return value > other.value;
}
bool operator<=(const MyClass& other) const
{
return !(*this > other);
}
bool operator>=(const MyClass& other) const
{
return !(*this < other);
}
};
int main()
{
MyClass obj1(20);
MyClass obj2(20);
if (obj1 == obj2) {
cout << "obj1 is equal to obj2" << endl;
}
else {
cout << "obj1 is not equal to obj2" << endl;
}
if (obj1 < obj2) {
cout << "obj1 is less than obj2" << endl;
}
else {
cout << "obj1 is not less than obj2" << endl;
}
if (obj1 != obj2) {
cout << "obj1 is not equal to obj2" << endl;
}
else {
cout << "obj1 is equal to obj2" << endl;
}
if (obj1 > obj2) {
cout << "obj1 is greater than obj2" << endl;
}
else {
cout << "obj1 is not greater than obj2" << endl;
}
if (obj1 <= obj2) {
cout << "obj1 is less than or equal to obj2"
<< endl;
}
else {
cout << "obj1 is not less than or equal to obj2"
<< endl;
}
if (obj1 >= obj2) {
cout << "obj1 is greater than or equal to obj2"
<< endl;
}
else {
cout << "obj1 is not greater than or equal to obj2"
<< endl;
}
return 0;
}