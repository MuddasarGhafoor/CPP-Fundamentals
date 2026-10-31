// Writes and reads text files using stream constructors and validates each stream.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    string st1 = "Softwere engineer";
    // Opening files using constructor and writing it....
    ofstream out("sample write.txt");    // Write operation....
    if (!out)
    {
        cerr << "Could not open sample write.txt for writing." << endl;
        return 1;
    }
    out << st1;

    string st2;
    // Opening files using constructor and reading it....
    ifstream in("sample read.txt");    // Read operation....
    if (!in)
    {
        cerr << "Could not open sample read.txt for reading." << endl;
        return 1;
    }
    getline(in , st2);
    cout << st2;
    // in >> st2;  ----> reads only one whitespace-delimited word.

    return 0;
}
