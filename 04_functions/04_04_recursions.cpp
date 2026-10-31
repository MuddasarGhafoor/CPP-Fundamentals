// Calculates a non-negative integer's factorial using recursion.


#include<iostream>
#include<iomanip>

using namespace std;

unsigned long long factorial(int number)
{
    if (number <= 1){return 1;}

    return number * factorial(number - 1);

    // Step by step calculation of factorial(4):
    // factorial(4) = 4 * factorial(3);
    // factorial(4) = 4 * 3 * factorial(2);
    // factorial(4) = 4 * 3 * 2 * factorial(1);
    // factorial(4) = 4 * 3 * 2 * 1;
    // factorial(4) = 24;
}

int main()
{
    // Factorial of a number :
    // 4! = 4*3*2*1 = 24
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!

    int a;
    cout << "Enter the number whose factorial you need : ";
    cin >> a;
    if (a < 0 || a > 20)
    {
        cout << "Enter an integer from 0 to 20." << endl;
        return 1;
    }
    cout << "The factorial of the number " << a << " is : " << factorial(a) <<endl;

    return 0;
}
