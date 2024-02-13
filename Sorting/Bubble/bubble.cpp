#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[] , int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        // j < n not possible because j+1 will go beyond array
        // j < n-1 correct but not optimized solution because 
                   //it will check for largest element also(which is already sorted)
        {
            if (arr[j+1] < arr[j])
            {
                swap(arr[j+1], arr[j]);
            }
            
        }
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

    bubble(arr, 5);

    printarr(arr,5);
    
    return 0;
}