//Example 2: Inorder traversal using recursion.

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
        left = NULL;
        right = NULL;
    }
};
void InorderTraversal(Node*temp)
{
    if(temp==NULL)
    {
        return;
    }
    InorderTraversal(temp->left);
    cout<<temp->data<<" ";
    InorderTraversal(temp->right);
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<"Inorder Traversal: "<<endl;
    InorderTraversal(root);

}
