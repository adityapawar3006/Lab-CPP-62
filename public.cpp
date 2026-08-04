#include<iostream>
#include<string>
using namespace std;
class Student{
private:
    string name;
    int rollno;
    float marks;

public:

void intputdetails(){
    cout<<"Enter Student Name:";
    getline(cin>>ws,name);
    cout<<"Enter Roll NUmber";
    cin>>rollno;
    cout<<"Enter Marks";
    cin>>marks;
  }

  void displaydetails() const{
    cout<<"\n------Student DEtails------\n";
    cout<<"Name :"<<name<<endl;
    cout<<"Roll NO :"<<rollno<<endl;
    cout<<"Marks:"<<marks<<endl;

  }

};
int main()
{
    Student s;
    s.intputdetails();
   // s.rollno=100;
    s.displaydetails();
    return 0;
}