#include <iostream>
#include <vector>

using namespace std;

vector<int> deletion(int n)
{
    vector<int> arr = {12, 16, 19, 11, 14, 10, 9};
    int len = arr.size() - 1;
    for (int i = 0; i <= len; i++)
    {
        if (arr[i] == n)
        {
            arr[i] = arr[len]; // replace the element with the last element of the array
            arr.pop_back();    // decrease the size of the array by one
            len--;             // update the value of len
        }
    }

    return arr;
}

int main()
{
    for (auto &i : deletion(14)) 
    {
        cout << i << " ";
    }
}

