#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("filehandling.cpp",ios::app);

    while (fout) {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("filehandling.cpp");

    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}Aditya
pawar
