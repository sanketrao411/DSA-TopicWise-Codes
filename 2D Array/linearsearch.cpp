#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter element you want to search : " << endl;
    cin >> target;

    if (isPresent(arr, target, 3 , 4))
    {
        cout << "Element present " << endl;
    }
    else
    {
        cout << "Not Present " << endl;
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}