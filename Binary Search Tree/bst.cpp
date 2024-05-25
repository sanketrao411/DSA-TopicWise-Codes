#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildBST(Node* &root, int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root -> data)
    {
        root -> right = buildBST(root -> right, d);
    }
    else
    {
        root -> left = buildBST(root -> left, d);
    }

    return root;
}

void insertIntoBST(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = buildBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node* &root)
{
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp -> data << " ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }        
    }
}

Node* minVal(Node* &root)
{
    if(root == NULL)
    {
        return NULL;
    }

    Node* temp = root;

    while(temp -> left)
    {
        temp = temp -> left;
    }

    return temp;
}

Node* deleteFromBST(Node* &root, int val)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root -> data == val)
    {
        //0 child
        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            return NULL;
        }

        //1 child
        //left
        if(root -> left != NULL && root -> right == NULL)
        {
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //right
        if(root -> left == NULL && root -> right != NULL)
        {
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        //2 child
        if(root -> left != NULL && root -> right != NULL)
        {
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }

    }
    else if(root -> data > val)
    {
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else
    {
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

int main() 
{
    Node* root = NULL;

    cout << "Insert Data into BST" << endl;

    insertIntoBST(root);

    cout << "Printing BST" << endl;

    levelOrderTraversal(root);

    root = deleteFromBST(root , 50);

    cout << "Printing BST After Deletion " << endl;

    levelOrderTraversal(root);

    //50 40 60 30 55 65 58 -1

    return 0;
}