#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j <= n; j++)
        {
            cout << char('A' + (j - 1));
        }
        cout << endl;
    }

    return 0;
}