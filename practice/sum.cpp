#include<iostream>
//using namespace std;
int main()
{
    int num1,num2,sum,avg;
    std::cout<<"Enter two number";
    std::cin>>num1;
    std::cin>>num2;
    sum=num1+num2;
    avg=sum/2;
    std::cout<<"sum of two number="<<sum<<"Average="<<avg;
    return 0;
}