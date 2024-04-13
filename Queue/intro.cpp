#include<bits/stdc++.h>
using namespace std;

int main() 
{
    queue<int> q;

    q.push(4); 
    q.push(11); 
    q.push(20); 
    q.push(02);

    q.emplace(14);
    cout << "back : " << q.back() << endl;

    cout << "Queue size : " << q.size() << endl;

    cout << "Front : " << q.front() << endl;
    q.pop();
    cout << "Front : " << q.front() << endl;
    q.pop();
    cout << "Front : " << q.front() << endl;
    q.pop();
    cout << "Front : " << q.front() << endl;
    q.pop();

    cout << "Queue size : " << q.size() << endl;

    if(q.empty())
        cout << "Queue is Empty" << endl;
    else 
        cout << "Queue is Not Empty" << endl;

    cout << "Front : " << q.front() << endl;
    
    return 0;
}