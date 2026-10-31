// Demonstrates a derived class inheriting from one base class.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class base
{
    private:
        int data1;
    public:
        int data2;
        void setdata()
        {
            data1 = 10;
            data2 = 20;
        }
        int getdata1()
        {
            return data1;
        }
        int getdata2()
        {
            return data2;
        }
};

class derived : public base
{
    private:
        int data3;
    public:
        void process()
        {
            data3 = data2 * getdata1();
        }
        void display()
        {
            cout << "Value of data 1 is : " << getdata1() << endl;
            cout << "Value of data 2 is : " << data2 << endl;
            cout << "Value of data 3 is : " << data3 << endl;
        }
};

int main()
{
    derived dev;

    dev.setdata();
    dev.process();
    dev.display();

    return 0;
}
