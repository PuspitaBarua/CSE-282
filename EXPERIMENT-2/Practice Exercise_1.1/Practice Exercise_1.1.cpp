//1.2 . Write a C++ program to insert a new node at the end of a Singly Linked List
//[If the list has only one node]

#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int value) {
    // Create a new node with the given value
    Node* newNode = new Node(value);

    // If the list is empty, set the new node as the head
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Set the next of the last node to the new node
    current->next = newNode;
}

// Function to create a linked list
Node* createLinkedList(int values[], int n) {
    Node* head = nullptr;

    // Insert each value into the linked list
    for (int i = 0; i < n; ++i) {
        insertAtEnd(head, values[i]);
    }

    return head;
}

// Function to traverse and print the elements of the list
void traverse(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    int values[] = {1, 2, 3};

    // Create a linked list
    Node* head = createLinkedList(values, sizeof(values) / sizeof(values[0]));

    // Traverse and print the list before insertion
    std::cout << "List before insertion: ";
    traverse(head);

    // Insert a node at the end
    insertAtEnd(head, 4);

    // Traverse and print the list after insertion
    std::cout << "List after insertion: ";
    traverse(head);

    return 0;
}

