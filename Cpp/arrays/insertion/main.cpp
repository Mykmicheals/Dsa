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

    for (auto &i : insert())
    {
        cout << i << " ";
    }
}

// {
//     int arr[] = {17, 12, 13, 11, 14, 8, 6, 9, 19, 10};
//     int size = sizeof(arr) / sizeof(int); // sixe in bytes /size of one int which is 4 bytes

//     int *newarr = new int[size + 1]; // create new array with len+1

//     for (int i = 0; i < size; i++)
//     {
//         newarr[i] = arr[i]; // copy the old array to the new
//     }

//     for (int i = size; i > 3; i--)
//     {
//         newarr[i + 1] = newarr[i];
//     }
//     newarr[3] = 24;

//     for (int i = 0; i < size; i++)
//     {
//         //   newarr[i] = arr[i]; // copy the old array to the new
//         cout << newarr[i] << endl;
//     }
//     //  cout << sizeof(newarr) << endl;
// }
