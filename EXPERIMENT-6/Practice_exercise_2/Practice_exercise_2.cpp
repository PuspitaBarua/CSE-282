//Write a C++ program to check whether the following tree (Figure 1) is balanced.

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
// Function to calculate the height of a binary tree
int height(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Function to check if a binary tree is balanced
bool isBalanced(Node* root) {
    if (root == nullptr)
        return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return abs(leftHeight - rightHeight) <= 1 &&
    isBalanced(root->left) && isBalanced(root->right);
}



int main ()
{
    Node*root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->right->left->right = new Node(67);
    root->left->left->left = new Node(9);
    root->left->left->right= new Node(14);
    root->left->right->right = new Node(19);
    int h = isBalanced(root);
    if(h==0)
    {
        cout<<"Tree is not balanced";
    }
    else{
        cout<<"Tree is balanced";
    }
}

