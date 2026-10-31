// Demonstrates runtime polymorphism through a virtual member function.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class base
{
    public:
        int a = 1;
        virtual ~base() = default;
        virtual void display()
        {
            cout << "Displaying base class variable a : " << a << endl;
        }
};

class derived : public base
{
    int b = 2;
    public:
        void display() override
        {
            cout << "Displaying base class variable a : " << a << endl;
            cout << "Displaying derived class variable b : " << b << endl;
        }
};

int main()
{
    base * b_ptr;
    base obj_b;

    derived obj_d;

    b_ptr = & obj_d;
    b_ptr -> display();

    return 0;
}
