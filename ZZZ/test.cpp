#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> a, vector<int> b, int n,vector<int> d, int m)
{    
    
    
   
}

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m;
        cin >> m;
        vector<int> d(m);

        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }
        
        solve(a, b, n, d, m);
    }
     
    return 0;
}