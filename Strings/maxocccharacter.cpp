#include<bits/stdc++.h>
using namespace std;

char maxocccharacter(string s)
{
    int arr[25] = {0};

    int size = s.length();

    for(int i = 0; i < size; i++)
    {
        int number = 0;
        number = s[i] - 'a';
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;

    for (int i = 0; i < 25; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    
    return ans+'a';

}

int main() 
{
    string s;

    getline(cin,s);

    cout << maxocccharacter(s) << endl;
    return 0;
}