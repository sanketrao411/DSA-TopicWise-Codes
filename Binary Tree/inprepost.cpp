#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this -> data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root)
{
    // cout << "Enter The Data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1)
        return NULL;

    //cout << "Enter Data For Left Node " << data << endl;
    root -> left = buildTree(root -> left);
    // cout << "Enter Data For Right Node " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void preorder(node* &root)
{
    stack<node*> s;
    s.push(root);

    while(!s.empty())
    {
        node* temp = s.top();
        s.pop();
        cout << temp -> data << " ";

        if(temp -> right)
            s.push(temp -> right);
        
        if(temp -> left)
            s.push(temp -> left);
    }

}

void inorder(node* &root)
{
    stack<node *> s;

    // Initialize current node as 'ROOT'.
    node *current = root;

    // Run a loop until 'CURRENT'!= NULL or stack is not empty.
    while (current != NULL || s.empty() == false)
    {
        while (current !=  NULL)
        {
            // Push current node to stack.
            s.push(current);

            // Move to left subtree of 'CURRENT'.
            current = current->left;
        }

        // 'CURRENT' must be NULL at this point.
        current = s.top();

        // Pop top node from stack.
        s.pop();

        // Add data of popped node to answer.
        cout << current->data << " ";

		// Visit right subtree of current node.
        current = current->right;

    }

}

int main() 
{
    node* root = NULL;

    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "PreOrder Tree" << endl;
    preorder(root);
    cout << endl;

    cout << "InOrder Tree" << endl;
    inorder(root);
    cout << endl;

    return 0;
}