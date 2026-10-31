// Stores a user-entered array of shop objects in a safely managed vector.


#include<iostream>
#include<iomanip>
#include<string>
#include<vector>

using namespace std;

class shop
{
    private:
        int ID;
        float price;
    public:
        void setData(int a , float b)
        {
            ID = a;
            price = b;
        }
        void getData(void)
        {
            cout << "Code of this item is : " << ID << endl;
            cout << "Price of this item is : " << price << endl;
        }
};

int main()
{
    const int size = 4;
    vector<shop> items(size);

    int p;
    float q;
    int i;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the ID of item " << i+1 << endl;
        cin >> p;
        cout << "Enter the price of item " << i+1 << endl;
        cin >> q;

        items[i].setData(p , q);
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number : " << i+1 << endl;

        items[i].getData();
    }
    
    
    return 0;
}
