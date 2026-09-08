#include<iostream>
using namespace std;
class Complex {
    private:
    int real,imag;
    
    public:
    Complex(int r=0, int i=0):real(r),imag(i){}

    int add(Complex x1){
        real =real + x1.real;
        imag=imag+x1.imag;
        return 0;

    }

    
    Complex substract(const Complex &c){
        return Complex(real-c.real,imag-c.imag); }
        void display()const{
            cout<<real<<"-i"<<imag<<endl;
        }

};
    int main(){
        Complex c1(4,5),c2(8,9);
        c1.add(c2);
        Complex diff=c1.substract(c2);

        cout<<"First Complex Number :",c1.display();
         cout<<"Second Complex Number :",c2.display();
          cout<<"Addition :",c1.display();
           cout<<"Subtraction :",diff.display();
           return 0;


    }