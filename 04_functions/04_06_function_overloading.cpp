// Demonstrates function overloading by calculating cube and cuboid volumes.


#include<iostream>
#include<iomanip>

using namespace std;

int volume(int l , int b , int h)
{
    return (l*b*h);
}

int volume(int a)
{
    return (a*a*a);
}

int main()
{
    cout << "The volume of cuboid of length  2 , breath 3 and height 4 is : " << volume(2 ,3 , 4) << endl;
    cout << "The volume of cube of side 3 is : " << volume(3) << endl;

    return 0;
}
