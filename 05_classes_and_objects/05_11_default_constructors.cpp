// Demonstrates a user-defined default constructor.


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
    complex(void);

    void print()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void)   // ----> This is a default constructor as it takes no parameters ....
{
    a = 23;
    b = 34;
}

int main()
{
    complex c1;

    c1.print();

    return 0;
}
