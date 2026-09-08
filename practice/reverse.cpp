#include <iostream>
using namespace std;

int main(){
    int num,rem,result=0;

    cout<<"Enter a number: ";
    cin>>num;

    while(num>0){
        rem= num%10;
        result=result*10+rem;
        num=num/10;
    }
    cout<<"Reversed number = "<<result;
    return 0;
}