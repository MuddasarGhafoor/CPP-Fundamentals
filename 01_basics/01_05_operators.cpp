// Demonstrates arithmetic, comparison, assignment, and logical operators.


#include<iostream>

using namespace std;

int main()
{
    int a = 8;
    int b = 4;

    // Arithmetic operators....
    cout << "The value of a + b is : " << a+b << endl;
    cout << "The value of a - b is : " << a-b << endl;
    cout << "The value of a * b is : " << a*b << endl;
    cout << "The value of a / b is : " << a/b << endl;
    cout << "The value of a % b is : " << a%b << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;

    // Comparison operators....
    cout << "The value of a == b is : " << (a==b) << endl;
    cout << "The value of a != b is : " << (a!=b) << endl;
    cout << "The value of a >= b is : " << (a>=b) << endl;
    cout << "The value of a <= b is : " << (a<=b) << endl;
    cout << "The value of a > b is : " << (a>b) << endl;
    cout << "The value of a < b is : " << (a<b) << endl;

    // Assignment operators....(used to assign values to variables)
    int l = 6;
    float m = 8.88;
    char n = 's';

    // Logical operators....
    //    &&   ---->   'and' operator .... (all conditions must be true)
    //    ||   ---->   'or'  operator .... (one condition should be true atleast)
    //    !    ---->   'not' operator .... (alters the results)

    return 0;
}
