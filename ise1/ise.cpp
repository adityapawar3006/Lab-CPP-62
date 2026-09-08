#include<iostream>
using namespace std;
class student
{
    private:
    
        string name;
        int rollno;
        char div;
    
    public:
    student(string n,int r,char d)
    {
        name=n;
        rollno=r;
        div=d;
    }
    student()
    {}
    void getdata()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
         cout<<"Enter your Roll no"<<endl;
         cin>>rollno;
          cout<<"Enter your Division"<<endl;
          cin>>div;
        
    }
    void putdata()
    {
        cout<<"/n-------Student Details-------"<<endl;
        cout<<"Your name is :"<<name<<endl;
        cout<<"Your Roll no is :"<<rollno<<endl;
        cout<<"Your Division is :"<<div<<endl;

    }
};
int main()
{
    student s1("Balaji",48,'c');
    student s2("Aditya",62,'c');
    student s3("Dhananjay",60,'a');
    student s4("Akshay",64,'b');


    s1.getdata();
    s1.putdata();

    s2.getdata();
    s2.putdata();

    s3.getdata();
    s3.putdata();

    s4.getdata();
    s4.putdata();

}