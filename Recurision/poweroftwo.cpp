#include <bits/stdc++.h>
using namespace std;

int powertwo(int n)
{
    if (n == 0)
        return 1;
    
    // int smallerProblem = powertwo(n - 1);
    // int biggerProblem = 2 * smallerProblem;

    // return biggerProblem;

    return 2 * powertwo(n-1);
}

int main()
{
    int n;
    cin >> n;

    int ans = powertwo(n);

    cout << ans << endl;
    return 0;
}