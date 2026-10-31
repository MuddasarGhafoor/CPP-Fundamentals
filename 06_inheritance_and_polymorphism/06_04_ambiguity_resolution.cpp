// Resolves an ambiguous inherited member function with a qualified call.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class base_1
{
    public:
        void greet()
        {
            cout << "How are you?" << endl;
        }
};

class base_2
{
    public:
        void greet()
        {
            cout << "Kesy ho?" << endl;
        }
};

class derived : public base_1 , public base_2
{
        int a;
    public:
        void greet()
        {
            base_2 :: greet();
        }
};

int main()
{
    base_1 g1;
    base_2 g2;

    g1.greet();
    g2.greet();

    derived g;
    g.greet();

    return 0;
}
