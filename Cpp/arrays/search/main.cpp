#include <iostream>
#include <vector>

using namespace std;

int binary_search(int n)
{
    vector<int> arr{2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20, 14};
    int right = arr.size() - 1;
    int left = 0;

    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (n == arr[mid])
        {
            return mid;
        }
        else if (n > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return 0;
}

int Max()
{

    vector<int> arr{2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20, 14};

    int max_number = 0;
    int arr_len = arr.size() - 1;

    for (int i = 0; i <= arr_len; i++)
    {
        if (arr[i] > max_number)
        {
            max_number = arr[i];
        }
    }
    return max_number;
}

int Min()
{

    vector<int> arr{2, 4, 5, 8, 9, 11, 12, 13, 15, 16, 18, 20, 14, 44};

    int min_number = arr[0];
    int arr_len = arr.size() - 1;

    for (int i = 0; i <= arr_len; i++)
    {
        if (arr[i] < min_number)
        {
            min_number = arr[i];
        }
    }
    return min_number;
}

int main()
{

    //  cout << binary_search(14) << endl;
    cout << Max() << endl;
    cout << Min() << endl;
}