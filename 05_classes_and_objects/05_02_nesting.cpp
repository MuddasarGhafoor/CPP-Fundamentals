// Validates a binary string and produces its one's complement.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class binary
{
    string s;
public:
    void read(void);
    bool check(void) const;
    void ones(void);
    void display(void);
};

void binary :: read(void)
{
    cout << "Enter a binary number." << endl;
    cin >> s;
}

bool binary :: check(void) const
{
    for (char digit : s)
    {
        if (digit != '0' && digit != '1')
        {
            cout << "Incorrect binary format!!" << endl;
            return false;
        }
    }
    return !s.empty();
}

void binary :: ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    if (!b.check())
    {
        return 1;
    }
    b.ones();
    b.display();

    return 0;
}
