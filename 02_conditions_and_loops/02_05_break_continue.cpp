// Demonstrates how break and continue alter loop execution.


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << "****Break statement****" << endl;
        for (int i = 0; i < 6; i++)
        {
            if (i==4)
            {
                break;
            }
            cout << i << endl;
        }

    cout << "****Continue statement****" << endl;
        for (int j = 0; j < 6; j++)
        {
            if (j==4)
            {
                continue;
            }
            cout << j << endl;
        }
    
    return 0;
}
