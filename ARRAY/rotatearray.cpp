#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[] , int n, int a[], int k)
{
    for (int i = 0; i < n; i++)
    {
        a[(i+k)%n] = arr[i];
    }
    
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
 
    int arr[6] = {10, 1, 4, 3, 0, 12};

    int a[6] = {0};

    rotate(arr, 6 , a , 2);

    print(arr, 6);

    print(a, 6);

    return 0;
}