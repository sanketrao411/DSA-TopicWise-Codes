#include<bits/stdc++.h>
using namespace std;

void reverseword(string &s, int j, int k)
{
    int st = k;
    int e = k + j - 1;
    while(st <= e)
    {
        swap(s[st++], s[e--]);
    }
}
void reverseString(string &s)
{
    int size = s.length();

    int j = 0;
    int k = 0;

    for(int i = 0; i <= size; i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            reverseword(s,j,k);
            k = k + j + 1;
            j = 0;
        }
        else
        {
            j++;
        }
    }
}

int main() 
{
    string s;

    getline(cin, s);

    cout << "String : " << s << endl;

    reverseString(s);

    cout << "String : " << s << endl;

    return 0;
}