#include <iostream>
using namespace std;

int area (int) ;
int area (int,int);
float area (float);

int main()
{
    cout<<"Caliing the area() function for computing area of a square (side=5) - " <<area(5)<<"\n";
    cout<<"Caliing the area() function for computing area of a rectangle (length=5, width=10) - " <<area(5,10)<<"\n";
    cout<<"calling the area() function for computing the area of a circle (radius=5.5) - " <<area(5.5f)<<"\n";
    return 0;    
}

int area(int side)
{
    return(side*side);
}
  int area(int length,int width)
{
    return(length*width);
}
  float area(float radius)
{
    return(3.14*radius*radius);
}