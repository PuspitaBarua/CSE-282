//2. Write a C++ program to find the length of a singly linked list

#include<bits/stdc++.h>
using namespace std;
//create a node data type
struct Node{
    int data;
    Node *next;

    //set Node value and next pointer
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//create linked list function
Node* constructLL(int arr[], int arrsize)
{
    Node *head = new Node(arr[0]);
    Node *current = head;
    for(int i = 1; i < arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
//function to find the length of the linked list
int getLinkedListLength(Node* head)
{
    int length = 0;
    Node* current = head;
    while (current!= NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}

//Main function
int main()
{
    int arr[8] = {2,4,5,6};
    //construct linked list
    Node *head = constructLL(arr,4);
    int length = getLinkedListLength(head);
    cout<<"Length of the linked list: "<<length<<endl;
    return 0;

}
