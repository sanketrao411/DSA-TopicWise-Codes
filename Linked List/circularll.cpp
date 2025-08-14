#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non empty list
        //  assuming that the element in present in list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found curr is repesenting element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty. Can't Delete node" << endl;
        return;
    }
    else
    {
        // non empty

        // assuming that value is present in ll
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 node ll
        if(curr == prev)
        {
            tail = NULL;
        }
        // nodes > 2
        else if(tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    //empty list
    if(tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    // insertNode(tail, 3, 5);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 6, 4);
    // print(tail);

    // insertNode(tail, 3, 1);
    // print(tail);

    // insertNode(tail, 1, 2);
    // print(tail);

    // insertNode(tail, 4, 0);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}