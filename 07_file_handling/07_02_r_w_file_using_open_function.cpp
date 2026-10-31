// Opens, writes, reads, and closes text files through the open member function.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample write.txt");
    if (!out)
    {
        cerr << "Could not open sample write.txt for writing." << endl;
        return 1;
    }
    out << "This is Me.\n";
    out.close();

    ifstream in;
    string st;
    in.open("sample read.txt");
    if (!in)
    {
        cerr << "Could not open sample read.txt for reading." << endl;
        return 1;
    }
    getline(in , st);
    cout << st;
    in.close();


    return 0;
}
