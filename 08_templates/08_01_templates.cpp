// Defines a generic vector wrapper and calculates a size-checked dot product.


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<stdexcept>
#include<vector>

using namespace std;

template <class T>
class NumericVector
{
    public:
        std::vector<T> arr;
        explicit NumericVector(int size) : arr(size) {}

        T dotProduct(const NumericVector &v) const
        {
            if (arr.size() != v.arr.size())
            {
                throw std::invalid_argument("Vector sizes must match.");
            }
            T d = 0;
            for (std::size_t i = 0; i < arr.size(); i++)
            {
                d += this -> arr[i] * v.arr[i];
            }
            return d;
        }
};


int main()
{
    NumericVector<float> v1(4);
    v1.arr[0] = 0.1;
    v1.arr[1] = 1.3;
    v1.arr[2] = 2.6;
    v1.arr[3] = 5.8;
    NumericVector<float> v2(4);
    v2.arr[0] = 1.2;
    v2.arr[1] = 1.8;
    v2.arr[2] = 1.0;
    v2.arr[3] = 1.8;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}
