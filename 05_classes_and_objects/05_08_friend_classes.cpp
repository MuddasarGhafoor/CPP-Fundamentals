// Grants one class friend access to another class's private members.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class complex;

class calculator
{
    public:
    int add(int x , int y)
    {
        return (x + y);
    }

    int sum_real(complex , complex);
    int sum_comp(complex , complex);
};

class complex
{
private:
    int a;
    int b;
    // Declaring the entire class as friend....
    friend class calculator;
    // Aliter : Individually declaring a function as friend....
    // friend int calculator :: sum_real(complex , complex);
    // friend int calculator :: sum_comp(complex , complex);
public:
    void getting(int n1 , int n2)
    {
        a = n1;
        b = n2;
    }

    void printing()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int calculator :: sum_real(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator :: sum_comp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1 , o2;
    o1.getting(4 , 3);
    o2.getting(7 , 9);

    calculator calc;
    int res_r = calc.sum_real(o1 , o2);
    cout << "The sum of real part of o1 and o2 is " << res_r << endl;
    int res_c = calc.sum_comp(o1 , o2);
    cout << "The sum of complex part of o1 and o2 is " << res_c << endl;

    return 0;
}
