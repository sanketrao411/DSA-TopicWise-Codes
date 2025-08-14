#include<bits/stdc++.h>
using namespace std;

int main() 
{
    deque<int> d;

    d.push_front(1);
    d.push_back(40);
    

    

    cout << "deque size : " << d.size() << endl;

    d.pop_back();
    d.pop_back();

    cout << "deque size : " << d.size() << endl;

    if(d.empty())
        cout << "deque is Empty" << endl;
    else 
        cout << "deque is Not Empty" << endl;

    
    return 0;
}