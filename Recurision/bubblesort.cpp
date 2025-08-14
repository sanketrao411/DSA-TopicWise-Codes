#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
        return ;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    bubble(arr, n -1 );
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    printarr(arr, 5);

    bubble(arr, 5);

    printarr(arr, 5);

    return 0;
}