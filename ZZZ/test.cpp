#include <bits/stdc++.h>
using namespace std;

int fX(char *a)
{
    char *b = a;
    while (*b)
        b++;
    return b - a;
}

int main()
{
    char c[] = "abcd";

    char *d = "abcd";

    int ans = fX("abcd");

    cout << ans << endl;
    return 0;
}