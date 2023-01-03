#include <iostream>
#include <vector>

using namespace std;

bool is_sorted(vector<int> arr)
{
    int len = arr.size() - 1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr{2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20};
    cout << is_sorted(arr) << endl;
    return 0;
}