// Demonstrates pointers, address-of, dereferencing, and pointer-to-pointer syntax.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // What is a Pointer?  ----> Pointer is a data type which holds the address of another data type....

    int a = 5;
    int *b = &a;

    //    &  ---->  (Address of) operator....
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl << endl;

    //    *  ---->  Dereference operator....
    cout << "The value of a is " << a << endl;
    cout << "The value at address b is " << *b << endl << endl;

    // Pointer to pointer....(a pointer which hold the address of another pointer)
    int **c = &b;
    cout << "The address of b is " << c << endl;
    cout << "The address of b is " << &b << endl;
    cout << "The value at address c is " << **c << endl << endl;

    return 0;
}
