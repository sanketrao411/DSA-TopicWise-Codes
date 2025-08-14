#include <bits/stdc++.h>
using namespace std;
bool isValid(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    return false;
}
char checking(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    return ch;
}
bool checkPalindrome(string s)
{

    int st = 0;
    int e = s.size() - 1;

    while (st <= e)
    {
        if (checking(s[st]) != checking(s[e]))
        {
            return false;
        }
        else
        {
            st++;
            e--;
            if(isValid(s[st]))
            {
                st++;
            }
            if(isValid(s[e]))
            {
                e--;
            }
        }
    }
    return true;
}
int main()
{
    // char s[10];

    // cin.getline(s, 10);

    string s;

    getline(cin , s);

    cout << " Given String : " << s << endl;

    cout << "Palindrome or Not : " << checkPalindrome(s) << endl;

    return 0;
}

// 6
// c1O$d@eeDo1c
// N2i&nJA?a&jnI2n
// A1b22Ba
// codingninjassajNiNgNidoc
// 5?36@6?35
// aaBBa@
