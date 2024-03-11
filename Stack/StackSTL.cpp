#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();

    cout << "Top of Stack " << s.top() << endl;

    if(s.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl; 
    }

    cout << "Size of stack " << s.size() << endl;

    return 0;
}