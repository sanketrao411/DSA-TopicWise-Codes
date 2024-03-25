#include<bits/stdc++.h>
using namespace std;

void  rotateArray(int arr[], int k) {

    int n = 0;
    k = k % n;

    reverse(arr , arr+k);
    reverse(arr + k, arr + n);

    reverse(arr, arr + n);

    // return arr;
}


int main() 
{
    
     
    return 0;
}