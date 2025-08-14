#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int length(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char c = 'z';

    char name[20];

    cin >> name;

    // name[2] = '\0';

    cout << "Given : " << name << endl;

    int len = length(name);

    cout << "Length : " << len << endl;

    reverse(name, len);

    cout << "Reverse Char Array : " << name << endl;

    cout << "Palindrome or Not : " << checkpalindrome(name, len) << endl;

    cout << int('B') << endl;

    return 0;
}