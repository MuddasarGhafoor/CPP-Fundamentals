// Uses virtual inheritance to solve the diamond-inheritance duplication problem.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no = a;
        }
        void print_number(void)
        {
            cout << "Your roll number is : " << roll_no << endl;
        }
};

class test : virtual public student
{
    protected:
        float computer;
        float math;
    public:
        void set_marks(float m1 , float m2)
        {
            computer = m1;
            math = m2;
        }
        void print_marks(void)
        {
            cout << "Your obtained marks in computer are : " << computer << endl;
            cout << "Your obtained marks in math are : " << math << endl;
        }
};

class sports : virtual public student
{
    protected:
        float score;
    public:
        void set_score(float s)
        {
            score = s;
        }
        void print_score(void)
        {
            cout << "Your PT score are : " << score << endl;
        }
};

class result : public test , public sports
{
    private:
        float total;
    public:
        void display(void)
        {
            total = computer + math + score;

            print_number();
            print_marks();
            print_score();

            cout << "Your total is : " << total << endl;
        }
};

int main()
{
    result hamza;

    hamza.set_number(6813);
    hamza.set_marks(73.23 , 43.54);
    hamza.set_score(6);
    hamza.display();

    return 0;
}
