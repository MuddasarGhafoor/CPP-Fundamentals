// Compares pass-by-value with pointer and reference based swapping.


#include<iostream>
#include<iomanip>

using namespace std;

// Call by value....
    void swap(int a , int b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

// Call by reference using pointer reference....
    void swap_r(int *a , int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

// Call by reference using reference vatiables....
    void swap_v(int &a , int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

int main()
{
    cout << "****Call by value****" << endl << endl;
        int x;
        int y;

        cout << "Enter first integer : ";
        cin >> x;
        cout << "Enter second integer : ";
        cin >> y;

        cout << "The value of first integer is " << x << " and the value of second integer is " << y << endl;
        swap (x , y);
        cout << "The value of first integer is " << x << " and the value of second integer is " << y << endl << endl;

    cout << "****Call by reference using pointer reference****" << endl << endl;
        int m;
        int n;

        cout << "Enter first integer : ";
        cin >> m;
        cout << "Enter second integer : ";
        cin >> n;

        cout << "The value of first integer is " << m << " and the value of second integer is " << n << endl;
        swap_r (&m , &n);
        cout << "The value of first integer is " << m << " and the value of second integer is " << n << endl << endl;

    cout << "****Call by reference using reference vatiables****" << endl << endl;
        int t;
        int u;

        cout << "Enter first integer : ";
        cin >> t;
        cout << "Enter second integer : ";
        cin >> u;

        cout << "The value of first integer is " << t << " and the value of second integer is " << u << endl;
        swap_v (t , u);
        cout << "The value of first integer is " << t << " and the value of second integer is " << u << endl << endl;

    return 0;
}
