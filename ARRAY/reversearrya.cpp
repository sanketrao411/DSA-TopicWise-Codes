#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{
 
    int arr[400];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start = 0 , end = size - 1;
    
    while (start <= end)
    {
        // int temp = arr[start] ;
        // arr[start] = arr[end] ;
        // arr[end] = temp ;

        swap(arr[start] , arr[end] );

        start++ ;
        end--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}