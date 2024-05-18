#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode* root, vector<int>& stack) {
    if (root == nullptr) return;

    // Push the current node's value onto the stack
    stack.push_back(root->val);

    // Recur for the left subtree
    inorder(root->left, stack);

    // Print the current recursion stack
    for (int val : stack) {
        cout << val << " ";
    }
    cout << endl;

    // Recur for the right subtree
    inorder(root->right, stack);

    // Pop the current node's value from the stack
    stack.pop_back();
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    cout << "Recursion Stack for Inorder Traversal:" << endl;
    vector<int> stack;
    inorder(root, stack);

    return 0;
}
