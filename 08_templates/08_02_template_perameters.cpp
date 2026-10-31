// Demonstrates a class template with three independently typed parameters.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

template < class I , class F , class C>
class myclass
{
    public:
        I data1;
        F data2;
        C data3;
        myclass(I a , F b , C c) 
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void display()
        {
            cout << this -> data1 << endl << this -> data2 << endl << this -> data3 << endl;
        }

};

int main()
{
    myclass < int , float , char> obj(8 , 1.3 , 'S');

    obj.display();

    return 0;
}
