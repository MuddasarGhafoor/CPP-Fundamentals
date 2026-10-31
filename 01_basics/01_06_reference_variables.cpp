// Demonstrates how a reference variable aliases an existing variable.


#include<iostream>

using namespace std;

int main()
{
    int a = 8;
    int &b = a;

    cout << a <<endl;
    cout << b <<endl;

    return 0;
}
