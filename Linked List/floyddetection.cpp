// Floyd Cycle Detection
//  Beginnig of Loop
//  Delete Loop

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
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;

    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;

    tail = tail->next;
    // tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at first
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // insert at position
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

Node *floydDetection(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            // cout << "Cycle Present at " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node *beginOfLL(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *intersection = floydDetection(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void deleteLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *start = beginOfLL(head);
    Node *temp = start;

    while (temp->next != start)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    head = node1;
    tail = node1;

    insertAtTail(tail, 12);

    insertAtTail(tail, 15);

    insertAtPosition(head, tail, 4, 22);

    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    tail->next = head->next;

    if (floydDetection(head) != NULL)
    {
        cout << "Cycle is Present " << endl;
    }
    else
    {
        cout << "Cycle is not Present" << endl;
    }

    Node *ans = beginOfLL(head);

    cout << "Beginnig of Cycle is at " << ans->data << endl;

    deleteLoop(head);

    if (floydDetection(head) != NULL)
    {
        cout << "Cycle is Present " << endl;
    }
    else
    {
        cout << "Cycle is not Present" << endl;
    }
    return 0;
}