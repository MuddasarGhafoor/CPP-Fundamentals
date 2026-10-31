// Demonstrates default type parameters in a class template.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

template <class T1 = int , class T2 = float , class T3 = char>
class Meer
{
    public:
        T1 a;
        T2 b;
        T3 c;
        Meer(T1 x , T2 y , T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
        }
};

int main()
{
    Meer <> h(8 , 1.3 , 's');
    h.display();

    cout << endl;

    Meer <int , int , int> s(6 , 8 , 13);
    s.display();

    return 0;
}
