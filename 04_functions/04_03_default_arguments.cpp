// Demonstrates a function parameter with a default argument.


#include<iostream>
#include<iomanip>

using namespace std;

// Default arguments are simply those values which we take(receive) by default , if we have not given any value....

float interest(int m , float factor = 1.04)
{
    return m * factor;
}

int main()
{
    int money = 100000;

    cout << "If you have " << money << " Rs in your bank account , you will receive " << interest(money) << " Rs after 1 year." << endl;
    cout << "For VIP If you have "<<money<<" Rs in your bank account , you will receive "<<interest(money , 1.1)<<" Rs after 1 year."<<endl;

    return 0;
}
