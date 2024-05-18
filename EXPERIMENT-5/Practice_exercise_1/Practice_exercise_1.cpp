//. Write a C++ program to find the Inorder, Preorder, and Postorder traversals of the following tree.

#include <iostream>
using namespace std;

// Define the structure for the tree node
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

// Function to perform inorder traversal
void inorder(TreeNode* temp)
{
    if (temp == nullptr)
    {
         return;
    }
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

// Function to perform preorder traversal
void preorder(TreeNode* temp) {
    if (temp == nullptr)
    {
        return;
    }
    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}

// Function to perform postorder traversal
void postorder(TreeNode* temp) {
    if (temp == nullptr)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout << temp->data << " ";
}

int main() {
    // Creating the first tree structure
    TreeNode* root1 = new TreeNode(50);
    root1->left = new TreeNode(17);
    root1->right = new TreeNode(72);
    root1->left->left = new TreeNode(12);
    root1->left->right = new TreeNode(23);
    root1->right->left = new TreeNode(54);
    root1->right->right = new TreeNode(76);
    root1->left->left->left = new TreeNode(9);
    root1->left->left->right = new TreeNode(14);
    root1->left->right->right = new TreeNode(19);
    root1->right->left->right = new TreeNode(67);

    cout << "Inorder traversal of Tree 1: ";
    inorder(root1);
    cout << endl;

    cout << "Preorder traversal of Tree 1: ";
    preorder(root1);
    cout << endl;

    cout << "Postorder traversal of Tree 1: ";
    postorder(root1);
    cout << endl << endl;

    // Creating the second tree structure
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(3);
    root2->left->left = new TreeNode(5);
    root2->left->right = new TreeNode(2);
    root2->left->left->right = new TreeNode(4);
    root2->left->right->left = new TreeNode(7);
    root2->left->right->right = new TreeNode(8);
    root2->left->left->right->right = new TreeNode(11);
    root2->left->right->left->right = new TreeNode(9);
    root2->left->right->right->right = new TreeNode(13);
    root2->left->right->right->right->right = new TreeNode(12);
    cout << "Inorder traversal of Tree 2: ";
    inorder(root2);
    cout << endl;

    cout << "Preorder traversal of Tree 2: ";
    preorder(root2);
    cout << endl;

    cout << "Postorder traversal of Tree 2: ";
    postorder(root2);
    cout << endl;

    return 0;
}

