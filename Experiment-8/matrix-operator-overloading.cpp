// C++ program to create a Matrix class and overload
// the +, -, and == operators (Binary & Relational Operator Overloading)
#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

class Matrix {
private:
    int mat[ROWS][COLS];

public:
    // Default constructor
    Matrix() {
        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                mat[i][j] = 0;
    }

    // Function to accept matrix elements
    void getMatrix() {
        cout << "Enter " << ROWS << "x" << COLS << " matrix elements:\n";
        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                cin >> mat[i][j];
    }

    // Function to display matrix elements
    void display() const {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }

    // Overloading (+) operator for matrix addition
    Matrix operator+(const Matrix &m2) {
        Matrix temp;
        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                temp.mat[i][j] = this->mat[i][j] + m2.mat[i][j];
        return temp;
    }

    // Overloading (-) operator for matrix subtraction
    Matrix operator-(const Matrix &m2) {
        Matrix temp;
        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                temp.mat[i][j] = this->mat[i][j] - m2.mat[i][j];
        return temp;
    }

    // Overloading (==) operator to compare two matrices
    bool operator==(const Matrix &m2) const {
        for (int i = 0; i < ROWS; i++)
            for (int j = 0; j < COLS; j++)
                if (mat[i][j] != m2.mat[i][j])
                    return false;
        return true;
    }
};

int main() {
    Matrix m1, m2;

    cout << "----- Enter First Matrix -----\n";
    m1.getMatrix();
    cout << "----- Enter Second Matrix -----\n";
    m2.getMatrix();

    Matrix sum = m1 + m2;   // uses overloaded +
    Matrix diff = m1 - m2;  // uses overloaded -

    cout << "\nFirst Matrix:\n";
    m1.display();
    cout << "\nSecond Matrix:\n";
    m2.display();

    cout << "\nSum of Matrices:\n";
    sum.display();

    cout << "\nDifference of Matrices:\n";
    diff.display();

    // uses overloaded ==
    if (m1 == m2)4
        cout << "\nBoth matrices are equal.\n";
    else
        cout << "\nBoth matrices are not equal.\n";

    return 0;
}