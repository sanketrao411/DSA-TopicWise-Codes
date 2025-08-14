#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this -> data;
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head,Node* &tail, int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);

        temp -> next = head;

        head -> prev = temp;

        head = temp;
    }

}

void insertAtTail(Node* &head, Node* &tail, int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);

        tail -> next = temp;
        temp -> prev = tail;

        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{   
    //insertion at first
    if(position == 1)
    {
        insertAtHead(head, tail, d);
        return;
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
        insertAtTail(head, tail, d);
        return;
    }


    //insert at position
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(Node* & head, Node* & tail, int position)
{
    if(position == 1)
    {
        //first node delete
        Node* temp = head;
        
        temp -> next -> prev = NULL;
        head = temp -> next;
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

        curr -> prev = NULL;

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

void print(Node* &head, Node* &tail)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* &head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }

    return count;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    // Node* node1 = new Node(10);
    // head = node1;
    // tail = node1;

    print(head, tail);

    insertAtHead(head, tail,20);
    print(head, tail);

    insertAtHead(head, tail, 30);
    print(head, tail);

    insertAtHead(head, tail, 40);
    print(head, tail);

    insertAtTail(head, tail, 50);
    print(head, tail);

    insertAtPosition(head, tail, 5, 4);
    print(head, tail);

    deleteNode(head, tail, 5);
    print(head, tail);

    cout << "Length of LL " << getLength(head) << endl;
    return 0;
}