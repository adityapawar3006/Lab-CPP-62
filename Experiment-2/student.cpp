#include<iostream>
using namespace std;
class student 
{
    private:
    string name;
    int rollno;
    float marks;
    char div;

    public:

    student (string n, int r, float m, char d)
    {
        name = n;
        rollno = r;
        marks=m;
        div=d;
    }
    void getdata()
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter roll no"<<endl;
        cin>>rollno;
        cout<<"enter marks"<<endl;
        cin>>marks;
        cout<<"enter div"<<endl;
        cin>>div;
    }
    void putdata()
    {
        cout<<" name"<<name<<endl;
        cout<<" roll no"<<rollno<<endl;
        cout<<" marks"<<marks<<endl;
        cout<<" div"<<div<<endl;

    }

};

int main(){
student s1("Aditya",62,98,'c');
s1.putdata();
return 0;
}