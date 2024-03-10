#include<bits/stdc++.h>
using namespace std;

bool check(string str)
{   
    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 0 || str[i] == 1)
        {
            count++;
        }
        else
        {
            return false;
        }


    }
    
    return true;
}

int main() 
{
    string str;
    cin >> str;

    if(check(str))
    {
        cout << "Binary" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }
     
    return 0;
}