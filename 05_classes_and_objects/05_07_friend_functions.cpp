// Uses a friend function to add private data from complex-number objects.


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
    void getting(int n1 , int n2)
    {
        a = n1;
        b = n2;
    }
    
    friend complex sumator(complex o1 , complex o2);

    void printing()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

complex sumator(complex o1 , complex o2)
{
    complex o3;
    o3.getting((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}


int main()
{
    complex c1 , c2 , sum;

    c1.getting(6 , 8);
    c1.printing();

    c2.getting(1 , 3);
    c2.printing();

    sum = sumator(c1 , c2);
    sum.printing();

    return 0;
}
