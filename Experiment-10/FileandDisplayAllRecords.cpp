#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("sample.txt", ios::app);

    cout << "Enter records (-1 to stop):" << endl;

    while (true)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    cout << "\nAll Records:" << endl;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}