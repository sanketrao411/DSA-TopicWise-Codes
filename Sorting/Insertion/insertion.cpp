#include <bits/stdc++.h>
using namespace std;

// void insertion(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }


void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];

            j--;

            arr[j + 1] = temp;

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

    printarr(arr, 5);

    insertion(arr, 5);

    printarr(arr, 5);

    return 0;
}