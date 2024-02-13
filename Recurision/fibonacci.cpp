#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

// int fibonacci(int n)
// {
//     if(n == 0)
//         return 0;
//     if(n == 1)
//         return 1;
//     int a = 0;
//     int b = 1;
//     int c = 0;
//     for (int i = 1; i < n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return c;
    
// }

int main()
{
    int n;
    cin >> n;

    int ans = fibonacci(n);

    cout << ans << endl;
    return 0;
}