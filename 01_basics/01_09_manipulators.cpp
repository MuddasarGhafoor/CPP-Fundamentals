// Demonstrates output manipulators such as endl and setw.


#include<iostream>
#include<iomanip>

// Following are manipulatos....
// endl
// setw   ---->   (To use 'setw' manipulator , we have to include <iomanip> library....)

using namespace std;

int main()
{
    int a = 4 , b = 13 , c = 6813;

    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;

    cout << "The value of a with setw is : " << setw(4) << a << endl;
    cout << "The value of b with setw is : " << setw(4) << b << endl;
    cout << "The value of c with setw is : " << setw(4) << c << endl;

    return 0;
}
