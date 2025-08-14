#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool BinarySearch(int arr[], int s, int e, int target)
{ 
    print(arr,s,e);
    //base case
    if(s > e)
        return false;

    int mid = s + (e - s)/2;
    cout << "Mid : " << arr[mid] << endl;

    if(arr[mid] == target)
        return true;


    //rr
    if(arr[mid] < target)
    {
       return BinarySearch(arr, mid+1, e, target);
    }
    else
    {
        return BinarySearch(arr, s, mid - 1, target);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int target = 9;

    bool ans = BinarySearch(arr, 0,6, target);

    if (ans)
    {
        cout << "Element Found " << endl;
    }
    else
    {
        cout << "Element not Found " << endl;
    }
    
    return 0;
}