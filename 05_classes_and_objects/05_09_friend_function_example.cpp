// Uses a friend function to combine private values from two different classes.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Y;

class X
{
    private:
        int data;
    public:
        void set_value(int value)
        {
            data = value;
        }
    friend void add(X , Y);
};

class Y
{
    private:
        int zata;
    public:
        void set_value(int value)
        {
            zata = value;
        }
    friend void add(X , Y);
};

void add(X o1 , Y o2)
{
    cout << "Summing data of X and Y objects gives : " << (o1.data + o2.zata) << endl;
}

int main()
{
    X a1;
    a1.set_value(6);

    Y b1;
    b1.set_value(8);

    add(a1 , b1);

    return 0;
}
