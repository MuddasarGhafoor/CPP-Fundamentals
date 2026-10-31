// Defines a structure and accesses the fields of a structure object.


#include<iostream>
#include<iomanip>

using namespace std;

typedef struct Programmer
{
    int ID;
    char character_name;
    float salary;
}prm;


int main()
{
    prm meer;
    meer.ID = 6813;
    meer.character_name = 's';
    meer.salary = 10.5;

    cout << "Meer's ID number is " << meer.ID << endl;
    cout << "Meer's character_name is " << meer.character_name << endl;
    cout << "Meer's salary is " << meer.salary << endl;

    return 0;
}
