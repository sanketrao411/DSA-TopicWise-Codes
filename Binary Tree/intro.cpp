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
    cout << "Enter The Data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1)
        return NULL;

    cout << "Enter Data For Left Node " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter Data For Right Node " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void buildfromlevel(node* &root)
{
    queue<node*> q;
    cout << "Enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter left data for " << temp -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right data for " << temp -> data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1)
        {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
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

void reverselevelorder(node* root)
{
    stack<node*> s;
    queue<node*> q;

    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        s.push(temp);

        if(temp -> right)
            q.push(temp -> right);
        if(temp -> left)
            q.push(temp -> left);
    }

    while(!s.empty())
    {
        node* temp = s.top();
        cout << temp -> data << " ";
        s.pop();
    }
}



void preOrderTraversal(node* root)
{
    if(root == NULL)
        return;

    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

void postOrderTraversal(node* root)
{
    if(root == NULL)
        return;

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

int main() 
{
    node* root = NULL;
    
    buildfromlevel(root);

    cout << "Printing Tree" << endl;
    levelOrderTraversal(root);
    cout << endl;








    // root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // cout << "Printing Tree" << endl;
    // levelOrderTraversal(root);
    // cout << endl;

    // cout << "Printing Reverse Tree" << endl;
    // reverselevelorder(root);
    // cout << endl;


    // cout << "Inorder Traversal" << endl;
    // inOrderTraversal(root);
    // cout << endl;

    // cout << "Preorder Traversal" << endl;
    // preOrderTraversal(root);
    // cout << endl;

    // cout << "Postorder Traversal" << endl;
    // postOrderTraversal(root);

    return 0;
}