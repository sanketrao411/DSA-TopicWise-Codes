#include <bits/stdc++.h>
using namespace std;

int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main()
{
    // int i = 4;
    // int *p1 = &i;
    // int **p2 = &p1;

    //  cout << p1 << endl;
    //  cout << *p2 << endl;

    // cout << i << endl;
    // cout << *p1 << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p1 << endl;
    // cout << *p2 << endl;

    // cout << &p1 << endl;
    // cout << p2 << endl;

    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);

    return 0;
}