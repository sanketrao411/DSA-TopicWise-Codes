#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* & head, int d)
{
    Node * temp = new Node(d);
    temp -> next = head;

    head = temp;
}

void insertAtTail(Node* & tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;

    tail = tail -> next;
    // tail = temp;
}

void print(Node * & head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() 
{
    Node *head = NULL;
    Node* tail = NULL;
    Node *node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    head = node1;
    tail = node1;

    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);

    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);

    print(head);

    return 0;
}