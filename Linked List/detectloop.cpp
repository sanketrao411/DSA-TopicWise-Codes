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

bool detectLoop(Node* head)
{
    map<Node* , bool> visited;

    Node* temp = head;

    while(temp != NULL)
    {
        if(visited[temp] == true)
        {
            cout << "Cycle Present at " << temp -> data << endl;
            return true;
        }
        
        visited[temp] = true;

        temp = temp -> next;
    }

    return false;
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

    insertAtTail(tail, 12);

    insertAtTail(tail, 15);

    insertAtPosition(head, tail, 4, 22);

    print(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    tail -> next = head -> next;

    if(detectLoop(head))
    {
        cout << "Cycle is Present " << endl;
    }
    else
    {
        cout << "Cycle is not Present" << endl;
    }

    return 0;
}