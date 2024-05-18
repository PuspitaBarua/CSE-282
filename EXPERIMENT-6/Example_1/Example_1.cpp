//Example 1: Find the height of a binary tree.

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int maxDepth(Node*root)
{
    if(root == NULL)
        return 0;
    int lh = 1+maxDepth(root->left);
    int rh = 1+maxDepth(root->right);
    return max(lh,rh);
}
int main()
{
    Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(9);
    int h = maxDepth(root);
    cout<<"Height: "<<h;
    }
