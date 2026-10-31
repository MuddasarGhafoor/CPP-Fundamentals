// Defines an abstract base class with a pure virtual display operation.


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class CWH    //  A base class formed only to make derived classes from it and to use there functions....
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s , float r)
        {
            title = s;
            rating = r;
        }
        virtual ~CWH() = default;
        virtual void display() = 0;    //  do-nothing function  -->  pure virtual function....
};

class CWH_video : public CWH
{
    int v_length;
    public:
        CWH_video(string s , float r , int vl) : CWH(s , r)
        {
            v_length = vl;
        }
        void display() override
        {
            cout << "This is an amazing video with title : " << title << endl;
            cout << "Video rating is " << rating << " out of 5 stars." << endl;
            cout << "Length of this video is " << v_length << " minutes." << endl;
        }
};

class CWH_text : public CWH
{
    int words;
    public:
        CWH_text(string s , float r , int wc) : CWH(s , r)
        {
            words = wc;
        }
        void display() override
        {
            cout << "This is an amazing text with title : " << title << endl;
            cout << "Rating of this text is " << rating << " out of 5 stars." << endl;
            cout << "Words in this text are " << words << " words." << endl;
        }
};

int main()
{
    string title;
    float rating;
    int v_length;
    int words;

    title = "C++ tutorial video";
    rating = 4.4;
    v_length = 10;
    CWH_video vid(title , rating , v_length);
    // vid.display();

    title = "C++ tutorial notes";
    rating = 4.4;
    words = 436;
    CWH_text note(title , rating , words);
    // note.display();

    CWH *tuts[2];
    tuts[0] = &vid;
    tuts[1] = &note;

    tuts[0] -> display();
    tuts[1] -> display();

    return 0;
}
