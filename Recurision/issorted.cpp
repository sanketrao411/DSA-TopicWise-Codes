#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    int count = 0;
    cout << count++ << endl; 
    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1])
        return false;
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
    }
}

int main()
{
    int arr[] = {2, 4, 5, 8, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is Sorted " << endl;
    }
    else
    {
        cout << "Array is not Sorted " << endl;
    }
    return 0;
}