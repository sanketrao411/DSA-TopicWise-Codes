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

void inOrderTraversal(node* root)
{
    if(root == NULL)
        return;

    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

void morrisTraversal(node* root)
{
    node* curr = root;
    vector<int> ans;
    node* pre = NULL;
    while(curr != NULL)
    {
        if(curr -> left == NULL)
        {
            ans.push_back(curr -> data);
            curr = curr -> right;
        }
        else
        {
            pre = curr -> left;
            while(pre -> right != NULL && pre -> right != curr)
            {
                pre = pre -> right;
            }
            if(pre -> right == NULL)
            {
                pre -> right = curr;
                curr = curr -> left;
            }
            else
            {
                pre -> right = NULL;
                ans.push_back(curr -> data);
                curr = curr -> right;
            }
        }
    }
    cout << "Printing Inorder by Morris Traversal" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
}

int main() 
{
    node* root = NULL;

    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "InOrder Tree" << endl;
    inOrderTraversal(root);
    cout << endl;

    morrisTraversal(root);

    return 0;
}