//Example 3: Insert a node at the beginning of the list

#include <bits/stdc++.h>

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value)
         {
             data = value;
             next = nullptr;
         }
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node*& head, int newValue) {
    // Create a new node with the given value
    Node* newNode = new Node(newValue);

    // Set the next of the new node to the current head
    newNode->next = head;

    // Update the head to the new node
    head = newNode;
}

// Function to traverse and print the elements of the list
void TraverseList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout;
}

int main() {
    // Example usage
    Node* head = nullptr;

    // Insert nodes at the beginning
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    // Traverse and print the list
    TraverseList(head);

    return 0;
}
