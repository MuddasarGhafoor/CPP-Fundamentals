// Demonstrates selection among exact age cases with a switch statement.


#include<iostream>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age." << endl;
    cin >> age;

    switch (age)
    {
    case 15:
        cout << "You are underage." << endl;
        break;

    case 18:
        cout << "Apply for a ID card." << endl;
        break;

    case 81:
        cout << "Take care of yourself" << endl;
        break;
    
    default:
    cout << "No special cases!!" << endl;
        break;
    }

    return 0;
}
