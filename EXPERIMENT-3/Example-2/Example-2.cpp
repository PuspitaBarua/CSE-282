//Example 2: Reverse a SLL and return the new head.

#include<bits/stdc++.h>
using namespace std;
// This program only includes the Function
Node* ReverseList(Node *head)
{
Node *p = NULL,*c = NULL;
while(head != NULL)
{
c = head->next;
head->next = p;
p = head;
head = c;
}
head = p; // new head of the list
return head;
}

























































