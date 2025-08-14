#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getMin()
    {
        if (top >= 0)
        {
            int mini = arr[top];
            top--;
            while (top != -1)
            {
                if (mini >= arr[top])
                {
                    mini = arr[top];
                }

                top--;
            }

            return mini;
        }
        else
            return -1;
    }
};

int main()
{
    Stack s(5);

    s.push(-2);
    s.push(1);
    s.push(4);
    s.push(0);
    s.push(5);

    cout << "Top : " << s.peak() << endl;

    // s.pop();

    cout << "Top : " << s.peak() << endl;

    if (s.isEmpty())
    {
        cout << "Stack is Empty Bhava" << endl;
    }
    else
    {
        cout << "Stack is Not Empty Bhava" << endl;
    }

    cout << "Min number : " << s.getMin() << endl;

    return 0;
}