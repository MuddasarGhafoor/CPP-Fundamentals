// Demonstrates safe insertion, removal, traversal, and sizing of std::vector.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<vector>

using namespace std;

void display(const vector<int> &v)
{
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    vector <int> vec1;

    int size;
    cout << "Enter the size of your vector : ";
    cin >> size;
    if (size < 0)
    {
        cout << "Vector size cannot be negative." << endl;
        return 1;
    }

    int element;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector : ";
        cin >> element;
        vec1.push_back(element);
    }

    display(vec1);

    if (!vec1.empty())
    {
        vec1.pop_back();                          // Delete last vector....
    }
    display(vec1);

    const auto insertion_point = vec1.empty() ? vec1.begin() : vec1.begin() + 1;
    vec1.insert(insertion_point , 4 , 6813);       // Position, count, value....
    display(vec1);

    // Another way to create a vector....
    vector<int> vec2(4 , 2808);
    display(vec2);
    cout << vec2.size();    // Show the size of a vector....

    return 0;
}
