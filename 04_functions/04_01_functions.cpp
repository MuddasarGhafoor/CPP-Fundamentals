// Defines and calls a function that returns the sum of two integers.


#include<iostream>
#include<iomanip>

using namespace std;

int sum(int a , int b)
{
    // a and b are formal perameters which will takes values from actual perameters (num_1 , num_2)
    int c;
    c = a+b;
    return c;
}

int main()
{
    int num_1;
    int num_2;

    cout << "Enter the first number : ";
    cin >> num_1;
    cout << "Enter the second number : ";
    cin >> num_2;

    //  num_1 and num_2 are actual perameters....
    cout << "Sum of first and second number is " << sum(num_1 , num_2);

    return 0;
}
