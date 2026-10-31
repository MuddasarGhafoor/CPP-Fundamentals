// Adds two complex-number objects through a class member function.


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
    void getting(int v1 , int v2)
    {
        a = v1;
        b = v2;
    }
    void setting(complex o1 , complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printing()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1 , c2 , c3;

    c1.getting(1 , 2);
    c1.printing();

    c2.getting(3 , 4);
    c2.printing();

    c3.setting(c1 , c2);
    c3.printing();

    return 0;
}
