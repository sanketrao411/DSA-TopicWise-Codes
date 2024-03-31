#include<bits/stdc++.h>
using namespace std;

int test(int arr[], int k) {

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}


int main() 
{
    int m[3][3] = {1,2,3,4,5,6,7,8,9};

    test(m[1], 3);
     
    return 0;
}