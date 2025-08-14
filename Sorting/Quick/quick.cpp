#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for(int i = s + 1; i <= e; i++)
    {
        if( arr[i] <= pivot)
            count++;
    }

    //pivot at right index

    int pivotIndex = s + count ;
    swap(arr[pivotIndex] , arr[s]);

    int i = s;
    int j = e;

    while ( i < pivotIndex && j > pivotIndex)
    {
        while( arr[i] <= arr[pivotIndex])
            i++;

        while(arr[j] > arr[pivotIndex])
            j--;

        if(i < pivotIndex && j > pivotIndex)
        swap(arr[i++] , arr[j--]);
    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e)
{
    if(s >= e)
        return ;

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
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
    int arr[7] = {9, 9, 9, 8, 2, 3, -6};
    int n = 7;

    printarr(arr, 7);

    quickSort(arr, 0, n - 1);

    printarr(arr, 7);

    return 0;
}