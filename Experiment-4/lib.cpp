#include<iostream>
#include<string>
using namespace std;
class LibraryBook{
    private:    
     string title; //title to print on output
     string author; // author to print on output 
      int bookid;  //integer to identify unique id  
     bool isIssued; // to check true false conditions... true when someone has it??? mayhaps
     string issuedTo; //if someone has it isIssued will be true. 
   
    public:
  //this is parameterized consructor. runs on obejct creation so new books will have new variable values stored sepratly. 
      LibraryBook(string t, string a , int id) {     
        title = t;
        author = a;
        bookid = id;
        isIssued = false;  // default value is set to false. can be changed later with assignment functions.
        issuedTo = "" ;  

   } 
   //first method check if book is issued and output if issued-->> to whom issued to 
   void issueBook(string studentName) {
        if (!isIssued) {
            isIssued = true;
            issuedTo = studentName;
            cout << "Book issued to: " << studentName << endl;
        } else {
            cout << "\nBook already issued to " << issuedTo << "!" << endl;
        }
    }
    // second method that also checks if book is issued and on return it sets boolean value to false so it can be issued again
    void returnBook() {
        if (isIssued) {
            cout << "\nBook returned by: " << issuedTo << endl;
            isIssued = false;
            issuedTo = "";
        } else {
            cout << "\nBook was not issued!" << endl;
        }
    }
    // this methode just displays the values of datamembers of the class for diff obj. like titlw , id, author, and status.
    void display() {
        cout << "\n[Library Book]" << endl;
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << (isIssued ? ("Issued to " + issuedTo) : "Available\n") << endl;
    }
};

int main() {
    LibraryBook book1("Bleach Thousand Year Blood War", "Tite Kubo", 101);
    LibraryBook book2("Attack on Titan", "Hajime Isayama", 102);

    book1.display();   //both start Available
    book2.display();

    book1.issueBook("Shivam");
    book2.issueBook("Aditya");
    book1.display();   //both show Issued
    book2.display();

    book1.returnBook();
    book2.returnBook();
    book1.display();   //both show Available again —  works for both obj
    book2.display();   

    return 0;
}