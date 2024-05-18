//write a c++ program to draw the recursion stack for any tree traversal.

#include <iostream>
#include <stack>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void inorderTraversal(TreeNode* temp) {
    if (temp == NULL)
    {
        return;
    }

    stack<TreeNode*> st;
    TreeNode* curr = temp;

    while (curr != NULL || !st.empty()) {
        while (curr != NULL) {
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();

        // Print recursion stack
        cout << "Recursion stack: ";
        stack<TreeNode*> tempStack = st;
        while (!tempStack.empty()) {
            cout << tempStack.top()->data<< " ";
            tempStack.pop();
        }


        cout << curr->data << endl;

        curr = curr->right;
    }
}

int main() {
    // Creating a sample binary tree with 4 levels
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    cout << "Recursion Stack at each step of inorder traversal:" << endl;
    inorderTraversal(root);

    return 0;
}
