// Combines simple and scientific calculator operations using multiple inheritance.


#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

class simple_calculator
{
        int a , b;
    public:
        void getting_simple()
        {
            cout << "Enter the value of a : " << endl;
            cin >> a;
            cout << "Enter the value of b : " << endl;
            cin >> b;
        }
        void operation_simple()
        {
            cout << "The value of a + b is : " << a + b << endl;
            cout << "The value of a - b is : " << a - b << endl;
            cout << "The value of a * b is : " << a * b << endl;
            if (b == 0)
            {
                cout << "Division by zero is undefined." << endl;
            }
            else
            {
                cout << "The value of a / b is : " << static_cast<double>(a) / b << endl;
            }
        }
};

class scientific_calculator
{
        int a , b;
    public:
        void getting_scientific()
        {
            cout << "Enter the value of a : " << endl;
            cin >> a;
            cout << "Enter the value of b : " << endl;
            cin >> b;
        }
        void operation_scientific()
        {
            cout << "Angles are interpreted in radians." << endl;
            cout << "The value of cos(a) is : " << cos(a) << endl;
            cout << "The value of cos(b) is : " << cos(b) << endl;
            cout << "The value of sin(a) is : " << sin(a) << endl;
            cout << "The value of sin(b) is : " << sin(b) << endl;
            cout << "The value of tan(a) is : " << tan(a) << endl;
            cout << "The value of tan(b) is : " << tan(b) << endl;
            cout << "The value of exp(a) is : " << exp(a) << endl;
            cout << "The value of exp(b) is : " << exp(b) << endl;
        }
};

class hybrid : public simple_calculator , public scientific_calculator
{

};

int main()
{
    
    // simple_calculator calc;
    // calc.getting_simple();
    // calc.operation_simple();
    
    // scientific_calculator calc;
    // calc.getting_scientific();
    // calc.operation_scientific();

    hybrid calc;
    calc.getting_simple();
    calc.operation_simple();
    calc.getting_scientific();
    calc.operation_scientific();


    return 0;
}
