#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    char ch = 'A' + (n);

    for (char i = 'A'; i < ch; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        } 
        cout << endl;
    }
    cout << endl;
    return 0;
}