#include <bits/stdc++.h>
using namespace std;

// //tail recursion
// void print(int n)
// {
//     if(n == 0)
//         return ;

//     cout << n << " ";

//     print(n-1);
// }

//head recursion
void print(int n)
{
    if(n == 0)
        return ;

    print(n-1);

    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    cout << endl;

    print(n);

    return 0;
}