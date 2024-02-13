#include<bits/stdc++.h>
using namespace std;



int main() 
{
    char name[10]; 

    cin >> name ;

    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    

    int len = sizeof(name) / sizeof(char);

    cout << "Size of Given : " << count << endl;
    

    return 0;
}