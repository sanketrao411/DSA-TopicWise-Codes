#include <bits/stdc++.h>
using namespace std;

void reachingHome(int src, int dest)
{
    cout << "Source : " << src << " Destination : " << dest << endl;

    if(src == dest)
    {
        cout << "Reached Home" << endl;
        return ;
    }
        

    src++;

    reachingHome(src, dest);
}


int main()
{
    int src = 0;
    int dest = 10;

    reachingHome(src, dest);

    return 0;
}