// Demonstrates private and public class members with member functions.


#include<iostream>
#include<iomanip>

using namespace std;

class employee
{
private:
    int a , b ,c;
public:
    int d , e;
    void setdata(int a1 , int b1 , int c1);
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void employee::setdata(int a1 , int b1 , int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee meer;
    meer.d = 68;
    meer.e = 13;
    meer.setdata(28 , 8 , 2005);
    meer.getdata();

    return 0;
}
