#include <iostream> 
#include <cmath>
const double PI = 3.14159; 
class Shape { 
 public:
 virtual double calculateArea() const = 0;
 virtual double calculatePerimeter() const = 0;
};
class Circle: public Shape { 
private:
 double radius; 
 public:
 Circle(double rad): radius(rad) {}
 double calculateArea() const override {
 return PI * pow(radius, 2); 
 }
 double calculatePerimeter() const override {
 return 2 * PI * radius; 
 }
};
class Rectangle: public Shape { 
 private:
 double length;
 double width; 
 public:
 Rectangle(double len, double wid): length(len), width(wid) {}
 double calculateArea() const override {
 return length * width; 
 }
 double calculatePerimeter() const override {
 return 2 * (length + width); 
 }
};
class Triangle: public Shape {
 private:
 double side1; 
 double side2; 
 double side3;
 public:
 Triangle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3) {}
 double calculateArea() const override {
 double s = (side1 + side2 + side3) / 2; 
 return sqrt(s * (s - side1) * (s - side2) * (s - side3));
 }
 double calculatePerimeter() const override {
 return side1 + side2 + side3; 
 }
};
int main() {

 Circle circle(7.0);
 Rectangle rectangle(4.2, 8.0); 
 Triangle triangle(4.0, 4.0, 3.2);
 std::cout << "Circle: " << std::endl;
 std::cout << "Area: " << circle.calculateArea() << std::endl;
 std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl; 
 std::cout << "\nRectangle: " << std::endl;
 std::cout << "Area: " << rectangle.calculateArea() << std::endl; 
 std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;
 std::cout << "\nTriangle: " << std::endl;
 std::cout << "Area: " << triangle.calculateArea() << std::endl; 
 std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl; 
 return 0; 
}