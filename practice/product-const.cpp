#include <iostream>
using namespace std;
class Product
{
    string productName;
    int productId;
    int quantity;
    float price;

public:

Product(string n,int p, int q,float r)
{
    productName=n;
    productId=p;
    quantity=q;
     price=r;

}
   /* void getdata()
    {
        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }*/

    void putdata()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p("ado",76567,7,99999);

   // p.getdata();
    p.putdata();

    return 0;
}