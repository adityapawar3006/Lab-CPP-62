#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt");

    while (fout)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    int lines = 0, words = 0, characters = 0;

    while (getline(fin, line))
    {
        lines++;
        characters += line.length() + 1;

        stringstream ss(line);
        string word;

        while (ss >> word)
            words++;
    }

    fin.close();

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << characters << endl;

    return 0;
}