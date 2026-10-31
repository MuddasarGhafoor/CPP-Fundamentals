// Demonstrates enumerated constants and their underlying integer values.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    enum meal{breakfast , lunch , dinner};

    cout << breakfast <<endl;
    cout << lunch <<endl;
    cout << dinner <<endl;

    return 0;
}
