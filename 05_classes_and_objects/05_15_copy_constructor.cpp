// Demonstrates construction of an object by copying another object.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class number
{
    private:
        int a;
    public:
        number()
        {
            a = 0;
        }

        number(int num)
        {
            a = num;
        }

        // When no copy constructor is found , compiler supplies its own copy constructor....
        number(const number &c)
        {
            cout << "Copy constructor called!!" << endl;
            a = c.a;
        }

        void display()
        {
            cout << "The number for this object is : " << a << endl;
        }
};

int main()
{
    number x , y(45);

    x.display();
    y.display();

    number z(x);
    z.display();

    return 0;
}
