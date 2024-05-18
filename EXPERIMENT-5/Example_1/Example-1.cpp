//Example 1: Tree representation in C++.
#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node *left; // Left reference ptr to the node.
Node *right; // Right reference ptr to the node.
// Method to initialize the above values.
Node(int val)
{
data = val;
left = right = NULL;
}
};
int main()
{
Node* root = new Node(1);
root -> left = new Node(2);
root -> right = new Node(3);
root -> left -> left = new Node(4);
root -> left -> right = new Node(5);
root -> right -> left = new Node(6);
root -> right -> right = new Node(7);
}
