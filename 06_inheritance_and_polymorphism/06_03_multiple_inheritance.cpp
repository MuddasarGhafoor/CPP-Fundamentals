// Demonstrates a class inheriting data and behavior from two base classes.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class base_1
{
    protected:
        int first;
    public:
        void set_first(int a)
        {
            first = a;
        }
};

class base_2
{
    protected:
        int second;
    public:
        void set_second(int a)
        {
            second = a;
        }
};

class derived : public base_1 , public base_2
{
    public:
        void show()
        {
            cout << "The value of first number is : " << first << endl;
            cout << "The value of second number is : " << second << endl;
            cout << "The sum of first and second number is : " << (first + second) << endl;
        }
};

int main()
{
    derived multiple;

    multiple.set_first(480);
    multiple.set_second(234);
    multiple.show();

    return 0;
}
