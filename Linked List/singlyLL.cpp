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

    ~Node()
    {
        int value = this -> data;
        if(this -> next == NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
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

void insertAtPosition(Node* & head, Node* & tail, int position, int d)
{
    //insert at first
    if(position == 1)
    {
        insertAtHead(head, d);
        return ;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }
    //insert at tail
    if(temp -> next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }


    //insert at position
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(Node* & head, Node* & tail, int position)
{
    if(position == 1)
    {
        //first node delete
        Node* temp = head;
        head = head -> next;

        temp -> next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;

            curr = curr -> next;

            cnt++;
        }

        prev -> next = curr -> next;

        curr -> next = NULL;

        delete curr;

        if(prev -> next == NULL)
        {
            tail -> next = prev -> next;
            tail = prev;
        }
    }
    
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

    insertAtPosition(head, tail, 4, 22);
    print(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    deleteNode(head, tail, 3);

    print(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    return 0;
}