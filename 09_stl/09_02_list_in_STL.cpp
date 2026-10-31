// Demonstrates list traversal, sorting, merging, and reversing with std::list.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<list>

using namespace std;

void display(const list<int> &l)
{
    for (int value : l)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    list <int> list1;

    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(28);

    cout << "List 1 : ";
    display(list1);

    // Sorting a list....
    // list1.sort();
    // display(list1);

    // Removing elements from a list....
    // list1.pop_back();        // Remove last element....
    // list1.pop_front();      // Remove first element....
    // list1.remove(1);       // Remove desired element....
    // display(list1);

    list <int> list2(4);   // Empty list of size 4....
    list <int> :: iterator iter;
    iter = list2.begin();

    *iter = 5;
    iter ++;
    *iter = 11;
    iter ++;
    *iter = 12;
    iter ++;
    *iter = 72;
    iter ++;

    cout << "List 2 : ";
    display(list2);
    cout << endl;

    list1.sort();
    list2.sort();

    // List merging....
    list1.merge(list2);
    cout << "****List 1 after merging****" << endl << endl;
    display(list1);
    cout << endl;

    // Reversing a list....
    list1.reverse();
    display(list1);

    return 0;
}
