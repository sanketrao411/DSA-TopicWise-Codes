#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size)
{ 
    if(size == 0 || size == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + sumArray(arr + 1, size - 1);

    return sum;
    
}

int main()
{
    int arr[] = {3, 2, 5, 1, 6};
    int size = 5;

    int ans = sumArray(arr, size);

    cout << "Array Sum : " << ans << endl;
    
    return 0;
}