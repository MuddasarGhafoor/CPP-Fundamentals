// Demonstrates base and derived constructor execution and initialization order.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class base_1
{
        int data1;
    public:
        base_1(int i)
        {
            data1 = i;
            cout << "Base1 class constructor called!!" << endl;
        }
        void printdata1(void)
        {
            cout << "The value of data1 is : " << data1 << endl;
        }
};

class base_2
{
        int data2;
    public:
        base_2(int i)
        {
            data2 = i;
            cout << "Base2 class constructor called!!" << endl;
        }
        void printdata2(void)
        {
            cout << "The value of data2 is : " << data2 << endl;
        }
};

class derived : public base_1 , public base_2
{
        int derived1 , derived2;
    public:
        derived(int a , int b , int c , int d) : base_1(a) , base_2(b)
        {
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called!!" << endl;
        }
        void printdata3(void)
        {
            cout << "The value of derived1 is : " << derived1 << endl;
            cout << "The value of derived2 is : " << derived2 << endl;
        }
};

int main()
{
    derived d(1 , 2 , 3 , 4);
    d.printdata1();
    d.printdata2();
    d.printdata3();

    return 0;
}
