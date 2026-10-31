// Demonstrates multiple constructors with different parameter lists.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class complex
{
private:
    int a;
    int b;
public:
    complex(int x , int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 0;
    }

    void print()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex a(4 , 5);
    a.print();

    complex b(7);
    b.print();

    complex c;
    c.print();

    return 0;
}
