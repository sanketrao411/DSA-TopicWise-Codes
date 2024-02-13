#include <bits/stdc++.h>
using namespace std;

int square(int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i*i == num)
        {
            return i;
        }
        
    }
}

int main()
{
    int num;
    cin >> num;

    int ans = square(num);

    cout << "Squareroot = " << ans << endl;
    return 0;
}