// Demonstrates inheritance across student, exam, and result class levels.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void set_roll_number(int r)
        {
            roll_number = r;
        }
        void get_roll_number(void)
        {
            cout << "The roll number is : " << roll_number << endl;
        }
};

class exam : public student
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
        void get_marks(void)
        {
            cout << "The obtained marks in computer are : " << computer << endl;
            cout << "The obtained marks in math are : " << math << endl;
        }
};

class result : public exam
{
    private:
    public:
        void display_result()
        {
            get_roll_number();
            get_marks();
            const float percentage = (computer + math) / 2.0F;
            cout << "Your result is : " << percentage << "%" << endl;
        }
};

int main()
{
    result meer;

    meer.set_roll_number(4205);
    meer.set_marks(63.4 , 44.9);
    meer.display_result();

    return 0;
}
