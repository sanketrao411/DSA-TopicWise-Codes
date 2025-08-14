#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{ 
    //base conditon
    if(size == 0)
    {
        return false;
    }

    //rr
    if(arr[0] == target)
    {
        return true;
    }
    else
    {
        bool ans = linearSearch(arr + 1, size - 1, target);
        return ans;
    }
}

int main()
{
    int arr[] = {3, 2, 5, 1, 6};
    int size = 5;
    int target = 5;

    bool ans = linearSearch(arr, size, target);

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