#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
    // Write your code here
    Node *head;
    Node *tail;
    Node *top;
    int size;

public:
    Stack()
    {
        head = NULL;
        tail = NULL;
        top = NULL;
        size = 0;
    }

    int getSize()
    {
        return this -> size;
    }

    bool isEmpty()
    {
        if (top == NULL)
            return true;
        else
            return false;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            top = temp;
            size++;
        }
        else
        {
            temp -> next = top;
            top = temp;
            size++;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << "Element " << top -> data << " is popped " << endl;
            top = top -> next;
            size--;
        }
    }

    int getTop()
    {
        if (isEmpty())
            return -1;
        else
            return top->data;
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    s.pop();
    s.pop();

    cout << "Top of Stack : " << s.getTop() << endl;

    cout << "Size of Stack : " << s.getSize() << endl;

    if(s.isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }

    return 0;
}