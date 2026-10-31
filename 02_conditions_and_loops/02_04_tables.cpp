// Reads an integer and prints its multiplication table.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a;
    cout << "Enter the integer whose table you need : ";
    cin >> a;

    for (int i = 1; i <= 10; i++)
    {
        cout << a << " X " << setw(2) << i << " = " << setw(2) << a*i << endl;
    }
    

    return 0;
}
