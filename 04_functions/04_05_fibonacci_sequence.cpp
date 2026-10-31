// Calculates a Fibonacci number iteratively using the conventional 0, 1 sequence.


#include<iostream>
#include<iomanip>

using namespace std;

unsigned long long fib(int number)
{
    unsigned long long previous = 0;
    unsigned long long current = 1;
    for (int i = 0; i < number; ++i)
    {
        const unsigned long long next = previous + current;
        previous = current;
        current = next;
    }
    return previous;
}

int main()
{
    int a;
    cout << "Enter the number at which you need fibonacci sequence : ";
    cin >> a;
    if (a < 0 || a > 93)
    {
        cout << "Enter a position from 0 to 93." << endl;
        return 1;
    }
    cout << "The fibonacci sequence at position " << a << " is : " << fib(a) <<endl;

    return 0;
}
