// Demonstrates initialization through a parameterized constructor.


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
    complex(int , int);

    void print()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(int x , int y)
{
    a = x;
    b = y;
}

int main()
{
    complex a(4 , 5);

    a.print();

    return 0;
}
