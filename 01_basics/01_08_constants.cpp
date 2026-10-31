// Demonstrates mutable variables and values protected with const.


#include<iostream>

using namespace std;

int main()
{
    int a = 6;
    cout << a << endl;

    a = 8;
    cout << a << endl;

    // In the upper case , the value of 'a' will be changed from 6 to 8. To avoid this problem , we use constants....

    const int b = 13;
    cout << b << endl;     // Now the value of 'b' can not be changed.

    return 0;
}
