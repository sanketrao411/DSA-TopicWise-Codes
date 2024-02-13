#include <bits/stdc++.h>
using namespace std;

void spiralprint(int arr[][3], int n, int m)
{
    int i = 0 , j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

void print(int arr[][3], int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    //  int arr[3][3] = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};

     vector<vector<int>> arr{{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};

     cout << "NO of Rows : " << arr.size() << endl;

     cout << "No of Colums : " << arr[0].size() << endl;

    // print(arr, 3, 3);

    // spiralprint(arr, 3, 3);

    return 0;
}