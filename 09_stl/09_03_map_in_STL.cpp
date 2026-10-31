// Stores student marks in a map and traverses key-value pairs in key order.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<map>

using namespace std;

int main()
{
    map <string , int> marks;
    marks["Hamza"] = 98;
    marks["Hamdan"] = 78;
    marks["Danial"] = 58;

    map <string , int> :: iterator iter;
    for ( iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << "Marks of " << (*iter).first << " are " << (*iter).second << endl;
    }
    

    return 0;
}
