//5. Write a C++ program to find the sum of the left child of a given tree.
//Hint: use level order traversal]

#include <bits/stdc++.h>
#include <queue>

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
// Function to find the sum of the left children of a binary tree
int sumOfLeftChild(Node* root) {
    if (root == nullptr)
        return 0;

    queue<Node*> q;
    q.push(root);

    int sum = 0;

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; ++i) {
            Node* current = q.front();
            q.pop();

            // Add the value of the left child to the sum
            if (current->left != nullptr)
                sum += current->left->data;

            // Enqueue the left and right children for the next level
            if (current->left != nullptr)
                q.push(current->left);
            if (current->right != nullptr)
                q.push(current->right);
        }
    }

    return sum;
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
    root->left->right->right = new Node(23);
    cout << "Sum of left children: " << sumOfLeftChild(root);

    return 0;
}

