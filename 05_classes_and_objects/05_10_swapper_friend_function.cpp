// Swaps private values belonging to two classes through a friend function.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class c2;

class c1
{
    private:
        int data;
    public:
        void set_value(int value)
        {
            data = value;
        }
        void display(void)
        {
            cout << data << endl;
        }
    friend void swapper(c1 & , c2 &);
};

class c2
{
    private:
        int zata;
    public:
        void set_value(int value)
        {
            zata = value;
        }
        void display(void)
        {
            cout << zata << endl;
        }
    friend void swapper(c1 & , c2 &);
};

void swapper(c1 &o1 , c2 &o2)
{
    int temp;
    temp = o1.data;
    o1.data = o2.zata;
    o2.zata = temp;
}

int main()
{
    c1 a1;
    c2 b1;

    a1.set_value(68);
    b1.set_value(13);

    a1.display();
    b1.display();

    swapper(a1 , b1);

    cout << "The value of a1 after swapping is : ";
    a1.display();
    cout << "The value of b1 after swapping is : ";
    b1.display();

    return 0;
}
