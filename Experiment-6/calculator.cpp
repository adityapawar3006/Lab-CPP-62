#include<iostream>
using namespace std;
class Calculator{
    public:
        int add(int a, int b) {
            return a+b; //return the sum of interger when object passes values of int
        }
        int add(int a, int b, int c){
            return a+b+c; //return sum of 3
        }
        int add_float(float a, float b){
            return a+b; //return sum of floats

        }
};
int main (){
   Calculator A;
   cout << "sum of 2 int: "<< A.add(10,20) << endl;
   cout << "sum of 3 int: " << A.add(10,20,30) << endl;
   cout << "sum of 2 float: " << A.add_float(20.20,40.40) << endl;
}