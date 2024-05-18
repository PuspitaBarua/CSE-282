//Write a C++ program to find the height of the following tree (Figure 1).


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

int calculateHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        // Compute the height of left and right subtrees recursively
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);

        // Return the maximum of left and right subtree heights, plus 1 for the current node
        return max(leftHeight, rightHeight) + 1;
    }
}

int main()
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
    int h = calculateHeight(root);
    cout<<"Height: "<<h;
    }
