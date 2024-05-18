//3. Write a C++ program to check whether a given tree is BST.

#include <bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
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

// Function to perform an inorder traversal of the tree and check if it is a BST
bool isBSTUtil(Node* root, long long min_val, long long max_val) {
    if (root == nullptr)
        return true;

   if (root->data<= min_val || root->data >= max_val)
        return false;

    return isBSTUtil(root->left, min_val, root->data) &&
     isBSTUtil(root->right, root->data, max_val);
}

bool isBST(Node* root) {
    return isBSTUtil(root, LLONG_MIN, LLONG_MAX);
}

int main() {
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
    root->left->right->right = new Node(23);

    if (isBST(root))
        cout << "The tree is a Binary Search Tree.";
    else
        cout << "The tree is not a Binary Search Tree.";

    return 0;
}
