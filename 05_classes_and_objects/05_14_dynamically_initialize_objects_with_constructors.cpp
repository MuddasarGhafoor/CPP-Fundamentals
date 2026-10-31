// Calculates compound bank returns through overloaded constructors.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class BankDeposit
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;
public:
    BankDeposit() : principal(0), years(0), interestRate(0.0F), returnValue(0.0F) {}
    BankDeposit(int p , int y , float r);
    BankDeposit(int p , int y , int r);
    void show();
};

BankDeposit :: BankDeposit(int p , int y , float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p , int y , int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: show()
{
    cout<< endl <<"Principal amount was : "<< principal << endl 
        << "Return value after " << years << " years is : " << returnValue << endl << endl;
}

int main()
{
    BankDeposit BD1 , BD2;

    int p;
    int y;
    int r;
    float R;

    cout << "Enter your amount : ";
    cin >> p;
    cout << "Enter the years : ";
    cin >> y;
    cout << "Enter rate of interest(in percentage) : ";
    cin >> r;

    BD1 = BankDeposit(p , y , r);
    BD1.show();

    cout << "Enter your amount : ";
    cin >> p;
    cout << "Enter the years : ";
    cin >> y;
    cout << "Enter rate of interest(in decimals) : ";
    cin >> R;

    BD2 = BankDeposit(p , y , R);
    BD2.show();

    return 0;
}
