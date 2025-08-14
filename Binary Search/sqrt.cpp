#include<bits/stdc++.h>
using namespace std;

long long int squareroot(int n)
{
    int s = 0;
    int e = n;

    long long int mid = s + (e-s)/2;

    long long int ans = -1;

    while(s<e)
    {
        long long int square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double moreprecision(int tempsol,int precision,int n)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = tempsol; j*j < n; j=j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
 
    int num = 101;

    int tempsol = squareroot(num);

    //cout << tempsol << endl;

    cout << "Square root of 101 is " << moreprecision(tempsol,3,num) << endl;

    return 0;
}