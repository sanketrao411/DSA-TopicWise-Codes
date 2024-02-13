#include<bits/stdc++.h>
using namespace std;

void sumrow(int arr[][3], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of " << i+1 << " row is : " << sum << endl;
    }
    
}

void sumcol(int arr[][3], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Sum of " << i+1 << " column is : " << sum << endl;
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
    int arr[3][3] = {{3,4,11},{2,12,1},{7,8,7}};

    print(arr,3,3);

    sumrow(arr,3,3);

    sumcol(arr,3,3);

    

    return 0;
}