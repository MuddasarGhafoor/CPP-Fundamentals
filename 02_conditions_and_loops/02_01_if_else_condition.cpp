// Uses an if-else chain to decide party eligibility from a person's age.


#include<iostream>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age." << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "Your can not come to my party due to underage." << endl;
    }
    else if (age >= 80)
    {
        cout << "Your can not come to my party due to high age." << endl;
    }
    else
    {
        cout << "You can come to my party." << endl;
    }
        
    return 0;
}
