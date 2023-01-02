#include <iostream>
#include <vector>

using namespace std;

vector<int> insert()
{
    vector<int> arr = {12, 16, 19, 11, 14, 10, 9};
    int len = arr.size() - 1;
    arr.push_back(0); // increase the size of the array by one

    for (int i = len; i >= 3; i--)
    {
        arr[i + 1] = arr[i];
    };

    arr[3] = 100;

    return arr; 
}

int main()
{
    insert();

    for (auto &i : insert()) //(auto& x : result) syntax is a range-based for loop that allows you to iterate over the elements of a container, such as an array or a vector.
    {
        cout << i << " ";
    }
}

