// Demonstrates a static data member shared by every class object.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class employee
{
    int ID;
    int employee_number;
    static int count;

public:
    void setting(void)
    {
        cout << "Enter the ID" << endl;
        cin >> ID;
        count++;
        employee_number = count;
    }
    void display(void)
    {
        cout << "The ID of employee " << employee_number << " is " << ID << endl;

    }
};

int employee :: count;

int main()
{
    employee meer , hamza , ali;
    meer.setting();
    meer.display();

    hamza.setting();
    hamza.display();

    ali.setting();
    ali.display();

    return 0;
}
