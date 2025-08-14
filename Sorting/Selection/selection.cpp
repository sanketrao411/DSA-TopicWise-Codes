#include<bits/stdc++.h>
using namespace std;

void selection(int arr[] , int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap(arr[minIndex], arr[i]);
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
    
    printarr(arr,5); 

    selection(arr, 5);

    printarr(arr,5);
    
    return 0;
}