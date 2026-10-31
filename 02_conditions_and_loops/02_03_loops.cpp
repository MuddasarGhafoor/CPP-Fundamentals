// Demonstrates for, while, and do-while loops.


#include<iostream>

using namespace std;

int main()
{
    cout << "****For loop****" << endl;

        for (int i = 1; i <= 8; i++)
        {
            cout << i << endl;
        }
        cout << endl;


    cout << "****While loop****" << endl;

        int j = 1;
        while (j <= 13)
        {
            cout << j << endl;
            j++;
        }
        cout << endl;
    
    
    cout << "****Do-while loop****" << endl;

        int k = 1;
        do
        {
            cout << k << endl;
            k++;
        } while (k <= 6);
        cout << endl;
        
        
    return 0;
}
