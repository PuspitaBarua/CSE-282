//Example 2: Create a linked list from an array and return the head.

#include<bits/stdc++.h>
using namespace std;
// Create a Node Data Type
struct Node
{
int data;
Node *next;
// Set Node value and next pointer
Node(int x)
{
data = x;
next = nullptr;
}
};
// Create Linked List Function
Node* constructLL(int arr[], int arrsize) {
Node *head = new Node(arr[0]); // new work as a malloc function
Node *current = head; // keep track of the new node
for (int i = 1; i<arrsize; i++)
{
Node *temp = new Node(arr[i]); // new node
current->next = temp;
current = temp;
}
return head;
}
// Traverse Function
void TraverseList(Node *head)
{
while (head!=nullptr)
{
cout<<head->data<<" ";
head = head->next;
}
}
// Main Function
int main()
{
int arr [8] = {2,4,5,6};
// Construct Linked List
Node *head = constructLL(arr,4);
// Print the List
TraverseList(head);
}
