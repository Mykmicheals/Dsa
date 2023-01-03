#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse()
{
    vector<int> arr{2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20, 14, 44};

    int arr_len = arr.size() - 1;
    vector<int> newArr;

    for (int i = arr_len; i >= 0; i--)
    {
        newArr.push_back(arr[i]);
    }

    return newArr;
} 

int main()
{
    vector<int> reversed = reverse();
    for (int x : reversed)
    {
        cout << x << ' ';
    }
  
    return 0;
}