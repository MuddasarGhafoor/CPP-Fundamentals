// Demonstrates shared storage among the members of a union.


#include<iostream>
#include<iomanip>

using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};


int main()
{
    union money m_1;
    m_1.rice = 10;
    cout << m_1.rice << endl;

    return 0;
}

// In case of unions, we can use only one variable (rice, car or pounds). If we use the other variable , the value will be overwritten.
