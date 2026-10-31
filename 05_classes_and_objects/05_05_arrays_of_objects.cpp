// Demonstrates creating and using an array of class objects.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class employee
{
    int ID;
    int salary;

public:
    void setting(void)
    {
        salary = 124;
        cout << "Enter the ID of the employee : ";
        cin >> ID;
    }
    void getting(void)
    {
        cout << "The ID of this employee is " << ID << endl;
        cout << "The salary of this employee is " << salary << endl;
    }
};

int main()
{
    employee company[4];
    for (int i = 0; i < 4; i++)
    {
        company[i].setting();
        company[i].getting();
    }
    
    return 0;
}
