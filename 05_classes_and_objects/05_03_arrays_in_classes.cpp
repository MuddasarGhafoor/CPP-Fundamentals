// Stores and displays shop items while protecting fixed-array boundaries.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void){counter = 0;}
    void setting(void);
    void displaying(void);
};

void shop :: setting(void)
{
    if (counter >= 100)
    {
        cout << "The shop is full." << endl;
        return;
    }
    cout << "Enter ID of your item no. " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item no. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop :: displaying(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
    
}

int main()
{
    shop one;

    one.initCounter();
    one.setting();
    one.setting();
    one.setting();
    one.setting();
    one.displaying();

    return 0;
}
