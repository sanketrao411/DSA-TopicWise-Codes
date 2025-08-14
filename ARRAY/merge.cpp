#include <bits/stdc++.h>
using namespace std;

// void merge(int nums1[], int n, int nums2[], int m)
// {
//         int i = 0;
//         int j = 0;
//         int temp = 0;
//         while ( (nums1[i] != 0) && j < m )
//         {
//             temp = nums1[i];
//             if(temp <= nums2[j])
//             {
//                 nums1[i] = temp;
//                 i++;
//             }
//             else
//             {
//                 nums1[i] = nums2[j];
//                 j++;
//                 nums1[i+1] = temp;
//             }
//         }
//         i++;
//         while( (j < n) )
//         {
//             nums1[i] == nums2[j];
//             i++;
//             j++;
//         }
// }

void merge(int arr1[], int m, int arr2[], int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int temp[m + n];

    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            temp[k] = arr1[i];
            i++;
        }
        else
        {
            temp[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        temp[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        temp[k] = arr2[j];
        j++;
        k++;
    }

    // Copy the merged array back to arr1
    for (int x = 0; x < m + n; x++)
    {
        arr1[x] = temp[x];
    }
}


// void merge(int nums1[], int m, int nums2[], int n)
// {
//     int i = m - 1;
//     int j = n - 1;
//     int k = m + n - 1;

//     while (i >= 0 && j >= 0)
//     {
//         if (nums1[i] >= nums2[j])
//         {
//             nums1[k] = nums1[i];
//             i--;
//         }
//         else
//         {
//             nums1[k] = nums2[j];
//             j--;
//         }
//         k--;
//     }

//     while (j >= 0)
//     {
//         nums1[k] = nums2[j];
//         j--;
//         k--;
//     }
// }

void print(int nums1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums1[i] << " ";
    }
}
int main()
{
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};

    merge(nums1, 3, nums2, 3);

    print(nums1, 6);

    return 0;
}