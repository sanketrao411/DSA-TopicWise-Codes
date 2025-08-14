#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0 , e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
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

    // vector<int> v = {5, 4, 3, 2, 1};

    printarr(arr, 5);

    reverse(arr, 5);

    printarr(arr, 5);

    return 0;
}