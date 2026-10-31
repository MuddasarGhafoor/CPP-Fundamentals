// Uses a function template to average values of potentially different types.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

// float average(int a , int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1 , class T2>
float average(T1 a , T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float a;
    a = average(5.3 , 8.6);

    cout << fixed << setprecision(2)
         << "The average of these two numbers is " << a << endl;

    return 0;
}
