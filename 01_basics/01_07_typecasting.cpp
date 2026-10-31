// Demonstrates explicit conversion from a floating-point value to an integer.


#include<iostream>

using namespace std;

int main()
{
    float a = 1.3;
    cout << static_cast<int>(a) <<endl;

    return 0;
}
