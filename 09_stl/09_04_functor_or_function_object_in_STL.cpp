// Defines a function object and uses it to sort integers in descending order.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<functional>
#include<algorithm>

using namespace std;

class descending
{
public:
    bool operator()(int left, int right) const
    {
        return left > right;
    }
};

int main()
{
    int arr[] = {6 , 8 , 1 , 3 , 28};
    sort(arr , arr+5, descending{});
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}
