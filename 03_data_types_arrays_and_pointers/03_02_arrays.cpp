// Demonstrates array initialization, indexed access, and array traversal.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int marks[] = {32 , 23 , 34 , 42 , 39};

    cout << "Marks of boy 1 are " << marks[0] << endl;
    cout << "Marks of boy 2 are " << marks[1] << endl;
    cout << "Marks of boy 3 are " << marks[2] << endl;
    cout << "Marks of boy 4 are " << marks[3] << endl;
    cout << "Marks of boy 5 are " << marks[4] << endl << endl;

    // Another method....
    int roll_num[5];

    roll_num[0] = 4201;
    roll_num[1] = 4202;
    roll_num[2] = 4203;
    roll_num[3] = 4204;
    roll_num[4] = 4205;

    cout << "The Roll number of boy 1 is " <<  roll_num[0] << endl;
    cout << "The Roll number of boy 2 is " <<  roll_num[1] << endl;
    cout << "The Roll number of boy 3 is " <<  roll_num[2] << endl;
    cout << "The Roll number of boy 4 is " <<  roll_num[3] << endl;
    cout << "The Roll number of boy 5 is " <<  roll_num[4] << endl << endl;

    // Array using loops....

    int pocket_money[] = {970 , 1200 , 329 , 420 , 735};

    for (int i = 0; i < 5; i++)
    {
        cout << "The pocket money of boy " << i+1 << " is " << pocket_money[i] << "." << endl;
    }
    
    return 0;
}
