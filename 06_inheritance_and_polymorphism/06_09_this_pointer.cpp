// Uses the this pointer to distinguish a member from a same-named parameter.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class A
{
    int a;
    public:
        void setData(int a)
        {
            this -> a = a;
        }
        void getData()
        {
            cout << "The value of a is : " << a << endl;
        }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();

    return 0;
}
