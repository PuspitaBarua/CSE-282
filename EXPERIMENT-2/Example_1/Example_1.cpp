//Example 1: Create a Single Linked List.

#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
// Create a Node Data Type
struct Node{
int data;
Node *next;
};
int main()
{
//Initialize three nodes with NULL pointer
Node *a =NULL,*b=NULL,*c=NULL;
// Allocate Memory for each node
a = (Node*) malloc(sizeof(Node));
b = (Node*) malloc(sizeof(Node));
c = (Node*) malloc(sizeof(Node));
// Insert Data and Connect the nodes
a->data = 10;
b->data = 20;
c->data = 30;
a->next = b;
b->next = c;
c->next = NULL;
//Traverse the Linked list
while (a!=NULL){
cout<<a->data<<" ";
a = a->next;
}
}
