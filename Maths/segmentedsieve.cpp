#include <bits/stdc++.h>
using namespace std;

int primeless(vector<int> &v , int n)
{
    n = sqrt(n);
    vector<bool> temp(n+1,true);

    temp[0] = temp[1] = false;

    for (int i = 2; i < n; i++)
    {
        if(temp[i])
        {
            v.push_back(i);

            for (int j = 2 * i; j < n; j = j + i)
            {
                temp[j] = false;
            }
        }
    }
    
    return v.size();
}

int main()
{

    vector<int> v;

    int n;
    cin >> n;

    cout << "Prime Numbers less than " << n << " are : " << endl;

    int k = primeless(v, n);

    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}